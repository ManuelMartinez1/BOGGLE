#include "MyForm.h"
#include "Dado.h"
#include "ArbolTrie.h"
#include<iostream>

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args) {

	Trie* raiz = new Trie();

	Dado* dado1 = new Dado("ARHSDE");
	Dado* dado2 = new Dado("FUAARB");
	Dado* dado3 = new Dado("IOTALG");
	Dado* dado4 = new Dado();
	Dado* dado5 = new Dado("FOMTUI");
	Dado* dado6 = new Dado("OODBLG");
	Dado* dado7 = new Dado("RPSZTL");
	Dado* dado8 = new Dado("EBIOUA");
	Dado* dado9 = new Dado("CAREME");
	Dado* dado10 = new Dado("RSJEFI");
	Dado* dado11 = new Dado("NSXJAH");
	Dado* dado12 = new Dado();
	Dado* dado13 = new Dado("NBIMEE");
	Dado* dado14 = new Dado("BAANIT");
	Dado* dado15 = new Dado("EPVOCU");
	Dado* dado16 = new Dado("SCAAPT");

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BOOGLE_BD::MyForm form;
	Application::Run(% form);
}
