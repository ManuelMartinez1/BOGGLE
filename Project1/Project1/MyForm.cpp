#include "MyForm.h"
#include "Dado.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BOOGLE_BD::MyForm form;
	Application::Run(% form);
}
