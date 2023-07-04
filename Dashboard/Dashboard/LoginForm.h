#pragma once
#include <msclr\marshal_cppstd.h>
#include "iostream"
#include "wnetwrap.h"
#include "json.hpp"

namespace Dashboard {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonExit;
	private: System::Windows::Forms::Button^ buttonMinimize;
	protected:













	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ loginPanel;
	private: System::Windows::Forms::Label^ swapToRegister;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkboxLoginRemember;
	private: System::Windows::Forms::Button^ buttonLogin;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textboxLoginPassword;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textboxLoginUsername;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ registerPanel;
	private: System::Windows::Forms::Panel^ panelRegisterEmail;
	private: System::Windows::Forms::TextBox^ textboxRegisterEmail;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ swapToLogin;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonRegister;

	private: System::Windows::Forms::Panel^ panelRegisterPassword;
	private: System::Windows::Forms::TextBox^ textboxRegisterPassword;


	private: System::Windows::Forms::Panel^ panelRegisterUsername;
	private: System::Windows::Forms::TextBox^ textboxRegisterUsername;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	protected:

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
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonMinimize = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->loginPanel = (gcnew System::Windows::Forms::Panel());
			this->registerPanel = (gcnew System::Windows::Forms::Panel());
			this->panelRegisterEmail = (gcnew System::Windows::Forms::Panel());
			this->textboxRegisterEmail = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->swapToLogin = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonRegister = (gcnew System::Windows::Forms::Button());
			this->panelRegisterPassword = (gcnew System::Windows::Forms::Panel());
			this->textboxRegisterPassword = (gcnew System::Windows::Forms::TextBox());
			this->panelRegisterUsername = (gcnew System::Windows::Forms::Panel());
			this->textboxRegisterUsername = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->swapToRegister = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkboxLoginRemember = (gcnew System::Windows::Forms::CheckBox());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textboxLoginPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textboxLoginUsername = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->loginPanel->SuspendLayout();
			this->registerPanel->SuspendLayout();
			this->panelRegisterEmail->SuspendLayout();
			this->panelRegisterPassword->SuspendLayout();
			this->panelRegisterUsername->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonExit
			// 
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExit->Location = System::Drawing::Point(356, 13);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(32, 30);
			this->buttonExit->TabIndex = 9;
			this->buttonExit->Text = L"X";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &LoginForm::buttonExit_Click);
			// 
			// buttonMinimize
			// 
			this->buttonMinimize->FlatAppearance->BorderSize = 0;
			this->buttonMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinimize->Location = System::Drawing::Point(332, 12);
			this->buttonMinimize->Name = L"buttonMinimize";
			this->buttonMinimize->Size = System::Drawing::Size(26, 30);
			this->buttonMinimize->TabIndex = 10;
			this->buttonMinimize->Text = L"_";
			this->buttonMinimize->UseVisualStyleBackColor = true;
			this->buttonMinimize->Click += gcnew System::EventHandler(this, &LoginForm::buttonMinimize_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(11)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->panel3->Controls->Add(this->buttonMinimize);
			this->panel3->Controls->Add(this->buttonExit);
			this->panel3->Location = System::Drawing::Point(-2, -13);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(393, 44);
			this->panel3->TabIndex = 1;
			this->panel3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::mouseDragDown);
			this->panel3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::mouseDragMove);
			this->panel3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::mouseDragUp);
			// 
			// loginPanel
			// 
			this->loginPanel->Controls->Add(this->registerPanel);
			this->loginPanel->Controls->Add(this->swapToRegister);
			this->loginPanel->Controls->Add(this->label4);
			this->loginPanel->Controls->Add(this->checkboxLoginRemember);
			this->loginPanel->Controls->Add(this->buttonLogin);
			this->loginPanel->Controls->Add(this->panel2);
			this->loginPanel->Controls->Add(this->panel1);
			this->loginPanel->Controls->Add(this->label3);
			this->loginPanel->Controls->Add(this->label2);
			this->loginPanel->Controls->Add(this->label1);
			this->loginPanel->Location = System::Drawing::Point(12, 37);
			this->loginPanel->Name = L"loginPanel";
			this->loginPanel->Size = System::Drawing::Size(363, 494);
			this->loginPanel->TabIndex = 9;
			// 
			// registerPanel
			// 
			this->registerPanel->Controls->Add(this->panelRegisterEmail);
			this->registerPanel->Controls->Add(this->label11);
			this->registerPanel->Controls->Add(this->swapToLogin);
			this->registerPanel->Controls->Add(this->label7);
			this->registerPanel->Controls->Add(this->buttonRegister);
			this->registerPanel->Controls->Add(this->panelRegisterPassword);
			this->registerPanel->Controls->Add(this->panelRegisterUsername);
			this->registerPanel->Controls->Add(this->label8);
			this->registerPanel->Controls->Add(this->label9);
			this->registerPanel->Controls->Add(this->label10);
			this->registerPanel->Location = System::Drawing::Point(0, 0);
			this->registerPanel->Name = L"registerPanel";
			this->registerPanel->Size = System::Drawing::Size(363, 494);
			this->registerPanel->TabIndex = 18;
			this->registerPanel->Visible = false;
			// 
			// panelRegisterEmail
			// 
			this->panelRegisterEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panelRegisterEmail->Controls->Add(this->textboxRegisterEmail);
			this->panelRegisterEmail->Location = System::Drawing::Point(54, 292);
			this->panelRegisterEmail->Name = L"panelRegisterEmail";
			this->panelRegisterEmail->Size = System::Drawing::Size(258, 36);
			this->panelRegisterEmail->TabIndex = 15;
			// 
			// textboxRegisterEmail
			// 
			this->textboxRegisterEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textboxRegisterEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textboxRegisterEmail->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textboxRegisterEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textboxRegisterEmail->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textboxRegisterEmail->Location = System::Drawing::Point(10, 7);
			this->textboxRegisterEmail->Margin = System::Windows::Forms::Padding(10);
			this->textboxRegisterEmail->Name = L"textboxRegisterEmail";
			this->textboxRegisterEmail->Size = System::Drawing::Size(238, 22);
			this->textboxRegisterEmail->TabIndex = 3;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label11->Location = System::Drawing::Point(50, 261);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 24);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Email";
			// 
			// swapToLogin
			// 
			this->swapToLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->swapToLogin->AutoSize = true;
			this->swapToLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->swapToLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->swapToLogin->Location = System::Drawing::Point(144, 449);
			this->swapToLogin->Name = L"swapToLogin";
			this->swapToLogin->Size = System::Drawing::Size(80, 16);
			this->swapToLogin->TabIndex = 5;
			this->swapToLogin->Text = L"Login here";
			this->swapToLogin->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->swapToLogin->Click += gcnew System::EventHandler(this, &LoginForm::swapToLogin_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label7->Location = System::Drawing::Point(112, 426);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 16);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Got already an account\?";
			// 
			// buttonRegister
			// 
			this->buttonRegister->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonRegister->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRegister->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->buttonRegister->Location = System::Drawing::Point(53, 347);
			this->buttonRegister->Name = L"buttonRegister";
			this->buttonRegister->Size = System::Drawing::Size(259, 50);
			this->buttonRegister->TabIndex = 4;
			this->buttonRegister->Text = L"Register";
			this->buttonRegister->UseVisualStyleBackColor = false;
			this->buttonRegister->Click += gcnew System::EventHandler(this, &LoginForm::buttonRegisterClick);
			// 
			// panelRegisterPassword
			// 
			this->panelRegisterPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panelRegisterPassword->Controls->Add(this->textboxRegisterPassword);
			this->panelRegisterPassword->Location = System::Drawing::Point(54, 212);
			this->panelRegisterPassword->Name = L"panelRegisterPassword";
			this->panelRegisterPassword->Size = System::Drawing::Size(258, 36);
			this->panelRegisterPassword->TabIndex = 13;
			// 
			// textboxRegisterPassword
			// 
			this->textboxRegisterPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textboxRegisterPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textboxRegisterPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textboxRegisterPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textboxRegisterPassword->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textboxRegisterPassword->Location = System::Drawing::Point(10, 7);
			this->textboxRegisterPassword->Margin = System::Windows::Forms::Padding(10);
			this->textboxRegisterPassword->Name = L"textboxRegisterPassword";
			this->textboxRegisterPassword->Size = System::Drawing::Size(238, 22);
			this->textboxRegisterPassword->TabIndex = 2;
			this->textboxRegisterPassword->UseSystemPasswordChar = true;
			// 
			// panelRegisterUsername
			// 
			this->panelRegisterUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panelRegisterUsername->Controls->Add(this->textboxRegisterUsername);
			this->panelRegisterUsername->Location = System::Drawing::Point(53, 132);
			this->panelRegisterUsername->Name = L"panelRegisterUsername";
			this->panelRegisterUsername->Size = System::Drawing::Size(259, 36);
			this->panelRegisterUsername->TabIndex = 12;
			// 
			// textboxRegisterUsername
			// 
			this->textboxRegisterUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textboxRegisterUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textboxRegisterUsername->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textboxRegisterUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textboxRegisterUsername->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textboxRegisterUsername->Location = System::Drawing::Point(10, 7);
			this->textboxRegisterUsername->Margin = System::Windows::Forms::Padding(10);
			this->textboxRegisterUsername->Name = L"textboxRegisterUsername";
			this->textboxRegisterUsername->Size = System::Drawing::Size(239, 22);
			this->textboxRegisterUsername->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label8->Location = System::Drawing::Point(47, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 42);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Register";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label9->Location = System::Drawing::Point(50, 181);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 24);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Password";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label10->Location = System::Drawing::Point(50, 102);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 24);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Username";
			// 
			// swapToRegister
			// 
			this->swapToRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->swapToRegister->AutoSize = true;
			this->swapToRegister->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->swapToRegister->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->swapToRegister->Location = System::Drawing::Point(133, 449);
			this->swapToRegister->Name = L"swapToRegister";
			this->swapToRegister->Size = System::Drawing::Size(101, 16);
			this->swapToRegister->TabIndex = 16;
			this->swapToRegister->Text = L"Register here";
			this->swapToRegister->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->swapToRegister->Click += gcnew System::EventHandler(this, &LoginForm::swapToRegister_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label4->Location = System::Drawing::Point(113, 426);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(146, 16);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Don\'t have an account\?";
			// 
			// checkboxLoginRemember
			// 
			this->checkboxLoginRemember->AutoSize = true;
			this->checkboxLoginRemember->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkboxLoginRemember->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->checkboxLoginRemember->Location = System::Drawing::Point(54, 299);
			this->checkboxLoginRemember->Name = L"checkboxLoginRemember";
			this->checkboxLoginRemember->Padding = System::Windows::Forms::Padding(3);
			this->checkboxLoginRemember->Size = System::Drawing::Size(122, 26);
			this->checkboxLoginRemember->TabIndex = 14;
			this->checkboxLoginRemember->Text = L"Remember me";
			this->checkboxLoginRemember->UseVisualStyleBackColor = true;
			// 
			// buttonLogin
			// 
			this->buttonLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->buttonLogin->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogin->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->buttonLogin->Location = System::Drawing::Point(53, 333);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(259, 50);
			this->buttonLogin->TabIndex = 15;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &LoginForm::buttonLogin_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel2->Controls->Add(this->textboxLoginPassword);
			this->panel2->Location = System::Drawing::Point(54, 238);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(258, 36);
			this->panel2->TabIndex = 13;
			// 
			// textboxLoginPassword
			// 
			this->textboxLoginPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textboxLoginPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textboxLoginPassword->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textboxLoginPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textboxLoginPassword->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textboxLoginPassword->Location = System::Drawing::Point(10, 7);
			this->textboxLoginPassword->Margin = System::Windows::Forms::Padding(10);
			this->textboxLoginPassword->Name = L"textboxLoginPassword";
			this->textboxLoginPassword->Size = System::Drawing::Size(238, 22);
			this->textboxLoginPassword->TabIndex = 3;
			this->textboxLoginPassword->UseSystemPasswordChar = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->panel1->Controls->Add(this->textboxLoginUsername);
			this->panel1->Location = System::Drawing::Point(53, 154);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(259, 36);
			this->panel1->TabIndex = 12;
			// 
			// textboxLoginUsername
			// 
			this->textboxLoginUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->textboxLoginUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textboxLoginUsername->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textboxLoginUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textboxLoginUsername->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textboxLoginUsername->Location = System::Drawing::Point(10, 7);
			this->textboxLoginUsername->Margin = System::Windows::Forms::Padding(10);
			this->textboxLoginUsername->Name = L"textboxLoginUsername";
			this->textboxLoginUsername->Size = System::Drawing::Size(239, 22);
			this->textboxLoginUsername->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->label3->Location = System::Drawing::Point(47, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 42);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label2->Location = System::Drawing::Point(50, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 24);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->label1->Location = System::Drawing::Point(50, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 24);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Username";
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(387, 543);
			this->Controls->Add(this->loginPanel);
			this->Controls->Add(this->panel3);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(193)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel3->ResumeLayout(false);
			this->loginPanel->ResumeLayout(false);
			this->loginPanel->PerformLayout();
			this->registerPanel->ResumeLayout(false);
			this->registerPanel->PerformLayout();
			this->panelRegisterEmail->ResumeLayout(false);
			this->panelRegisterEmail->PerformLayout();
			this->panelRegisterPassword->ResumeLayout(false);
			this->panelRegisterPassword->PerformLayout();
			this->panelRegisterUsername->ResumeLayout(false);
			this->panelRegisterUsername->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	bool enableWindowDrag;
	private: System::Drawing::Point windowDragOffset;
	private: System::Void mouseDragDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		windowDragOffset.X = e->X;
		windowDragOffset.Y = e->Y;
		enableWindowDrag = true;
	}

	private: System::Void mouseDragMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (enableWindowDrag) {
			System::Drawing::Point currentScreenPos = PointToScreen(e->Location);
			currentScreenPos.X -= windowDragOffset.X;
			currentScreenPos.Y -= windowDragOffset.Y;
			Location::set(currentScreenPos);
		}
	}
	private: System::Void mouseDragUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		enableWindowDrag = false;
	}

	private: System::Void buttonExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void buttonMinimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void swapToRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->registerPanel->Show();
	}
	private: System::Void swapToLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		this->registerPanel->Hide();
	}
	
	private: System::Void buttonRegisterClick(System::Object^ sender, System::EventArgs^ e) {
		auto username = msclr::interop::marshal_as<std::string>(this->textboxRegisterUsername->Text);
		auto password = msclr::interop::marshal_as<std::string>(this->textboxRegisterPassword->Text);
		auto email = msclr::interop::marshal_as<std::string>(this->textboxRegisterEmail->Text);
		
		if (!username.empty() && !password.empty() && !email.empty()) {
			
			auto url = "http://localhost/cpp/register.php?user=" + username + "&password=" + password;
			wrap::Response r = wrap::HttpsRequest(wrap::Url{url});
			std::cout << r.url << std::endl;
			std::cout << r.text << std::endl; // basic parser
			std::cout << r.status_code << std::endl; // 200

			nlohmann::json j = nlohmann::json::parse(r.text);
			auto t = j["text"];

			std::cout << t << std::endl;
			//TODO: Create a popup
		}
	}
	private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		auto username = msclr::interop::marshal_as<std::string>(this->textboxLoginUsername->Text);
		auto password = msclr::interop::marshal_as<std::string>(this->textboxLoginPassword->Text);
		if (!username.empty() && !password.empty()) {
			std::cout << username << std::endl;
			std::cout << password << std::endl;
			//TODO: http request for login.php
		}
	}
};
}
