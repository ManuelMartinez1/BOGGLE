#pragma once
#include "Instrucciones.h"
#include "Dado.h"
#include <string>
#include <vcclr.h>
namespace BOOGLE_BD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Form3x3 : public System::Windows::Forms::Form
	{
	public:
		Form3x3(void)
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
		~Form3x3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;











	protected:





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Location = System::Drawing::Point(0, 36);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(857, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 26);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3x3::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Rotar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Resolver";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 236);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 53);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Terminar";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(402, 115);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 306);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form3x3::groupBox1_Enter);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(392, 60);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Enter";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(857, 36);
			this->menuStrip2->TabIndex = 5;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(16, 33);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(184, 297);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Location = System::Drawing::Point(585, 91);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 358);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Palabras proporcionadas";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 82);
			this->label1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(161, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 82);
			this->label2->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(269, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 82);
			this->label3->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(269, 218);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 82);
			this->label4->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(161, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 82);
			this->label5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(53, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 82);
			this->label6->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(269, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 82);
			this->label7->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(161, 322);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 82);
			this->label8->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(53, 322);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 82);
			this->label9->TabIndex = 14;
			// 
			// Form3x3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(857, 479);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form3x3";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void instruccionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Instrucciones instrucciones;
	instrucciones.ShowDialog();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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

	char a = dado1->roll();
	std::string str;
	str += a;
	label1->Text = gcnew System::String(str.c_str());

	char a2 = dado2->roll();
	std::string str2;
	str2 += a2;
	label2->Text = gcnew System::String(str2.c_str());

	char a3 = dado3->roll();
	std::string str3;
	str3 += a3;
	label3->Text = gcnew System::String(str3.c_str());

	char a4 = dado4->roll();
	std::string str4;
	str4 += a4;
	label4->Text = gcnew System::String(str4.c_str());

	char a5 = dado5->roll();
	std::string str5;
	str5 += a5;
	label5->Text = gcnew System::String(str5.c_str());

	char a6 = dado6->roll();
	std::string str6;
	str6 += a6;
	label6->Text = gcnew System::String(str6.c_str());

	char a7 = dado7->roll();
	std::string str7;
	str7 += a7;
	label7->Text = gcnew System::String(str7.c_str());

	char a8 = dado8->roll();
	std::string str8;
	str8 += a8;
	label8->Text = gcnew System::String(str8.c_str());

	char a9 = dado9->roll();
	std::string str9;
	str9 += a9;
	label9->Text = gcnew System::String(str9.c_str());
}
};
}
