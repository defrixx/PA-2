#pragma once
#include <time.h>
#include <random>

namespace DLP_client_visual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::Net::Sockets;

	/// <summary>
	/// 
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	public:
	private: System::Windows::Forms::GroupBox^  groupBox1;








	private: System::Windows::Forms::TextBox^  txtLogin;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::TextBox^  txtCaptcha;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  auth;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Button^  crebase;
	private: System::Windows::Forms::Button^  delbase;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  regis;
	private: System::Windows::Forms::Button^  addsub;
	private: System::Windows::Forms::Button^  edpass;
	private: System::Windows::Forms::Button^  edlog;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtInConsole;
	private: System::Windows::Forms::Button^  buttonEDLOG;

	private: System::Windows::Forms::TextBox^  txtInConsole2;
	private: System::Windows::Forms::Button^  buttonEDPASS;
	private: System::Windows::Forms::Label^  CaptchaLab;
	private: System::Windows::Forms::Button^  gencapt;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  butsearch;
	private: System::Windows::Forms::Button^  buttonSendSubj;
	private: System::Windows::Forms::Label^  PingBut;
	private: System::Windows::Forms::Button^  ButCheck;
	private: System::Windows::Forms::TabPage^  tabAdd;
	private: System::Windows::Forms::TextBox^  txtDateB;


	private: System::Windows::Forms::TextBox^  txtMonthB;



	private: System::Windows::Forms::TextBox^  txtYearB;

	private: System::Windows::Forms::TextBox^  txtPhNum;

	private: System::Windows::Forms::TextBox^  txtTIN;

	private: System::Windows::Forms::TextBox^  txtSnils;
	private: System::Windows::Forms::TextBox^  txtChild;


	private: System::Windows::Forms::TextBox^  txtCrime;

	private: System::Windows::Forms::TextBox^  txtMilRec;

	private: System::Windows::Forms::TextBox^  txtPasNum;

	private: System::Windows::Forms::TextBox^  txtPasSer;

	private: System::Windows::Forms::TextBox^  txtInc;

	private: System::Windows::Forms::TextBox^  txtProf;

	private: System::Windows::Forms::TextBox^  txtEduc;

	private: System::Windows::Forms::TextBox^  txtMatSta;

	private: System::Windows::Forms::TextBox^  txtSex;

	private: System::Windows::Forms::TextBox^  txtAddress;

	private: System::Windows::Forms::TextBox^  txtPlaceR;


	private: System::Windows::Forms::TextBox^  txtPlaceB;

	private: System::Windows::Forms::TextBox^  txtMiddleName;

	private: System::Windows::Forms::TextBox^  txtName;

	private: System::Windows::Forms::TextBox^  txtSurname;

	private: System::Windows::Forms::TextBox^  txtID;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  ButSendAdd;
private: System::Windows::Forms::Button^  butExit;
private: System::Windows::Forms::TextBox^  textSocSta;
private: System::Windows::Forms::TextBox^  textDrLic;



