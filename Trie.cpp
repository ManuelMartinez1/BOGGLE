#include "Trie.h"
Trie::Trie()
{
    this->Final = false;
    for (int i = 0; i < Alfabeto; i++)
        this->Hijo[i] = nullptr;
}
inline void Trie::Insertar(std::string palabra)
{
    Trie* temp = this;
    for (int i = 0; i < palabra.length(); i++) {
        int index = palabra[i] - 'a';
        if (temp->Hijo[index] == nullptr)
            temp->Hijo[index] = new Trie;
        temp = temp->Hijo[index];
    }
    temp->Final = true;
}
inline bool Trie::BuscarPalabra(std::string palabra)
{
    Trie* temp = this;
    for (int i = 0; i < palabra.length(); i++) {
        int index = palabra[i] - 'a';
        if (temp->Hijo[index] == nullptr)
            return false;
        temp = temp->Hijo[index];
    }
    return temp->Final;
}
inline bool Trie::BuscarLetras(std::string palabra)
{
    Trie* temp = this;
    for (int i = 0; i < palabra.length(); i++) {
        int index = palabra[i] - 'a';
        if (temp->Hijo[index] == nullptr)
            return false;
        temp = temp->Hijo[index];
    }
    if (temp != nullptr)
        return true;
    else
        return false;
}