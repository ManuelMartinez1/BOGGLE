#pragma once
#include "Dado.h"
#include "tab.h"
#include <string>
#include <fstream>
#include <vcclr.h>
#include <math.h>
#include <msclr/marshal_cppstd.h>
#include "Trie.h"
#include "Graph.h"
namespace BOOGLE_BD {
	using namespace System::Text;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;

	/// <summary>
	/// Summary for Form4x4
	/// </summary>
	public ref class Form4x4 : public System::Windows::Forms::Form
	{

	public:
		Form4x4(void)
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
		~Form4x4()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ListBox^ listBox1;

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
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Location = System::Drawing::Point(585, 100);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(222, 358);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Palabras proporcionadas";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(7, 26);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(209, 324);
			this->listBox1->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(392, 69);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(138, 40);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Enter";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form4x4::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(402, 124);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(144, 306);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Opciones";
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Nuevo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form4x4::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 53);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Resolver";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form4x4::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 53);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Rotar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form4x4::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(67, 76);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 26);
			this->textBox1->TabIndex = 9;
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(871, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(41, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 59);
			this->label1->TabIndex = 14;
			this->label1->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(132, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 59);
			this->label2->TabIndex = 15;
			this->label2->Text = L"A";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(220, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 59);
			this->label3->TabIndex = 16;
			this->label3->Text = L"A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(302, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 59);
			this->label4->TabIndex = 17;
			this->label4->Text = L"A";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(41, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 59);
			this->label5->TabIndex = 21;
			this->label5->Text = L"A";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(132, 211);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 59);
			this->label6->TabIndex = 20;
			this->label6->Text = L"A";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(220, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 59);
			this->label7->TabIndex = 19;
			this->label7->Text = L"A";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(302, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 59);
			this->label8->TabIndex = 18;
			this->label8->Text = L"A";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(41, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 59);
			this->label9->TabIndex = 25;
			this->label9->Text = L"A";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(132, 279);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 59);
			this->label10->TabIndex = 24;
			this->label10->Text = L"A";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(220, 279);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 59);
			this->label11->TabIndex = 23;
			this->label11->Text = L"A";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(302, 279);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(61, 59);
			this->label12->TabIndex = 22;
			this->label12->Text = L"A";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(41, 360);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 59);
			this->label13->TabIndex = 29;
			this->label13->Text = L"A";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(132, 360);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(61, 59);
			this->label14->TabIndex = 28;
			this->label14->Text = L"A";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(220, 360);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(61, 59);
			this->label15->TabIndex = 27;
			this->label15->Text = L"A";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(302, 360);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(61, 59);
			this->label16->TabIndex = 26;
			this->label16->Text = L"A";
			// 
			// Form4x4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 521);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Form4x4";
			this->Text = L"Form4x4";
			this->Load += gcnew System::EventHandler(this, &Form4x4::Form4x4_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	System::String^ getSystemString(char c) {
		std::string str;
		str += c;
		return gcnew System::String(str.c_str());
	}
	System::String^ getSystemString(std::string str) {
		return gcnew System::String(str.c_str());
	}

	void updateBoard() {
		label1->Text = gcnew System::String(getSystemString(global_tablero[0]));
		label2->Text = gcnew System::String(getSystemString(global_tablero[1]));
		label3->Text = gcnew System::String(getSystemString(global_tablero[2]));
		label4->Text = gcnew System::String(getSystemString(global_tablero[3]));
		label5->Text = gcnew System::String(getSystemString(global_tablero[4]));
		label6->Text = gcnew System::String(getSystemString(global_tablero[5]));
		label7->Text = gcnew System::String(getSystemString(global_tablero[6]));
		label8->Text = gcnew System::String(getSystemString(global_tablero[7]));
		label9->Text = gcnew System::String(getSystemString(global_tablero[8]));
		label10->Text = gcnew System::String(getSystemString(global_tablero[9]));
		label11->Text = gcnew System::String(getSystemString(global_tablero[10]));
		label12->Text = gcnew System::String(getSystemString(global_tablero[11]));
		label13->Text = gcnew System::String(getSystemString(global_tablero[12]));
		label14->Text = gcnew System::String(getSystemString(global_tablero[13]));
		label15->Text = gcnew System::String(getSystemString(global_tablero[14]));
		label16->Text = gcnew System::String(getSystemString(global_tablero[15]));
	}

	//NUEVO 
	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();

		Dado* dado = new Dado[16];
		std::string configuraciones[] = { "AAEEGN", "ABBJOO" , "ACHOPS" , "AFFKPS" , "AOOTTW", "CIMOTU" , "DEILRX" , "DELRVY" , "DISTTY" , "EEGHNW", "EEINSU", "EHRTVW","EIOSST" , "ELRTTY", "HIMNQU", "HLNNRZ" };
		for (int i = 0; i < 16; i++) {
			dado[i] = Dado(configuraciones[i]);
		}

		global_tablero = "";
		for (int i = 0; i < 16; i++) {
			global_tablero += dado[i].roll();
		}
		updateBoard();
		Trie* diccionary = new Trie();
		diccionary->cargarDiccionario();
		Graph* graph = new Graph(4);
		allWordsInBoard = graph->getAllPossibleWords(global_tablero, diccionary);
	}

//ROTAR
public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string newTablero = "";
	for (int i = 0; i < 4; i++) {
		std::string str;
		for (int j = 0; j < 4; j++) {
			str += global_tablero[i + (j * 4)];
		}
		for (int j = 3; j >= 0; j--) {
			newTablero += str[j];
		}
	}
	global_tablero = newTablero;
	updateBoard();
}

	bool wordInBoard(std::string str) {
		for (auto i : allWordsInBoard) {
			if (i == str) {
				return true;
			}
		}
		return false;
	}

	//ENTER
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ msg = "No se puede formar la palabra. intentalo de nuevo";
		System::String^ strS = textBox1->Text;
		std::string str = msclr::interop::marshal_as<std::string>(strS);

		if (wordInBoard(str)) {
			listBox1->Items->Add(textBox1->Text);
		}
		else {
			MessageBox::Show(msg);
		}
	}
	
		   //RESOLVER
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Items->Clear();
		for (auto i : allWordsInBoard) {
			listBox1->Items->Add(getSystemString(i));
		}
	}

	private: System::Void Form4x4_Load(System::Object^ sender, System::EventArgs^ e) {

	}
};

}