private: System::Windows::Forms::TextBox^  textCit;
private: System::Windows::Forms::Button^  butOff;




















	public:	NetworkStream ^ stream;
	public:	MyForm(void)
	{
		InitializeComponent();

		//
		//
		//

	}

	protected:
		/// <summary>
		/// 
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  txtOutConsole;



	protected:


	private:
		/// <summary>
		/// 
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>

		/// </summary>
		void InitializeComponent(void)
		{
			this->txtOutConsole = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtCaptcha = (gcnew System::Windows::Forms::TextBox());
			this->CaptchaLab = (gcnew System::Windows::Forms::Label());
			this->gencapt = (gcnew System::Windows::Forms::Button());
			this->auth = (gcnew System::Windows::Forms::Button());
			this->regis = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->butExit = (gcnew System::Windows::Forms::Button());
			this->butsearch = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->butOff = (gcnew System::Windows::Forms::Button());
			this->buttonSendSubj = (gcnew System::Windows::Forms::Button());
			this->buttonEDPASS = (gcnew System::Windows::Forms::Button());
			this->buttonEDLOG = (gcnew System::Windows::Forms::Button());
			this->txtInConsole2 = (gcnew System::Windows::Forms::TextBox());
			this->txtInConsole = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->edpass = (gcnew System::Windows::Forms::Button());
			this->crebase = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->delbase = (gcnew System::Windows::Forms::Button());
			this->edlog = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->addsub = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->PingBut = (gcnew System::Windows::Forms::Label());
			this->ButCheck = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tabAdd = (gcnew System::Windows::Forms::TabPage());
			this->textSocSta = (gcnew System::Windows::Forms::TextBox());
			this->textDrLic = (gcnew System::Windows::Forms::TextBox());
			this->textCit = (gcnew System::Windows::Forms::TextBox());
			this->ButSendAdd = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->txtDateB = (gcnew System::Windows::Forms::TextBox());
			this->txtMonthB = (gcnew System::Windows::Forms::TextBox());
			this->txtYearB = (gcnew System::Windows::Forms::TextBox());
			this->txtPhNum = (gcnew System::Windows::Forms::TextBox());
			this->txtTIN = (gcnew System::Windows::Forms::TextBox());
			this->txtSnils = (gcnew System::Windows::Forms::TextBox());
			this->txtChild = (gcnew System::Windows::Forms::TextBox());
			this->txtCrime = (gcnew System::Windows::Forms::TextBox());
			this->txtMilRec = (gcnew System::Windows::Forms::TextBox());
			this->txtPasNum = (gcnew System::Windows::Forms::TextBox());
			this->txtPasSer = (gcnew System::Windows::Forms::TextBox());
			this->txtInc = (gcnew System::Windows::Forms::TextBox());
			this->txtProf = (gcnew System::Windows::Forms::TextBox());
			this->txtEduc = (gcnew System::Windows::Forms::TextBox());
			this->txtMatSta = (gcnew System::Windows::Forms::TextBox());
			this->txtSex = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaceR = (gcnew System::Windows::Forms::TextBox());
			this->txtPlaceB = (gcnew System::Windows::Forms::TextBox());
			this->txtMiddleName = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabAdd->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtOutConsole
			// 
			this->txtOutConsole->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtOutConsole->Enabled = false;
			this->txtOutConsole->Location = System::Drawing::Point(2, 15);
			this->txtOutConsole->Margin = System::Windows::Forms::Padding(2);
			this->txtOutConsole->Multiline = true;
			this->txtOutConsole->Name = L"txtOutConsole";
			this->txtOutConsole->Size = System::Drawing::Size(785, 217);
			this->txtOutConsole->TabIndex = 1;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				70)));
			this->tableLayoutPanel1->Controls->Add(this->txtLogin, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtPassword, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->txtCaptcha, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->CaptchaLab, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->gencapt, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->auth, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->regis, 1, 4);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 76)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(773, 324);
			this->tableLayoutPanel1->TabIndex = 3;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::tableLayoutPanel1_Paint);
			// 
			// txtLogin
			// 
			this->txtLogin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtLogin->Enabled = false;
			this->txtLogin->Location = System::Drawing::Point(233, 2);
			this->txtLogin->Margin = System::Windows::Forms::Padding(2);
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(538, 20);
			this->txtLogin->TabIndex = 5;
			this->txtLogin->Text = L"some_login";
			this->txtLogin->TextChanged += gcnew System::EventHandler(this, &MyForm::txtLogin_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtPassword->Enabled = false;
			this->txtPassword->Location = System::Drawing::Point(233, 26);
			this->txtPassword->Margin = System::Windows::Forms::Padding(2);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(538, 20);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->Text = L"some_password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(2, 0);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(2, 24);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(227, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(2, 48);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 15);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Captcha";
			// 
			// txtCaptcha
			// 
			this->txtCaptcha->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtCaptcha->Enabled = false;
			this->txtCaptcha->Location = System::Drawing::Point(233, 50);
			this->txtCaptcha->Margin = System::Windows::Forms::Padding(2);
			this->txtCaptcha->Name = L"txtCaptcha";
			this->txtCaptcha->Size = System::Drawing::Size(538, 20);
			this->txtCaptcha->TabIndex = 9;
			this->txtCaptcha->Text = L"some_captcha";
			// 
			// CaptchaLab
			// 
			this->CaptchaLab->AutoSize = true;
			this->CaptchaLab->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CaptchaLab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CaptchaLab->Location = System::Drawing::Point(234, 72);
			this->CaptchaLab->Name = L"CaptchaLab";
			this->CaptchaLab->Size = System::Drawing::Size(536, 30);
			this->CaptchaLab->TabIndex = 11;
			this->CaptchaLab->Text = L"Captcha";
			// 
			// gencapt
			// 
			this->gencapt->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gencapt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gencapt->Location = System::Drawing::Point(3, 75);
			this->gencapt->Name = L"gencapt";
			this->gencapt->Size = System::Drawing::Size(225, 24);
			this->gencapt->TabIndex = 12;
			this->gencapt->Text = L"Generate captcha";
			this->gencapt->UseVisualStyleBackColor = true;
			this->gencapt->Click += gcnew System::EventHandler(this, &MyForm::gencapt_Click);
			// 
			// auth
			// 
			this->auth->Enabled = false;
			this->auth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->auth->Location = System::Drawing::Point(2, 104);
			this->auth->Margin = System::Windows::Forms::Padding(2);
			this->auth->Name = L"auth";
			this->auth->Size = System::Drawing::Size(227, 72);
			this->auth->TabIndex = 0;
			this->auth->Text = L"Authentication";
			this->auth->UseVisualStyleBackColor = true;
			this->auth->Click += gcnew System::EventHandler(this, &MyForm::auth_Click);
			// 
			// regis
			// 
			this->regis->Enabled = false;
			this->regis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->regis->Location = System::Drawing::Point(234, 105);
			this->regis->Name = L"regis";
			this->regis->Size = System::Drawing::Size(219, 69);
			this->regis->TabIndex = 10;
			this->regis->Text = L"Registration";
			this->regis->UseVisualStyleBackColor = true;
			this->regis->Click += gcnew System::EventHandler(this, &MyForm::regis_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtOutConsole);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Location = System::Drawing::Point(2, 364);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(789, 234);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Console output";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->tabControl1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->groupBox1, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 238)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(793, 600);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabAdd);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(787, 356);
			this->tabControl1->TabIndex = 6;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tableLayoutPanel1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(779, 330);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Auth/Reg";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->butExit);
			this->tabPage2->Controls->Add(this->butsearch);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->edpass);
			this->tabPage2->Controls->Add(this->crebase);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->delbase);
			this->tabPage2->Controls->Add(this->edlog);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->addsub);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Enabled = false;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(779, 330);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Access";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// butExit
			// 
			this->butExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->butExit->Location = System::Drawing::Point(609, 205);
			this->butExit->Name = L"butExit";
			this->butExit->Size = System::Drawing::Size(75, 23);
			this->butExit->TabIndex = 21;
			this->butExit->Text = L"Exit";
			this->butExit->UseVisualStyleBackColor = true;
			this->butExit->Click += gcnew System::EventHandler(this, &MyForm::butExit_Click);
			// 
			// butsearch
			// 
			this->butsearch->Location = System::Drawing::Point(215, 159);
			this->butsearch->Name = L"butsearch";
			this->butsearch->Size = System::Drawing::Size(108, 23);
			this->butsearch->TabIndex = 20;
			this->butsearch->Text = L"Search";
			this->butsearch->UseVisualStyleBackColor = true;
			this->butsearch->Click += gcnew System::EventHandler(this, &MyForm::butsearch_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(13, 162);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(197, 15);
			this->label14->TabIndex = 19;
			this->label14->Text = L"4. Search and show subject --";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->butOff);
			this->groupBox2->Controls->Add(this->buttonSendSubj);
			this->groupBox2->Controls->Add(this->buttonEDPASS);
			this->groupBox2->Controls->Add(this->buttonEDLOG);
			this->groupBox2->Controls->Add(this->txtInConsole2);
			this->groupBox2->Controls->Add(this->txtInConsole);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(3, 234);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(773, 93);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Console input";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// butOff
			// 
			this->butOff->Location = System::Drawing::Point(692, 62);
			this->butOff->Name = L"butOff";
			this->butOff->Size = System::Drawing::Size(75, 23);
			this->butOff->TabIndex = 5;
			this->butOff->Text = L"Off";
			this->butOff->UseVisualStyleBackColor = true;
			this->butOff->Click += gcnew System::EventHandler(this, &MyForm::butOff_Click);
			// 
			// buttonSendSubj
			// 
			this->buttonSendSubj->Enabled = false;
			this->buttonSendSubj->Location = System::Drawing::Point(244, 62);
			this->buttonSendSubj->Name = L"buttonSendSubj";
			this->buttonSendSubj->Size = System::Drawing::Size(116, 23);
			this->buttonSendSubj->TabIndex = 4;
			this->buttonSendSubj->Text = L"Send data of subject";
			this->buttonSendSubj->UseVisualStyleBackColor = true;
			this->buttonSendSubj->Click += gcnew System::EventHandler(this, &MyForm::buttonSendSubj_Click);
			// 
			// buttonEDPASS
			// 
			this->buttonEDPASS->Location = System::Drawing::Point(122, 62);
			this->buttonEDPASS->Name = L"buttonEDPASS";
			this->buttonEDPASS->Size = System::Drawing::Size(116, 23);
			this->buttonEDPASS->TabIndex = 3;
			this->buttonEDPASS->Text = L"Send data pass";
			this->buttonEDPASS->UseVisualStyleBackColor = true;
			this->buttonEDPASS->Click += gcnew System::EventHandler(this, &MyForm::buttonEDPASS_Click);
			// 
			// buttonEDLOG
			// 
			this->buttonEDLOG->Enabled = false;
			this->buttonEDLOG->Location = System::Drawing::Point(0, 62);
			this->buttonEDLOG->Name = L"buttonEDLOG";
			this->buttonEDLOG->Size = System::Drawing::Size(116, 23);
			this->buttonEDLOG->TabIndex = 2;
			this->buttonEDLOG->Text = L"Send data log";
			this->buttonEDLOG->UseVisualStyleBackColor = true;
			this->buttonEDLOG->Click += gcnew System::EventHandler(this, &MyForm::buttonEDLOG_Click);
			// 
			// txtInConsole2
			// 
			this->txtInConsole2->Location = System::Drawing::Point(3, 36);
			this->txtInConsole2->Name = L"txtInConsole2";
			this->txtInConsole2->Size = System::Drawing::Size(767, 20);
			this->txtInConsole2->TabIndex = 1;
			// 
			// txtInConsole
			// 
			this->txtInConsole->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtInConsole->Location = System::Drawing::Point(3, 16);
			this->txtInConsole->Name = L"txtInConsole";
			this->txtInConsole->Size = System::Drawing::Size(767, 20);
			this->txtInConsole->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 242);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 17;
			// 
			// edpass
			// 
			this->edpass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->edpass->Location = System::Drawing::Point(560, 88);
			this->edpass->Name = L"edpass";
			this->edpass->Size = System::Drawing::Size(108, 29);
			this->edpass->TabIndex = 15;
			this->edpass->Text = L"Pass";
			this->edpass->UseVisualStyleBackColor = true;
			this->edpass->Click += gcnew System::EventHandler(this, &MyForm::edpass_Click);
			// 
			// crebase
			// 
			this->crebase->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->crebase->Location = System::Drawing::Point(215, 54);
			this->crebase->Name = L"crebase";
			this->crebase->Size = System::Drawing::Size(108, 29);
			this->crebase->TabIndex = 6;
			this->crebase->Text = L"Create";
			this->crebase->UseVisualStyleBackColor = true;
			this->crebase->Click += gcnew System::EventHandler(this, &MyForm::crebase_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(233, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Use any functions:";
			// 
			// delbase
			// 
			this->delbase->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->delbase->Location = System::Drawing::Point(215, 87);
			this->delbase->Name = L"delbase";
			this->delbase->Size = System::Drawing::Size(108, 29);
			this->delbase->TabIndex = 9;
			this->delbase->Text = L"Destroy";
			this->delbase->UseVisualStyleBackColor = true;
			this->delbase->Click += gcnew System::EventHandler(this, &MyForm::delbase_Click);
			// 
			// edlog
			// 
			this->edlog->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->edlog->Location = System::Drawing::Point(560, 54);
			this->edlog->Name = L"edlog";
			this->edlog->Size = System::Drawing::Size(108, 29);
			this->edlog->TabIndex = 14;
			this->edlog->Text = L"Log";
			this->edlog->UseVisualStyleBackColor = true;
			this->edlog->Click += gcnew System::EventHandler(this, &MyForm::edlog_Click);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(13, 88);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(201, 15);
			this->label10->TabIndex = 8;
			this->label10->Text = L"2. Delete the database ---------";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(13, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(202, 15);
			this->label6->TabIndex = 2;
			this->label6->Text = L"1. Generation of database -----";
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(13, 126);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(200, 15);
			this->label11->TabIndex = 10;
			this->label11->Text = L"3. Add subject of database ----";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(386, 88);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(167, 15);
			this->label13->TabIndex = 13;
			this->label13->Text = L"2. Edit password ----------";
			// 
			// addsub
			// 
			this->addsub->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addsub->Location = System::Drawing::Point(215, 123);
			this->addsub->Name = L"addsub";
			this->addsub->Size = System::Drawing::Size(108, 29);
			this->addsub->TabIndex = 11;
			this->addsub->Text = L"Add";
			this->addsub->UseVisualStyleBackColor = true;
			this->addsub->Click += gcnew System::EventHandler(this, &MyForm::addsub_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(13, 32);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 15);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Work with database";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(386, 32);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 15);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Options";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(386, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(168, 15);
			this->label12->TabIndex = 12;
			this->label12->Text = L"1. Edit login ----------------";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->PingBut);
			this->tabPage3->Controls->Add(this->ButCheck);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Controls->Add(this->maskedTextBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(779, 330);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Settings";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// PingBut
			// 
			this->PingBut->AutoSize = true;
			this->PingBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PingBut->Location = System::Drawing::Point(6, 54);
			this->PingBut->Name = L"PingBut";
			this->PingBut->Size = System::Drawing::Size(103, 15);
			this->PingBut->TabIndex = 5;
			this->PingBut->Text = L"Check server --";
			// 
			// ButCheck
			// 
			this->ButCheck->Location = System::Drawing::Point(115, 51);
			this->ButCheck->Name = L"ButCheck";
			this->ButCheck->Size = System::Drawing::Size(85, 23);
			this->ButCheck->TabIndex = 4;
			this->ButCheck->Text = L"PING";
			this->ButCheck->UseVisualStyleBackColor = true;
			this->ButCheck->Click += gcnew System::EventHandler(this, &MyForm::ButCheck_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"IP-address";
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Location = System::Drawing::Point(101, 24);
			this->maskedTextBox2->Mask = L"000.000.000.000";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(233, 20);
			this->maskedTextBox2->TabIndex = 1;
			// 
			// tabAdd
			// 
			this->tabAdd->Controls->Add(this->textSocSta);
			this->tabAdd->Controls->Add(this->textDrLic);
			this->tabAdd->Controls->Add(this->textCit);
			this->tabAdd->Controls->Add(this->ButSendAdd);
			this->tabAdd->Controls->Add(this->label16);
			this->tabAdd->Controls->Add(this->txtDateB);
			this->tabAdd->Controls->Add(this->txtMonthB);
			this->tabAdd->Controls->Add(this->txtYearB);
			this->tabAdd->Controls->Add(this->txtPhNum);
			this->tabAdd->Controls->Add(this->txtTIN);
			this->tabAdd->Controls->Add(this->txtSnils);
			this->tabAdd->Controls->Add(this->txtChild);
			this->tabAdd->Controls->Add(this->txtCrime);
			this->tabAdd->Controls->Add(this->txtMilRec);
			this->tabAdd->Controls->Add(this->txtPasNum);
			this->tabAdd->Controls->Add(this->txtPasSer);
			this->tabAdd->Controls->Add(this->txtInc);
			this->tabAdd->Controls->Add(this->txtProf);
			this->tabAdd->Controls->Add(this->txtEduc);
			this->tabAdd->Controls->Add(this->txtMatSta);
			this->tabAdd->Controls->Add(this->txtSex);
			this->tabAdd->Controls->Add(this->txtAddress);
			this->tabAdd->Controls->Add(this->txtPlaceR);
			this->tabAdd->Controls->Add(this->txtPlaceB);
			this->tabAdd->Controls->Add(this->txtMiddleName);
			this->tabAdd->Controls->Add(this->txtName);
			this->tabAdd->Controls->Add(this->txtSurname);
			this->tabAdd->Controls->Add(this->txtID);
			this->tabAdd->Controls->Add(this->label15);
			this->tabAdd->Enabled = false;
			this->tabAdd->Location = System::Drawing::Point(4, 22);
			this->tabAdd->Name = L"tabAdd";
			this->tabAdd->Padding = System::Windows::Forms::Padding(3);
			this->tabAdd->Size = System::Drawing::Size(779, 330);
			this->tabAdd->TabIndex = 3;
			this->tabAdd->Text = L"Add";
			this->tabAdd->UseVisualStyleBackColor = true;
			// 
			// textSocSta
			// 
			this->textSocSta->Location = System::Drawing::Point(568, 26);
			this->textSocSta->Name = L"textSocSta";
			this->textSocSta->Size = System::Drawing::Size(147, 20);
			this->textSocSta->TabIndex = 29;
			this->textSocSta->Text = L"Social_status";
			// 
			// textDrLic
			// 
			this->textDrLic->Location = System::Drawing::Point(568, 52);
			this->textDrLic->Name = L"textDrLic";
			this->textDrLic->Size = System::Drawing::Size(147, 20);
			this->textDrLic->TabIndex = 28;
			this->textDrLic->Text = L"Driver\'s_license (+/-)";
			// 
			// textCit
			// 
			this->textCit->Location = System::Drawing::Point(385, 207);
			this->textCit->Name = L"textCit";
			this->textCit->Size = System::Drawing::Size(147, 20);
			this->textCit->TabIndex = 27;
			this->textCit->Text = L"Citizenship";
			// 
			// ButSendAdd
			// 
			this->ButSendAdd->Location = System::Drawing::Point(568, 241);
			this->ButSendAdd->Name = L"ButSendAdd";
			this->ButSendAdd->Size = System::Drawing::Size(113, 23);
			this->ButSendAdd->TabIndex = 26;
			this->ButSendAdd->Text = L"Send data";
			this->ButSendAdd->UseVisualStyleBackColor = true;
			this->ButSendAdd->Click += gcnew System::EventHandler(this, &MyForm::ButSendAdd_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(21, 279);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(192, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"(*) - For easy word = use TAB keyboard";
			// 
			// txtDateB
			// 
			this->txtDateB->Location = System::Drawing::Point(385, 182);
			this->txtDateB->Name = L"txtDateB";
			this->txtDateB->Size = System::Drawing::Size(147, 20);
			this->txtDateB->TabIndex = 24;
			this->txtDateB->Text = L"Date_of_birth";
			// 
			// txtMonthB
			// 
			this->txtMonthB->Location = System::Drawing::Point(385, 156);
			this->txtMonthB->Name = L"txtMonthB";
			this->txtMonthB->Size = System::Drawing::Size(147, 20);
			this->txtMonthB->TabIndex = 23;
			this->txtMonthB->Text = L"Month_of_birth";
			// 
			// txtYearB
			// 
			this->txtYearB->Location = System::Drawing::Point(385, 130);
			this->txtYearB->Name = L"txtYearB";
			this->txtYearB->Size = System::Drawing::Size(147, 20);
			this->txtYearB->TabIndex = 22;
			this->txtYearB->Text = L"Year_of_birth";
			// 
			// txtPhNum
			// 
			this->txtPhNum->Location = System::Drawing::Point(385, 104);
			this->txtPhNum->Name = L"txtPhNum";
			this->txtPhNum->Size = System::Drawing::Size(147, 20);
			this->txtPhNum->TabIndex = 21;
			this->txtPhNum->Text = L"Phone_numbers";
			// 
			// txtTIN
			// 
			this->txtTIN->Location = System::Drawing::Point(385, 78);
			this->txtTIN->Name = L"txtTIN";
			this->txtTIN->Size = System::Drawing::Size(147, 20);
			this->txtTIN->TabIndex = 20;
			this->txtTIN->Text = L"TIN";
			// 
			// txtSnils
			// 
			this->txtSnils->Location = System::Drawing::Point(385, 52);
			this->txtSnils->Name = L"txtSnils";
			this->txtSnils->Size = System::Drawing::Size(147, 20);
			this->txtSnils->TabIndex = 19;
			this->txtSnils->Text = L"SNILS";
			// 
			// txtChild
			// 
			this->txtChild->Location = System::Drawing::Point(385, 26);
			this->txtChild->Name = L"txtChild";
			this->txtChild->Size = System::Drawing::Size(147, 20);
			this->txtChild->TabIndex = 18;
			this->txtChild->Text = L"Child(children)";
			// 
			// txtCrime
			// 
			this->txtCrime->Location = System::Drawing::Point(198, 208);
			this->txtCrime->Name = L"txtCrime";
			this->txtCrime->Size = System::Drawing::Size(147, 20);
			this->txtCrime->TabIndex = 17;
			this->txtCrime->Text = L"Criminal";
			// 
			// txtMilRec
			// 
			this->txtMilRec->Location = System::Drawing::Point(198, 182);
			this->txtMilRec->Name = L"txtMilRec";
			this->txtMilRec->Size = System::Drawing::Size(147, 20);
			this->txtMilRec->TabIndex = 16;
			this->txtMilRec->Text = L"Military_records";
			// 
			// txtPasNum
			// 
			this->txtPasNum->Location = System::Drawing::Point(198, 156);
			this->txtPasNum->Name = L"txtPasNum";
			this->txtPasNum->Size = System::Drawing::Size(147, 20);
			this->txtPasNum->TabIndex = 15;
			this->txtPasNum->Text = L"Passport_number";
			// 
			// txtPasSer
			// 
			this->txtPasSer->Location = System::Drawing::Point(198, 130);
			this->txtPasSer->Name = L"txtPasSer";
			this->txtPasSer->Size = System::Drawing::Size(147, 20);
			this->txtPasSer->TabIndex = 14;
			this->txtPasSer->Text = L"Passport_series";
			// 
			// txtInc
			// 
			this->txtInc->Location = System::Drawing::Point(198, 104);
			this->txtInc->Name = L"txtInc";
			this->txtInc->Size = System::Drawing::Size(147, 20);
			this->txtInc->TabIndex = 13;
			this->txtInc->Text = L"Income";
			// 
			// txtProf
			// 
			this->txtProf->Location = System::Drawing::Point(198, 78);
			this->txtProf->Name = L"txtProf";
			this->txtProf->Size = System::Drawing::Size(147, 20);
			this->txtProf->TabIndex = 12;
			this->txtProf->Text = L"Profession";
			// 
			// txtEduc
			// 
			this->txtEduc->Location = System::Drawing::Point(198, 52);
			this->txtEduc->Name = L"txtEduc";
			this->txtEduc->Size = System::Drawing::Size(147, 20);
			this->txtEduc->TabIndex = 11;
			this->txtEduc->Text = L"Education";
			// 
			// txtMatSta
			// 
			this->txtMatSta->Location = System::Drawing::Point(198, 26);
			this->txtMatSta->Name = L"txtMatSta";
			this->txtMatSta->Size = System::Drawing::Size(147, 20);
			this->txtMatSta->TabIndex = 10;
			this->txtMatSta->Text = L"Marital_status";
			// 
			// txtSex
			// 
			this->txtSex->Location = System::Drawing::Point(7, 208);
			this->txtSex->Name = L"txtSex";
			this->txtSex->Size = System::Drawing::Size(147, 20);
			this->txtSex->TabIndex = 8;
			this->txtSex->Text = L"Sex";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(7, 182);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(147, 20);
			this->txtAddress->TabIndex = 7;
			this->txtAddress->Text = L"Address";
			// 
			// txtPlaceR
			// 
			this->txtPlaceR->Location = System::Drawing::Point(7, 156);
			this->txtPlaceR->Name = L"txtPlaceR";
			this->txtPlaceR->Size = System::Drawing::Size(147, 20);
			this->txtPlaceR->TabIndex = 6;
			this->txtPlaceR->Text = L"Place_residence";
			// 
			// txtPlaceB
			// 
			this->txtPlaceB->Location = System::Drawing::Point(7, 130);
			this->txtPlaceB->Name = L"txtPlaceB";
			this->txtPlaceB->Size = System::Drawing::Size(147, 20);
			this->txtPlaceB->TabIndex = 5;
			this->txtPlaceB->Text = L"Place_birth";
			// 
			// txtMiddleName
			// 
			this->txtMiddleName->Location = System::Drawing::Point(7, 104);
			this->txtMiddleName->Name = L"txtMiddleName";
			this->txtMiddleName->Size = System::Drawing::Size(147, 20);
			this->txtMiddleName->TabIndex = 4;
			this->txtMiddleName->Text = L"Middle_name";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(7, 78);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(147, 20);
			this->txtName->TabIndex = 3;
			this->txtName->Text = L"Name";
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(7, 52);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(147, 20);
			this->txtSurname->TabIndex = 2;
			this->txtSurname->Text = L"Surname";
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(7, 26);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(147, 20);
			this->txtID->TabIndex = 1;
			this->txtID->Text = L"&ID";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(6, 7);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(103, 15);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Enter the data*";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 600);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"DLP_client_visual";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabAdd->ResumeLayout(false);
			this->tabAdd->PerformLayout();
			this->ResumeLayout(false);

		}


#pragma endregion

	private: System::Void auth_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (CaptchaLab->Text == txtCaptcha->Text)
		{
			try
			{
				txtOutConsole->Text = "";
				// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
				// 
				HttpWebRequest ^ request = nullptr; 
				HttpWebResponse^ httpResponse = nullptr;
				Stream^ requestStream = nullptr;
				Stream^ responseStream = nullptr;

				
				request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/auth"));

				request->Method = "POST"; 
				request->ContentType = "application/json"; 

														   
				String^ body = "{ \"login\" : \"" +
					txtLogin->Text +
					"\",\"password\" : \"" +
					txtPassword->Text +
					"\",\"captcha\":\"" +
					txtCaptcha->Text + "\" }";

				
				array<System::Byte> ^SomeBytes = System::Text::Encoding::UTF8->GetBytes(body);

				request->ContentLength = SomeBytes->Length; 
				requestStream = request->GetRequestStream(); 
				requestStream->Write(SomeBytes, 0, SomeBytes->Length); 

																	  
				requestStream->Close();
				requestStream = nullptr;

				
				httpResponse = (HttpWebResponse^)request->GetResponse(); 

				responseStream = httpResponse->GetResponseStream(); 
																	// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																	
																	


				txtOutConsole->Text += httpResponse->StatusDescription;
				String^ stw = System::Convert::ToString(txtOutConsole->Text);
				if (stw == "interface")
				{
					txtOutConsole->Text = "";
					
					txtOutConsole->Text += "Server response: ";
					
					txtOutConsole->Text += "...You have access to the database...";
					tabPage2->Enabled = true;
				}

			}
			catch (Exception ^e)
			{
				txtOutConsole->Text += "TCP Client: error send request\r\n";
				txtOutConsole->Text += e->ToString();
				return;
			}
		}
		else
		{
			txtOutConsole->Text += "...Wrong captcha or generate new captcha...";
		}
		CaptchaLab->Text = "Captcha";
		txtCaptcha->Text = "some_captcha";
	}


			 /*private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Creates an HTTP request and prints the length of the response stream.
			 pplx::task<void> HTTPStreamingAsync()
			 {
			 http_client client(L"http://www.fourthcoffee.com");

			 // Make the request and asynchronously process the response.
			 return client.request(methods::GET).then([](http_response response)
			 {
			 // Print the status code.
			 std::wostringstream ss;
			 ss << L"Server returned returned status code " << response.status_code() << L'.' << std::endl;
			 std::wcout << ss.str();

			 // TODO: Perform actions here reading from the response stream.
			 auto bodyStream = response.body();

			 // In this example, we print the length of the response to the console.
			 ss.str(std::wstring());
			 ss << L"Content length is " << response.headers().content_length() << L" bytes." << std::endl;
			 std::wcout << ss.str();
			 });

			 /* Sample output:
			 Server returned returned status code 200.
			 Content length is 63803 bytes.

			 }*/


			
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{

		
		String^ responseData = System::String::Empty;

		
		array<Byte> ^ data = gcnew array<Byte>(256);


		
		Int32 bytes = stream->Read(data, 0, data->Length);

		
		responseData = System::Text::Encoding::ASCII->GetString(data, 0, bytes);

		
		txtOutConsole->Text = responseData + "\r\n";

	}


	private: System::Void txtLogin_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}


	private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {

	}


	private: System::Void button2_Click_2(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void regis_Click(System::Object^  sender, System::EventArgs^  e) {
		if (CaptchaLab->Text == txtCaptcha->Text)
		{
			try
			{

				// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
				
				HttpWebRequest ^ request = nullptr; 
				HttpWebResponse^ httpResponse = nullptr;
				Stream^ requestStream = nullptr;
				Stream^ responseStream = nullptr;

				
				request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/register"));

				request->Method = "POST"; 
				request->ContentType = "application/json"; 
				String^ body = "{ \"login\" : \"" +
					txtLogin->Text +
					"\",\"password\" : \"" +
					txtPassword->Text +
					"\",\"captcha\":\"" +
					txtCaptcha->Text + "\" }";

				
				array<System::Byte> ^SomeBytes = System::Text::Encoding::UTF8->GetBytes(body);

				request->ContentLength = SomeBytes->Length;
				requestStream = request->GetRequestStream(); 
				requestStream->Write(SomeBytes, 0, SomeBytes->Length); 
				requestStream->Close();
				requestStream = nullptr;

				
				httpResponse = (HttpWebResponse^)request->GetResponse(); 

				responseStream = httpResponse->GetResponseStream(); 
																	// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																	

				txtOutConsole->Text += "Server response: ";
				
				txtOutConsole->Text += " " + httpResponse->StatusDescription + "\r\n";

			}
			catch (Exception ^e)
			{
				txtOutConsole->Text += "TCP Client: error send request\r\n";
				txtOutConsole->Text += e->ToString();
				return;
			}
		}
		else
		{
			txtOutConsole->Text += "...Wrong captcha or generate new captcha...";
		}
		CaptchaLab->Text = "Captcha";
		txtCaptcha->Text = "some_captcha";
	}


	private: System::Void delbase_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			txtOutConsole->Text = "";
			// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
			
			HttpWebRequest ^ request = nullptr; 
			HttpWebResponse^ httpResponse = nullptr;
			Stream^ requestStream = nullptr;
			Stream^ responseStream = nullptr;

			
			request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/delbase"));

			request->Method = "GET"; 
			request->ContentType = "application/json"; 

			requestStream = nullptr;

			
			httpResponse = (HttpWebResponse^)request->GetResponse(); 

			responseStream = httpResponse->GetResponseStream(); 
																// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																
			txtOutConsole->Text += httpResponse->StatusDescription;
			String^ stw = System::Convert::ToString(txtOutConsole->Text);
			if (stw == "erased")
			{
				txtOutConsole->Text = "";
				tabPage2->Enabled = false;
				txtOutConsole->Text = "";
				MessageBox::Show("...Session expired...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				txtLogin->Text = "some_login";
				txtPassword->Text = "some_password";
				txtCaptcha->Text = "some_captcha";
			}
		}
		catch (Exception ^e)
		{
			txtOutConsole->Text += "TCP Client: error send request\r\n";
			txtOutConsole->Text += e->ToString();
			return;
		}

	}


	private: System::Void crebase_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{
			txtOutConsole->Text = "";
			// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
			
			HttpWebRequest ^ request = nullptr; 
			HttpWebResponse^ httpResponse = nullptr;
			Stream^ requestStream = nullptr;
			Stream^ responseStream = nullptr;


			request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/crebase"));

			request->Method = "GET"; 
			request->ContentType = "application/json"; 
			requestStream = nullptr;

			
			httpResponse = (HttpWebResponse^)request->GetResponse(); 

			responseStream = httpResponse->GetResponseStream(); 
																// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html

			txtOutConsole->Text += httpResponse->StatusDescription;
			String^ stw = System::Convert::ToString(txtOutConsole->Text);
			if (stw == "erased")
			{
				txtOutConsole->Text = "";
				tabPage2->Enabled = false;
				txtOutConsole->Text = "";
				MessageBox::Show("...Session expired...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				txtLogin->Text = "some_login";
				txtPassword->Text = "some_password";
				txtCaptcha->Text = "some_captcha";
			}
		}
		catch (Exception ^e)
		{
			txtOutConsole->Text += "TCP Client: error send request\r\n";
			txtOutConsole->Text += e->ToString();
			return;
		}

	}

			
	private: System::Void addsub_Click(System::Object^  sender, System::EventArgs^  e) {
		tabAdd->Enabled = true;
		MessageBox::Show("Go to tab Add", "Please", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			
	}


	private: System::Void edlog_Click(System::Object^  sender, System::EventArgs^  e) {
		groupBox2->Enabled = true;
		buttonEDLOG->Enabled = true;
		buttonEDPASS->Enabled = false;
		buttonSendSubj->Enabled = false; 
		txtInConsole2->Enabled = true;
		txtInConsole->Enabled = true;
		txtInConsole2->Text = L"New data";
		txtInConsole->Text = L"Old data";


	}


	private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
	}


	private: System::Void buttonEDLOG_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{

			// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
			
			HttpWebRequest ^ request = nullptr; 
			HttpWebResponse^ httpResponse = nullptr;
			Stream^ requestStream = nullptr;
			Stream^ responseStream = nullptr;

			
			request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/editlog"));

			request->Method = "PATCH"; 
			request->ContentType = "application/json"; 
			String^ body = "{ \"oldlogin\" : \"" +
				txtInConsole->Text +
				"\",\"newlogin\" : \"" +
				txtInConsole2->Text + "\" }";

			
			array<System::Byte> ^SomeBytes = System::Text::Encoding::UTF8->GetBytes(body);

			request->ContentLength = SomeBytes->Length; 
			requestStream = request->GetRequestStream(); 
			requestStream->Write(SomeBytes, 0, SomeBytes->Length);
			requestStream->Close();
			requestStream = nullptr;

			
			httpResponse = (HttpWebResponse^)request->GetResponse(); 

			responseStream = httpResponse->GetResponseStream(); 
																// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																
			txtOutConsole->Text += httpResponse->StatusDescription;
			String^ stw = System::Convert::ToString(txtOutConsole->Text);
			if (stw == "erased")
			{
				txtOutConsole->Text = "";
				tabPage2->Enabled = false;
				txtOutConsole->Text = "";
				MessageBox::Show("...Session expired...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				txtLogin->Text = "some_login";
				txtPassword->Text = "some_password";
				txtCaptcha->Text = "some_captcha";
			}

		}
		catch (Exception ^e)
		{
			txtOutConsole->Text += "TCP Client: error send request\r\n";
			txtOutConsole->Text += e->ToString();
			return;
		}
		groupBox2->Enabled = false;
		txtInConsole->Text = "";
		txtInConsole2->Text = "";
	}


	private: System::Void edpass_Click(System::Object^  sender, System::EventArgs^  e) {
		groupBox2->Enabled = true;
		buttonEDPASS->Enabled = true;
		buttonEDLOG->Enabled = false;
		buttonSendSubj->Enabled = false;
		txtInConsole2->Enabled = true;
		txtInConsole->Enabled = true;
		txtInConsole2->Text = L"New data";
		txtInConsole->Text = L"Old data";
	}


	private: System::Void buttonEDPASS_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{

			// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
			
			HttpWebRequest ^ request = nullptr; 
			HttpWebResponse^ httpResponse = nullptr;
			Stream^ requestStream = nullptr;
			Stream^ responseStream = nullptr;

			
			request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/editpass"));

			request->Method = "PATCH"; 
			request->ContentType = "application/json"; 

													   
			String^ body = "{ \"oldpass\" : \"" +
				txtInConsole->Text +
				"\",\"newpass\" : \"" +
				txtInConsole2->Text + "\" }";

			
			array<System::Byte> ^SomeBytes = System::Text::Encoding::UTF8->GetBytes(body);

			request->ContentLength = SomeBytes->Length; 
			requestStream = request->GetRequestStream(); 
			requestStream->Write(SomeBytes, 0, SomeBytes->Length); 
			requestStream->Close();
			requestStream = nullptr;

			
			httpResponse = (HttpWebResponse^)request->GetResponse(); 

			responseStream = httpResponse->GetResponseStream(); 
																// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																
			txtOutConsole->Text += httpResponse->StatusDescription;
			String^ stw = System::Convert::ToString(txtOutConsole->Text);
			if (stw == "erased")
			{
				txtOutConsole->Text = "";
				tabPage2->Enabled = false;
				txtOutConsole->Text = "";
				MessageBox::Show("...Session expired...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				txtLogin->Text = "some_login";
				txtPassword->Text = "some_password";
				txtCaptcha->Text = "some_captcha";
			}

		}
		catch (Exception ^e)
		{
			txtOutConsole->Text += "TCP Client: error send request\r\n";
			txtOutConsole->Text += e->ToString();
			return;
		}
		groupBox2->Enabled = false;
		txtInConsole->Text = "";
		txtInConsole2->Text = "";
	}


	private: System::Void gencapt_Click(System::Object^  sender, System::EventArgs^  e) {
		auth->Enabled = true;
		regis->Enabled = true;
		txtLogin->Enabled = true;
		txtPassword->Enabled = true;
		txtCaptcha->Enabled = true;
		srand(time(0));
		String ^capt = "ksjdfigsakdfg41234kasgdflkasgdlkfgalks543dgfklagsdvfjv8134875q236581fjkagfo1trfawyief813";
		CaptchaLab->Text = "";
		for (int i = 0; i < 5; i++)
			CaptchaLab->Text += capt[0 + rand() % (capt->Length - 1)];
	}


	private: System::Void butsearch_Click(System::Object^  sender, System::EventArgs^  e) {
		groupBox2->Enabled = true;
		buttonEDLOG->Enabled = false;
		buttonEDPASS->Enabled = false;
		buttonSendSubj->Enabled = true;
		txtInConsole->Enabled = true;
		txtInConsole2->Enabled = false;
		txtInConsole->Text = L"ID of subject";

	}


	private: System::Void buttonSendSubj_Click(System::Object^  sender, System::EventArgs^  e) {

		try
		{

			// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
				
			HttpWebRequest ^ request = nullptr; 
			HttpWebResponse^ httpResponse = nullptr;
			Stream^ requestStream = nullptr;
			Stream^ responseStream = nullptr;

			
			request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/serchsubj"));

			request->Method = "PUT"; 
			request->ContentType = "application/json"; 
			String^ body = "{ \"ID\" : \"" + "&" +
				txtInConsole->Text + "\" }";

			
			array<System::Byte> ^SomeBytes = System::Text::Encoding::UTF8->GetBytes(body);

			request->ContentLength = SomeBytes->Length; 
			requestStream = request->GetRequestStream(); 
			requestStream->Write(SomeBytes, 0, SomeBytes->Length); 
			requestStream->Close();
			requestStream = nullptr;

			
			httpResponse = (HttpWebResponse^)request->GetResponse(); 

			responseStream = httpResponse->GetResponseStream(); 
																// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																
			txtOutConsole->Text = "";

			txtOutConsole->Text += httpResponse->StatusDescription;
			String^ stw = System::Convert::ToString(txtOutConsole->Text);
			if (stw == "erased")
			{
				txtOutConsole->Text = "";
				tabPage2->Enabled = false;
				txtOutConsole->Text = "";
				MessageBox::Show("...Session expired...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				txtLogin->Text = "some_login";
				txtPassword->Text = "some_password";
				txtCaptcha->Text = "some_captcha";
			}
			else
			{
				txtOutConsole->Text = "";
				StreamReader ^responseReader = gcnew StreamReader(responseStream);
				String^ server_message = responseReader->ReadLine();
				txtOutConsole->Text += server_message;
			}

		}
		catch (Exception ^e)
		{
			txtOutConsole->Text += "TCP Client: error send request\r\n";
			txtOutConsole->Text += e->ToString();
			return;
		}
		groupBox2->Enabled = false;
		txtInConsole->Text = "";
		txtInConsole2->Text = "";
	}


	private: System::Void ButCheck_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			txtOutConsole->Text = "";
			// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
			
			HttpWebRequest ^ request = nullptr; 
			HttpWebResponse^ httpResponse = nullptr;
			Stream^ requestStream = nullptr;
			Stream^ responseStream = nullptr;

			
			request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/ping"));

			request->Method = "OPTIONS"; 
			request->ContentType = "application/json"; 

													   
			requestStream = nullptr;

			
			httpResponse = (HttpWebResponse^)request->GetResponse(); 

			responseStream = httpResponse->GetResponseStream(); 
																// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
																
			txtOutConsole->Text += "Server response: ";
			txtOutConsole->Text += httpResponse->Server + " " + httpResponse->ResponseUri + " ";
			txtOutConsole->Text += (int)(httpResponse->StatusCode);
			txtOutConsole->Text += " " + httpResponse->StatusDescription + "\r\n";
		}
		catch (Exception ^e)
		{
			txtOutConsole->Text += "TCP Client: error send request\r\n";
			txtOutConsole->Text += e->ToString();
			return;
		}

	}


private: System::Void ButSendAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	try
	{
		txtOutConsole->Text = "";
		// for instance http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
		
		HttpWebRequest ^ request = nullptr; 
		HttpWebResponse^ httpResponse = nullptr;
		Stream^ requestStream = nullptr;
		Stream^ responseStream = nullptr;

		
		request = safe_cast<System::Net::HttpWebRequest^>(HttpWebRequest::Create("http://localhost:12345/dlpapi/addSub"));

		request->Method = "POST"; 
		request->ContentType = "application/json"; 
		String^ body = "{  \"ID\" : \""  + txtID->Text +
			"\",\"Surname\" : \"" + txtSurname->Text +
			"\",\"Name\":\"" + txtName->Text + 
			"\",\"Middle_name\" : \"" + txtMiddleName->Text +
			"\",\"Place_birth\" : \"" + txtPlaceB->Text +
			"\",\"Place_res\" : \"" + txtPlaceR->Text +
			"\",\"Address\" : \"" + txtAddress->Text +
			"\",\"Sex\" : \"" + txtSex->Text +
			"\",\"Marital_status\" : \"" + txtMatSta->Text +
			"\",\"Education\" : \"" + txtEduc->Text +
			"\",\"Profession\" : \"" + txtProf->Text +
			"\",\"Income\" : \"" + txtInc->Text +
			"\",\"Passport_series\" : \"" + txtPasSer->Text +
			"\",\"Passport_number\" : \"" + txtPasNum->Text +
			"\",\"Military_records\" : \"" + txtMilRec->Text +
			"\",\"Criminal\" : \"" + txtCrime->Text +
			"\",\"SNILS\" : \"" + txtSnils->Text +
			"\",\"Child_children\" : \"" + txtChild->Text +
			"\",\"TIN\" : \"" + txtTIN->Text +
			"\",\"Phone_numbers\" : \"" + txtPhNum->Text +
			"\",\"Year_birth\" : \"" + txtYearB->Text +
			"\",\"Month_birth\" : \"" + txtMonthB->Text +
			"\",\"Date_birth\" : \"" + txtDateB->Text +
			"\",\"Citizenship\" : \"" + textCit->Text +
			"\",\"Social_status\" : \"" + textSocSta->Text + 
			"\",\"Driver_license\" : \"" + textDrLic->Text + "\" }";

		txtID->Text = "&ID";
			txtSurname->Text = "Surname";
			txtName->Text = "Name";
			txtMiddleName->Text = "Middle_name";
			txtPlaceB->Text = "Place_birth";
			txtPlaceR->Text = "Place_residence";
			txtAddress->Text = "Address";
			txtSex->Text = "Sex";
			txtMatSta->Text = "Marital_status";
			txtEduc->Text = "Education";
			txtProf->Text = "Profession";
			txtInc->Text = "Income";
			txtPasSer->Text = "Passport_series";
			txtPasNum->Text = "Passport_number";
			txtMilRec->Text = "Military_records";
			txtCrime->Text = "Criminal";
			txtSnils->Text = "SNILS";
			txtChild->Text = "Child(children)";
			txtTIN->Text = "TIN";
			txtPhNum->Text = "Phone_numbers";
			txtYearB->Text = "Year_of_birth";
			txtMonthB->Text = "Month_of_birth";
			txtDateB->Text = "Date_of_birth";
			textCit->Text = "Citizenship"; 
			textSocSta->Text = "Social_status";
			textDrLic->Text = "Driver_license (+/-)";


		
		array<System::Byte> ^SomeBytes = System::Text::Encoding::UTF8->GetBytes(body);

		request->ContentLength = SomeBytes->Length;
		requestStream = request->GetRequestStream(); 
		requestStream->Write(SomeBytes, 0, SomeBytes->Length); 

															  
		requestStream->Close();
		requestStream = nullptr;

		
		httpResponse = (HttpWebResponse^)request->GetResponse(); 

		responseStream = httpResponse->GetResponseStream(); 
															// from http://www.winsocketdotnetworkprogramming.com/httpgetrequestdotnetworkprogramming10d.html
															

		txtOutConsole->Text += httpResponse->StatusDescription;
		String^ stw = System::Convert::ToString(txtOutConsole->Text);
		if (stw == "erased")
		{
			txtOutConsole->Text = "";
			tabPage2->Enabled = false;
			txtOutConsole->Text = "";
			MessageBox::Show("...Session expired...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			txtLogin->Text = "some_login";
			txtPassword->Text = "some_password";
			txtCaptcha->Text = "some_captcha";
		}
		else
		{
			MessageBox::Show("Go to yours tab back", "Please", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		

	}
	catch (Exception ^e)
	{
		txtOutConsole->Text += "TCP Client: error send request\r\n";
		txtOutConsole->Text += e->ToString();
		return;
	}
	tabAdd->Enabled = false;
}


private: System::Void butExit_Click(System::Object^  sender, System::EventArgs^  e) {
	txtOutConsole->Text = "";
	tabPage2->Enabled = false;
	tabAdd->Enabled = false;
	auth->Enabled = false;
	regis->Enabled = false;
	txtLogin->Enabled = false;
	txtPassword->Enabled = false;
	txtCaptcha->Enabled = false;
	MessageBox::Show("...GoodBye...", "Warning!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	txtLogin->Text = "some_login";
	txtPassword->Text = "some_password";
	txtCaptcha->Text = "some_captcha";


}


private: System::Void butOff_Click(System::Object^  sender, System::EventArgs^  e) {
	groupBox2->Enabled = false;
	buttonEDLOG->Enabled = false;
	buttonEDPASS->Enabled = false;
	buttonSendSubj->Enabled = false;
	txtInConsole2->Enabled = false;
	txtInConsole->Enabled = false;

}
};
}