#pragma once

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
};
Trie::Trie()
{
    this->Final = false;
    for (int i = 0;i < Alfabeto;i++)
        this->Hijo[i] = nullptr;
}
void Trie::Insertar(std::string palabra)
{
    Trie* temp = this;
    for (int i = 0;i < palabra.length();i++) {
        int index = palabra[i] - 'a';
        if (temp->Hijo[index] == nullptr)
            temp->Hijo[index] = new Trie;
        temp = temp->Hijo[index];
    }
    temp->Final = true;
}
bool Trie::BuscarPalabra(std::string palabra)
{
    Trie* temp = this;
    for (int i = 0;i < palabra.length();i++) {
        int index = palabra[i] - 'a';
        if (temp->Hijo[index] == nullptr)
            return false;
        temp = temp->Hijo[index];
    }
    return temp->Final;
}
bool Trie::BuscarLetras(std::string palabra)
{
    Trie* temp = this;
    for (int i = 0;i < palabra.length();i++) {
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