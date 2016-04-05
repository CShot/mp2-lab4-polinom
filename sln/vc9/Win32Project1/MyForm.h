#pragma once
#include <iostream>
#include <sstream>
using namespace std;

namespace Win32Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;

	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(274, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Первый полином";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label2->Location = System::Drawing::Point(274, 128);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Второй полином";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(25, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(131, 70);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(25, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 70);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(25, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(436, 189);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(160, 20);
			this->textBox6->TabIndex = 7;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(436, 80);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(160, 20);
			this->textBox7->TabIndex = 8;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(192, 342);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(274, 20);
			this->textBox9->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->label3->Location = System::Drawing::Point(299, 322);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Реультат";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(74, 80);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(25, 20);
			this->textBox11->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label4->Location = System::Drawing::Point(162, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 18);
			this->label4->TabIndex = 14;
			this->label4->Text = L"* y";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label5->Location = System::Drawing::Point(223, 82);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 18);
			this->label5->TabIndex = 15;
			this->label5->Text = L"* z";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label8->Location = System::Drawing::Point(105, 82);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(25, 18);
			this->label8->TabIndex = 18;
			this->label8->Text = L"* x";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label9->Location = System::Drawing::Point(105, 191);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(25, 18);
			this->label9->TabIndex = 25;
			this->label9->Text = L"* x";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label10->Location = System::Drawing::Point(223, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 18);
			this->label10->TabIndex = 24;
			this->label10->Text = L"* z";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label11->Location = System::Drawing::Point(162, 191);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 18);
			this->label11->TabIndex = 23;
			this->label11->Text = L"* y";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(74, 189);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(25, 20);
			this->textBox12->TabIndex = 22;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(253, 178);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(25, 20);
			this->textBox13->TabIndex = 21;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(131, 178);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(25, 20);
			this->textBox14->TabIndex = 20;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(192, 178);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(25, 20);
			this->textBox15->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(293, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 26;
			this->button1->Text = L"-";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(98, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 27;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(293, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 20);
			this->button3->TabIndex = 28;
			this->button3->Text = L"Добавить моном";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(293, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(137, 20);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Добавить моном";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(497, 272);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 30;
			this->button5->Text = L"*";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(294, 229);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 16);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Операции";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(436, 106);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(160, 20);
			this->button6->TabIndex = 32;
			this->button6->Text = L"Очистить полином";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(436, 215);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(160, 20);
			this->button7->TabIndex = 33;
			this->button7->Text = L"Очистить полином";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 390);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	};
}