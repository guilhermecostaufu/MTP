#pragma once

namespace projGUI2 {

	#define MAXCHARDISP 16

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	static bool separado = false;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;


	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::Color::White;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(19, 28);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(224, 43);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(19, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(40, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(65, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(40, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(111, 93);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 45);
			this->button3->TabIndex = 1;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(157, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 45);
			this->button4->TabIndex = 1;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(203, 93);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 45);
			this->button5->TabIndex = 1;
			this->button5->Text = L"C";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(19, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 45);
			this->button6->TabIndex = 1;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(65, 144);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(40, 45);
			this->button7->TabIndex = 1;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(111, 144);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(40, 45);
			this->button8->TabIndex = 1;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(157, 144);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(40, 45);
			this->button9->TabIndex = 1;
			this->button9->Text = L"-";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(203, 144);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(40, 45);
			this->button10->TabIndex = 1;
			this->button10->Text = L"n!";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(19, 195);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(40, 45);
			this->button11->TabIndex = 1;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(65, 195);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(40, 45);
			this->button12->TabIndex = 1;
			this->button12->Text = L"2";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(111, 195);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(40, 45);
			this->button13->TabIndex = 1;
			this->button13->Text = L"3";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(157, 195);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(40, 45);
			this->button14->TabIndex = 1;
			this->button14->Text = L"×";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(203, 195);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(40, 45);
			this->button15->TabIndex = 1;
			this->button15->Text = L"x^y";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(19, 246);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(40, 45);
			this->button16->TabIndex = 1;
			this->button16->Text = L"0";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(65, 246);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(40, 45);
			this->button17->TabIndex = 1;
			this->button17->Text = L",";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(111, 246);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(40, 45);
			this->button18->TabIndex = 1;
			this->button18->Text = L"±";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(157, 246);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(40, 45);
			this->button19->TabIndex = 1;
			this->button19->Text = L"÷";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::Control;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(203, 246);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(40, 45);
			this->button20->TabIndex = 1;
			this->button20->Text = L"√";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(65, 297);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(132, 53);
			this->button21->TabIndex = 2;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(270, 362);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
		double numero;
		char op;
		//bool separado;
		void LimpaDisplay() {
			separado = false;
			lblDisplay->Text = "0";
		}
		void LimpaTudo() {
			LimpaDisplay();
			numero = 0.0;
			op = '\0';
		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {				 
			 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "1";
			 else
				 lblDisplay->Text = lblDisplay->Text + "1";
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "2";
			 else
				 lblDisplay->Text = lblDisplay->Text + "2";
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "3";
			 else
				 lblDisplay->Text = lblDisplay->Text + "3";
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "4";
			 else
				 lblDisplay->Text = lblDisplay->Text + "4";
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "5";
			 else
				 lblDisplay->Text = lblDisplay->Text + "5";
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "6";
			 else
				 lblDisplay->Text = lblDisplay->Text + "6";
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "7";
			 else
				 lblDisplay->Text = lblDisplay->Text + "7";
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "8";
			 else
				 lblDisplay->Text = lblDisplay->Text + "8";
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text == "0")
				 lblDisplay->Text = "9";
			 else
				 lblDisplay->Text = lblDisplay->Text + "9";
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text != "0")
				 lblDisplay->Text = lblDisplay->Text + "0";
		 }
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((lblDisplay->Text->Length < MAXCHARDISP) && !separado)
			 {
				 lblDisplay->Text = lblDisplay->Text +  ",";
				 separado = true;
			 }
			 
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 numero = System::Convert::ToDouble(lblDisplay->Text);
			 op = '+';
			 LimpaDisplay();
		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero2 = System::Convert::ToDouble(lblDisplay->Text);
			 switch(op) {
			 case '+':
				 lblDisplay->Text = System::Convert::ToString(numero + numero2);
				 break;
			 case '-':
				 lblDisplay->Text = System::Convert::ToString(numero - numero2);
				 break;
			 case '*':
				 lblDisplay->Text = System::Convert::ToString(numero * numero2);
				 break;
			 case '/':
				 lblDisplay->Text = System::Convert::ToString(numero / numero2);
				 break;
			 }
		 }
};
}

