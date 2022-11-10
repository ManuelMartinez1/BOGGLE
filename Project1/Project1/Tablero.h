#pragma once
#include "Form3x3.h"
#include "Form4x4.h"
namespace BOOGLE_BD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Tablero
	/// </summary>
	public ref class Tablero : public System::Windows::Forms::Form
	{
	public:
		Tablero(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Tablero()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Selecciona tu tablero";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 88);
			this->button1->TabIndex = 1;
			this->button1->Text = L"3 x 3";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Tablero::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(194, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 88);
			this->button2->TabIndex = 2;
			this->button2->Text = L"4 x 4";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Tablero::button2_Click);
			// 
			// Tablero
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(354, 297);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Tablero";
			this->Text = L"Tablero";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		Form3x3 tresVentana;
		tresVentana.ShowDialog();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		Form4x4 cuatroVentana;
		cuatroVentana.ShowDialog();
	}
	};
}
