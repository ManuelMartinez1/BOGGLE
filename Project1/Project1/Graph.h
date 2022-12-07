#pragma once
#include <vector>
#include <string>
#include "Trie.h"
#include "Queue.h"

class Graph {
    std::vector <int> adj[17];
public:
    Graph(int n) {
        for (int i = 1; i <= (n * n); i++) {
            for (int j = 1; j <= (n * n); j++) {
                if (i == j)
                    continue;
                if ((j - 1) / n == (i - 1) / n) //misma fila
                    if (j + 1 == i || j - 1 == i) //misma fila mas menos uno
                        adj[i].push_back(j);
                if (i % n == j % n) //si estan en la misma columna
                    if ((j + n == i) || (j - n == i))   //si esta arriba o abajo
                        adj[i].push_back(j);
                //si esta en diagonal
                if ((i - 1) / n == ((j - 1) / n) + 1 || (i - 1) / n == ((j - 1) / n) - 1) //is esta mas menos una fila
                    if (j - (n + 1) == i || j - (n - 1) == i || j + (n + 1) == i || j + (n - 1) == i)
                        adj[i].push_back(j);
            }
        }
    }
    std::vector<std::string> getAllPossibleWords(std::string tablero, Trie* raiz) {
        std::vector<std::string> words;
        Queue<std::vector<int>> q;
        for (int i = 1; i < tablero.size(); i++) {
            std::vector<int> path;
            path.push_back(i);
            q.push(path);
            while (!q.isEmpty()) {
                path = q.front(); q.pop();
                if (pathIsWord(path, tablero, raiz))
                    words.push_back(getWordByIndex(path, tablero));
                int last = path[path.size() - 1]; //el ultimo en mi path
                for (auto u : adj[last]) {
                    //metelo si no esta en el path
                    if (find(path.begin(), path.end(), u) != path.end())
                        continue;
                    std::vector <int> vec(path); //copia de path
                    vec.push_back(u);
                    if (pathInTrie(path, tablero, raiz))
                        q.push(vec);
                }
            }
        }
        return words;
    }

private:
    std::string getWordByIndex(std::vector<int>& vec, std::string tablero) {
        std::string s;
        for (auto u : vec)
            s.push_back(tablero[u - 1]);
        return s;
    }
    bool pathInTrie(std::vector<int>& vec, std::string tablero, Trie* root) {
        if (root->BuscarLetras(getWordByIndex(vec, tablero)))
            return true;
        return false;
    }
    bool pathIsWord(std::vector<int>& vec, std::string tablero, Trie* root) {
        if (root->BuscarPalabra(getWordByIndex(vec, tablero)))
            return true;
        return false;
    }
};

