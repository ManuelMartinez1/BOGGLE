#pragma once
#include <string>
const int Alfabeto = 26;

class Trie
{
private:
    Trie* Hijo[Alfabeto];
    bool Final;
public:
    Trie();
    void Insertar(std::string palabra);
    bool BuscarPalabra(std::string palabra);
    bool BuscarLetras(std::string palabra);
    void cargarDiccionario();
};