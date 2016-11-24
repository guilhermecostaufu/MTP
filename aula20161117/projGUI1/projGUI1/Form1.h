#pragma once

namespace projGUI1 {

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
	private: System::Windows::Forms::Button^  btnAcao;
	protected: 

	private: System::Windows::Forms::TextBox^  txtEntrada;
	private: System::Windows::Forms::CheckBox^  chkNome;

	protected: 


	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbSelecao;


	private: System::Windows::Forms::GroupBox^  grpRadioButtons;
	private: System::Windows::Forms::RadioButton^  rdbOpcao2;


	private: System::Windows::Forms::RadioButton^  rdbOpcao1;
	private: System::Windows::Forms::PictureBox^  picImagem;
	private: System::Windows::Forms::RadioButton^  rdbOpcao3;
	private: System::Windows::Forms::CheckBox^  chkIdade;




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
			this->btnAcao = (gcnew System::Windows::Forms::Button());
			this->txtEntrada = (gcnew System::Windows::Forms::TextBox());
			this->chkNome = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbSelecao = (gcnew System::Windows::Forms::ComboBox());
			this->grpRadioButtons = (gcnew System::Windows::Forms::GroupBox());
			this->rdbOpcao3 = (gcnew System::Windows::Forms::RadioButton());
			this->rdbOpcao2 = (gcnew System::Windows::Forms::RadioButton());
			this->rdbOpcao1 = (gcnew System::Windows::Forms::RadioButton());
			this->picImagem = (gcnew System::Windows::Forms::PictureBox());
			this->chkIdade = (gcnew System::Windows::Forms::CheckBox());
			this->grpRadioButtons->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImagem))->BeginInit();
			this->SuspendLayout();
			// 
			// btnAcao
			// 
			this->btnAcao->Location = System::Drawing::Point(21, 279);
			this->btnAcao->Name = L"btnAcao";
			this->btnAcao->Size = System::Drawing::Size(75, 23);
			this->btnAcao->TabIndex = 0;
			this->btnAcao->Text = L"Vai Planeta!";
			this->btnAcao->UseVisualStyleBackColor = true;
			this->btnAcao->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtEntrada
			// 
			this->txtEntrada->Location = System::Drawing::Point(21, 66);
			this->txtEntrada->Name = L"txtEntrada";
			this->txtEntrada->Size = System::Drawing::Size(100, 20);
			this->txtEntrada->TabIndex = 1;
			// 
			// chkNome
			// 
			this->chkNome->AutoSize = true;
			this->chkNome->Location = System::Drawing::Point(21, 119);
			this->chkNome->Name = L"chkNome";
			this->chkNome->Size = System::Drawing::Size(54, 17);
			this->chkNome->TabIndex = 2;
			this->chkNome->Text = L"Nome";
			this->chkNome->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(18, 13);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(454, 36);
			this->lblMensagem->TabIndex = 3;
			this->lblMensagem->Text = L"Mensagem";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// cmbSelecao
			// 
			this->cmbSelecao->FormattingEnabled = true;
			this->cmbSelecao->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"0 (zero)", L"1", L"2", L"3", L"4", L"5", L"6", 
				L"7", L"8", L"9"});
			this->cmbSelecao->Location = System::Drawing::Point(351, 281);
			this->cmbSelecao->Name = L"cmbSelecao";
			this->cmbSelecao->Size = System::Drawing::Size(121, 21);
			this->cmbSelecao->TabIndex = 4;
			// 
			// grpRadioButtons
			// 
			this->grpRadioButtons->Controls->Add(this->rdbOpcao3);
			this->grpRadioButtons->Controls->Add(this->rdbOpcao2);
			this->grpRadioButtons->Controls->Add(this->rdbOpcao1);
			this->grpRadioButtons->Location = System::Drawing::Point(12, 166);
			this->grpRadioButtons->Name = L"grpRadioButtons";
			this->grpRadioButtons->Size = System::Drawing::Size(129, 107);
			this->grpRadioButtons->TabIndex = 5;
			this->grpRadioButtons->TabStop = false;
			this->grpRadioButtons->Text = L"Tipo";
			// 
			// rdbOpcao3
			// 
			this->rdbOpcao3->AutoSize = true;
			this->rdbOpcao3->Location = System::Drawing::Point(15, 73);
			this->rdbOpcao3->Name = L"rdbOpcao3";
			this->rdbOpcao3->Size = System::Drawing::Size(88, 17);
			this->rdbOpcao3->TabIndex = 2;
			this->rdbOpcao3->TabStop = true;
			this->rdbOpcao3->Text = L"Opção Verde";
			this->rdbOpcao3->UseVisualStyleBackColor = true;
			// 
			// rdbOpcao2
			// 
			this->rdbOpcao2->AutoSize = true;
			this->rdbOpcao2->Location = System::Drawing::Point(15, 47);
			this->rdbOpcao2->Name = L"rdbOpcao2";
			this->rdbOpcao2->Size = System::Drawing::Size(104, 17);
			this->rdbOpcao2->TabIndex = 1;
			this->rdbOpcao2->TabStop = true;
			this->rdbOpcao2->Text = L"Opção Vermelho";
			this->rdbOpcao2->UseVisualStyleBackColor = true;
			// 
			// rdbOpcao1
			// 
			this->rdbOpcao1->AutoSize = true;
			this->rdbOpcao1->Location = System::Drawing::Point(15, 23);
			this->rdbOpcao1->Name = L"rdbOpcao1";
			this->rdbOpcao1->Size = System::Drawing::Size(80, 17);
			this->rdbOpcao1->TabIndex = 0;
			this->rdbOpcao1->TabStop = true;
			this->rdbOpcao1->Text = L"Opção Azul";
			this->rdbOpcao1->UseVisualStyleBackColor = true;
			// 
			// picImagem
			// 
			this->picImagem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picImagem.Image")));
			this->picImagem->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picImagem.InitialImage")));
			this->picImagem->Location = System::Drawing::Point(167, 52);
			this->picImagem->Name = L"picImagem";
			this->picImagem->Size = System::Drawing::Size(305, 223);
			this->picImagem->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picImagem->TabIndex = 6;
			this->picImagem->TabStop = false;
			// 
			// chkIdade
			// 
			this->chkIdade->AutoSize = true;
			this->chkIdade->Location = System::Drawing::Point(21, 143);
			this->chkIdade->Name = L"chkIdade";
			this->chkIdade->Size = System::Drawing::Size(53, 17);
			this->chkIdade->TabIndex = 7;
			this->chkIdade->Text = L"Idade";
			this->chkIdade->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 325);
			this->Controls->Add(this->chkIdade);
			this->Controls->Add(this->picImagem);
			this->Controls->Add(this->grpRadioButtons);
			this->Controls->Add(this->cmbSelecao);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkNome);
			this->Controls->Add(this->txtEntrada);
			this->Controls->Add(this->btnAcao);
			this->Name = L"Form1";
			this->Text = L"Meu 1º Programa";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->grpRadioButtons->ResumeLayout(false);
			this->grpRadioButtons->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picImagem))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				// A partir daqui
				 lblMensagem->Text = "";
				 if(chkNome->Checked)
					 lblMensagem->Text = lblMensagem->Text + "Sansão, ";
				 if(chkIdade->Checked)
					 lblMensagem->Text = lblMensagem->Text + "2 meses, ";
				 lblMensagem->Text = lblMensagem->Text + "filhotes: " +
					 System::Convert::ToString(cmbSelecao->SelectedItem) + ", ";
				 lblMensagem->Text = lblMensagem->Text + txtEntrada->Text;
				 if(rdbOpcao1->Checked)
					 lblMensagem->ForeColor = System::Drawing::Color::Blue;
				 if(rdbOpcao2->Checked)
					 lblMensagem->ForeColor = System::Drawing::Color::Red;
				 if(rdbOpcao3->Checked)
					 lblMensagem->ForeColor = System::Drawing::Color::Green;
			 }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 // Coisas que serão consideradas ANTES do programa rodar
			 cmbSelecao->SelectedIndex = 0;
		 }
};
}

