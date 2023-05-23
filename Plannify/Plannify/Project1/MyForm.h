#include "dayuc.h"
#include "AddEventForm.h"
#include "DisplayAllEvents.h"
#include "EventReminderCard.h"
#include "User.h"
#include "Date.h"
#include "Event.h"
#include <time.h>
#include "Calendar.h"
#include <unordered_map>
//#include <fstream>

//#include "FileManager.h"
#include "UsersManager.h"





//#include "Login.h"
//#include "Signup.h"
//#include <ctime>
//#include <msclr\marshal_cppstd.h>
//#include <string>
//#include <Windows.h>
//#include <iostream>


#pragma once

//int Start_day_in_month[] = { 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5 };
//int month_days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//int year;
//int month;


namespace Project1 {

	//using namespace dayuc;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{

			InitializeComponent();

			UsersManager::readdata();


			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	public:
		////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

	//public:		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		
		bool flag = true;
		~MyForm()
		{
			if (components)
			{
				delete components;
				

			}

			cout << "\n" << "iam here" << "\n";

			if (flag)
			{
				UsersManager::writedata();
				flag = false;
			}

		}


	public :User* testUser =new User;



	private: System::Windows::Forms::FlowLayoutPanel^ DaysPanal;
	private: System::Windows::Forms::Label^ label1;
	public: System::String^ myText;


	private: System::Windows::Forms::Label^ LbMonthName;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ yearnum;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::TextBox^ textBoxDay;
	private: System::Windows::Forms::TextBox^ textBoxMonth;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::TextBox^ textBoxYear;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ startpage;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Panel^ Login_page;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ Signup_page;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;

	private: System::ComponentModel::IContainer^ components;



































	//public:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->DaysPanal = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LbMonthName = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->yearnum = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->startpage = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->Login_page = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->Signup_page = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			this->Login_page->SuspendLayout();
			this->Signup_page->SuspendLayout();
			this->SuspendLayout();
			// 
			// DaysPanal
			// 
			this->DaysPanal->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->DaysPanal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->DaysPanal->Location = System::Drawing::Point(169, 287);
			this->DaysPanal->Name = L"DaysPanal";
			this->DaysPanal->Size = System::Drawing::Size(414, 320);
			this->DaysPanal->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label1->Location = System::Drawing::Point(185, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SUN";
			// 
			// LbMonthName
			// 
			this->LbMonthName->AutoSize = true;
			this->LbMonthName->BackColor = System::Drawing::Color::Transparent;
			this->LbMonthName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbMonthName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->LbMonthName->Location = System::Drawing::Point(339, 214);
			this->LbMonthName->Name = L"LbMonthName";
			this->LbMonthName->Size = System::Drawing::Size(67, 29);
			this->LbMonthName->TabIndex = 8;
			this->LbMonthName->Text = L"April";
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->flowLayoutPanel1->Controls->Add(this->button13);
			this->flowLayoutPanel1->Controls->Add(this->yearnum);
			this->flowLayoutPanel1->Controls->Add(this->button14);
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Controls->Add(this->button8);
			this->flowLayoutPanel1->Controls->Add(this->button9);
			this->flowLayoutPanel1->Controls->Add(this->button10);
			this->flowLayoutPanel1->Controls->Add(this->button11);
			this->flowLayoutPanel1->Controls->Add(this->button12);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 118);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(128, 600);
			this->flowLayoutPanel1->TabIndex = 9;
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(3, 3);
			this->button13->Margin = System::Windows::Forms::Padding(3, 3, 0, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(25, 35);
			this->button13->TabIndex = 12;
			this->button13->Text = L"<";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// yearnum
			// 
			this->yearnum->AutoSize = true;
			this->yearnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearnum->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->yearnum->Location = System::Drawing::Point(28, 8);
			this->yearnum->Margin = System::Windows::Forms::Padding(0, 8, 0, 0);
			this->yearnum->Name = L"yearnum";
			this->yearnum->Size = System::Drawing::Size(56, 25);
			this->yearnum->TabIndex = 14;
			this->yearnum->Text = L"2023";
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Location = System::Drawing::Point(84, 3);
			this->button14->Margin = System::Windows::Forms::Padding(0, 3, 3, 3);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(23, 35);
			this->button14->TabIndex = 13;
			this->button14->Text = L">";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(0, 46);
			this->button1->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"January";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(0, 91);
			this->button2->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"February";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(0, 136);
			this->button3->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"March";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(0, 181);
			this->button4->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 40);
			this->button4->TabIndex = 3;
			this->button4->Text = L"April";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::Control;
			this->button5->Location = System::Drawing::Point(0, 226);
			this->button5->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"May";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(0, 271);
			this->button6->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(128, 40);
			this->button6->TabIndex = 5;
			this->button6->Text = L"June";
			this->button6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(0, 316);
			this->button7->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(128, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"July";
			this->button7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(0, 361);
			this->button8->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(128, 40);
			this->button8->TabIndex = 7;
			this->button8->Text = L"August";
			this->button8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(0, 406);
			this->button9->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(128, 40);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Septamber";
			this->button9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(0, 451);
			this->button10->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(128, 40);
			this->button10->TabIndex = 9;
			this->button10->Text = L"October";
			this->button10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Location = System::Drawing::Point(0, 496);
			this->button11->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(128, 40);
			this->button11->TabIndex = 10;
			this->button11->Text = L"November";
			this->button11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(14)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Location = System::Drawing::Point(0, 541);
			this->button12->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(128, 40);
			this->button12->TabIndex = 11;
			this->button12->Text = L"December";
			this->button12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(213, 622);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 18);
			this->label8->TabIndex = 10;
			this->label8->Text = L"DD/MM/YYYY";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(173, 621);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 18);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Date:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label2->Location = System::Drawing::Point(409, 265);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 19);
			this->label2->TabIndex = 12;
			this->label2->Text = L"THU";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label3->Location = System::Drawing::Point(352, 265);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"WED";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label4->Location = System::Drawing::Point(298, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 19);
			this->label4->TabIndex = 14;
			this->label4->Text = L"TUE";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label5->Location = System::Drawing::Point(239, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 19);
			this->label5->TabIndex = 15;
			this->label5->Text = L"MUN";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label6->Location = System::Drawing::Point(467, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 19);
			this->label6->TabIndex = 16;
			this->label6->Text = L"FRI";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->label7->Location = System::Drawing::Point(519, 265);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 19);
			this->label7->TabIndex = 17;
			this->label7->Text = L"SAT";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(152, 118);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->label10->Location = System::Drawing::Point(267, 151);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(127, 29);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Welcome,";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(650, 130);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(264, 61);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->ForeColor = System::Drawing::Color::Transparent;
			this->button15->Location = System::Drawing::Point(863, 136);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(44, 42);
			this->button15->TabIndex = 22;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// textBoxDay
			// 
			this->textBoxDay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDay->Location = System::Drawing::Point(654, 148);
			this->textBoxDay->Name = L"textBoxDay";
			this->textBoxDay->Size = System::Drawing::Size(68, 25);
			this->textBoxDay->TabIndex = 23;
			// 
			// textBoxMonth
			// 
			this->textBoxMonth->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMonth->Location = System::Drawing::Point(728, 148);
			this->textBoxMonth->Name = L"textBoxMonth";
			this->textBoxMonth->Size = System::Drawing::Size(63, 25);
			this->textBoxMonth->TabIndex = 24;
			// 
			// textBoxYear
			// 
			this->textBoxYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxYear->Location = System::Drawing::Point(797, 148);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(63, 25);
			this->textBoxYear->TabIndex = 25;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(695, 216);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(165, 20);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 26;
			this->pictureBox4->TabStop = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->ForeColor = System::Drawing::Color::Transparent;
			this->button16->Location = System::Drawing::Point(265, 659);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(237, 65);
			this->button16->TabIndex = 27;
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->ForeColor = System::Drawing::Color::Transparent;
			this->button17->Location = System::Drawing::Point(666, 583);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(223, 67);
			this->button17->TabIndex = 28;
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->flowLayoutPanel2->Location = System::Drawing::Point(660, 255);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(238, 306);
			this->flowLayoutPanel2->TabIndex = 29;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// startpage
			// 
			this->startpage->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startpage.BackgroundImage")));
			this->startpage->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->startpage->Dock = System::Windows::Forms::DockStyle::Fill;
			this->startpage->Location = System::Drawing::Point(0, 0);
			this->startpage->Name = L"startpage";
			this->startpage->Size = System::Drawing::Size(982, 753);
			this->startpage->TabIndex = 30;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button27);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->button18);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(982, 753);
			this->panel1->TabIndex = 0;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.BackgroundImage")));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->ForeColor = System::Drawing::Color::Transparent;
			this->button28->Location = System::Drawing::Point(944, 58);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(35, 46);
			this->button28->TabIndex = 35;
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::Transparent;
			this->button27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.BackgroundImage")));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button27->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->ForeColor = System::Drawing::Color::Transparent;
			this->button27->Location = System::Drawing::Point(904, 58);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(35, 46);
			this->button27->TabIndex = 34;
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)));
			this->label13->Location = System::Drawing::Point(392, 151);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 29);
			this->label13->TabIndex = 33;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(79)),
				static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(92)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->ForeColor = System::Drawing::Color::Transparent;
			this->button18->Location = System::Drawing::Point(788, 37);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(121, 49);
			this->button18->TabIndex = 31;
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// Login_page
			// 
			this->Login_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Login_page.BackgroundImage")));
			this->Login_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Login_page->Controls->Add(this->button21);
			this->Login_page->Controls->Add(this->button22);
			this->Login_page->Controls->Add(this->label12);
			this->Login_page->Controls->Add(this->textBox2);
			this->Login_page->Controls->Add(this->textBox1);
			this->Login_page->Controls->Add(this->button19);
			this->Login_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Login_page->Location = System::Drawing::Point(0, 0);
			this->Login_page->Name = L"Login_page";
			this->Login_page->Size = System::Drawing::Size(982, 753);
			this->Login_page->TabIndex = 32;
			this->Login_page->Click += gcnew System::EventHandler(this, &MyForm::Login_page_Click);
			this->Login_page->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::Login_page_Paint);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Transparent;
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->CausesValidation = false;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(650, 408);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(35, 35);
			this->button21->TabIndex = 4;
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Transparent;
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->CausesValidation = false;
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(652, 408);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(35, 35);
			this->button22->TabIndex = 5;
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::Control;
			this->label12->Location = System::Drawing::Point(538, 580);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 24);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Signup";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->textBox2->Location = System::Drawing::Point(288, 411);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(366, 27);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Password";
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->textBox1->Location = System::Drawing::Point(288, 313);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(401, 27);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Username";
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(352, 490);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(278, 57);
			this->button19->TabIndex = 0;
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// Signup_page
			// 
			this->Signup_page->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Signup_page.BackgroundImage")));
			this->Signup_page->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Signup_page->Controls->Add(this->button25);
			this->Signup_page->Controls->Add(this->button26);
			this->Signup_page->Controls->Add(this->button23);
			this->Signup_page->Controls->Add(this->button24);
			this->Signup_page->Controls->Add(this->textBox6);
			this->Signup_page->Controls->Add(this->textBox5);
			this->Signup_page->Controls->Add(this->textBox4);
			this->Signup_page->Controls->Add(this->textBox3);
			this->Signup_page->Controls->Add(this->label11);
			this->Signup_page->Controls->Add(this->button20);
			this->Signup_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Signup_page->Location = System::Drawing::Point(0, 0);
			this->Signup_page->Name = L"Signup_page";
			this->Signup_page->Size = System::Drawing::Size(982, 753);
			this->Signup_page->TabIndex = 3;
			this->Signup_page->Click += gcnew System::EventHandler(this, &MyForm::Signup_page_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Transparent;
			this->button25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.BackgroundImage")));
			this->button25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button25->CausesValidation = false;
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(635, 479);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(35, 35);
			this->button25->TabIndex = 9;
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::Transparent;
			this->button26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.BackgroundImage")));
			this->button26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button26->CausesValidation = false;
			this->button26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button26->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Location = System::Drawing::Point(638, 479);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(35, 35);
			this->button26->TabIndex = 10;
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Transparent;
			this->button23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.BackgroundImage")));
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->CausesValidation = false;
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(636, 403);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(35, 35);
			this->button23->TabIndex = 7;
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Transparent;
			this->button24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.BackgroundImage")));
			this->button24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button24->CausesValidation = false;
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(638, 403);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 35);
			this->button24->TabIndex = 8;
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->textBox6->Location = System::Drawing::Point(293, 485);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(339, 29);
			this->textBox6->TabIndex = 6;
			this->textBox6->Text = L"Confirm Password";
			this->textBox6->Click += gcnew System::EventHandler(this, &MyForm::textBox6_Click);
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->textBox5->Location = System::Drawing::Point(293, 249);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(380, 29);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"Email";
			this->textBox5->Click += gcnew System::EventHandler(this, &MyForm::textBox5_Click);
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->textBox4->Location = System::Drawing::Point(293, 325);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(380, 29);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"Username";
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox4_Click);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->textBox3->Location = System::Drawing::Point(293, 406);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(337, 29);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Password";
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Control;
			this->label11->Location = System::Drawing::Point(561, 619);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(60, 25);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Login";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)),
				static_cast<System::Int32>(static_cast<System::Byte>(76)), static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(340, 543);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(300, 62);
			this->button20->TabIndex = 1;
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(982, 753);
			this->Controls->Add(this->Login_page);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->textBoxMonth);
			this->Controls->Add(this->textBoxDay);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->LbMonthName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DaysPanal);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->startpage);
			this->Controls->Add(this->Signup_page);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1000, 800);
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Login_page->ResumeLayout(false);
			this->Login_page->PerformLayout();
			this->Signup_page->ResumeLayout(false);
			this->Signup_page->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion





		private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
			AddEventForm^ addForm = gcnew AddEventForm(testUser);
		    addForm->ShowDialog();
			flowLayoutPanel2->Controls->Clear();
			MyForm::MyForm_Load(sender, e);
			
		}

		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
			DisplayAllEvents^ DisplayForm = gcnew DisplayAllEvents(testUser);
			DisplayForm->ShowDialog();
			flowLayoutPanel2->Controls->Clear();
			MyForm::MyForm_Load(sender, e);

		}

		int getYear()
		{
			time_t now = time(nullptr);
			struct tm newtime;
			localtime_s(&newtime, &now);
			return newtime.tm_year+1900;
		}
		int getMonth()
		{
			time_t now = time(nullptr);
			struct tm newtime;
			localtime_s(&newtime, &now);
			return newtime.tm_mon+1;
		}
		int getDay()
		{
			time_t now = time(nullptr);
			struct tm newtime;
			localtime_s(&newtime, &now);
			return newtime.tm_mday ;
		}
	
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	label8->Text = System::Convert::ToString(getDay()) + "/" + getMonth() + "/" + getYear();

	startpage->BringToFront();

	int counter = 0;
	this->flowLayoutPanel2->Controls->Clear();
	for (auto it = testUser->Reminder_events.begin(); it != testUser->Reminder_events.end(); it++)
	{
		if (counter <= 3)
		{
			EventReminderCard^ ReminderCard = gcnew EventReminderCard(&it->second, testUser);
			flowLayoutPanel2->Controls->Add(ReminderCard);
			counter++;
		}
		else
		{
			break;
		}
	}


	Calendar::year = getYear();
	Calendar::month = getMonth();
	

	if (getMonth() == 1)
		button1->PerformClick();
	else if (getMonth() == 2)
		button2->PerformClick();
	else if (getMonth() == 3)
		button3->PerformClick();
	else if (getMonth() == 4)
		button4->PerformClick();
	else if (getMonth() == 5)
		button5->PerformClick();
	else if (getMonth() == 6)
		button6->PerformClick();
	else if (getMonth() == 7)
		button7->PerformClick();
	else if (getMonth() == 8)
		button8->PerformClick();
	else if (getMonth() == 9)
		button9->PerformClick();
	else if (getMonth() == 10)
		button10->PerformClick();
	else if (getMonth() == 11)
		button11->PerformClick();
	else if (getMonth() == 12)
		button12->PerformClick();

	
}


	   void ChangeMonth(int x,bool month_flag,bool year_flag)
	   {
		   

		   for (int i = 1; i <= Calendar::Start_day_in_month[x]; i++)
		   {
			   dayuc^ uc;
			   if (x == 0)
				   uc = gcnew dayuc(Calendar::month_days[0] - Calendar::Start_day_in_month[x] + i);
			   else
				   uc = gcnew dayuc(Calendar::month_days[x - 1] - Calendar::Start_day_in_month[x] + i);

			   this->DaysPanal->Controls->Add(uc);
		   }

		   for (int i = 1; i <= Calendar::month_days[x]; i++)
		   {

			   dayuc^ uc = gcnew dayuc(i,this->label8, Calendar::year,x);
			   if(month_flag&&getDay()==i&&year_flag)
				   uc->nowday();
			   this->DaysPanal->Controls->Add(uc);
			   
		   }
	   }

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button1->Text;


	ChangeMonth(0,getMonth()==1,getYear()== Calendar::year);

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button2->Text;

	ChangeMonth(1, getMonth() == 2, getYear() == Calendar::year);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button3->Text;

	ChangeMonth(2, getMonth() == 3, getYear() == Calendar::year);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button4->Text;

	ChangeMonth(3, getMonth() == 4, getYear() == Calendar::year);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button5->Text;

	ChangeMonth(4, getMonth() == 5, getYear() == Calendar::year);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button6->Text;

	ChangeMonth(5, getMonth() == 6, getYear() == Calendar::year);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button7->Text;

	ChangeMonth(6, getMonth() == 7, getYear() == Calendar::year);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button8->Text;

	ChangeMonth(7, getMonth() == 8, getYear() == Calendar::year);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button9->Text;

	ChangeMonth(8, getMonth() == 9, getYear() == Calendar::year);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button10->Text;

	ChangeMonth(9, getMonth() == 10, getYear() == Calendar::year);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button11->Text;

	ChangeMonth(10, getMonth() == 11, getYear() == Calendar::year);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button12->Text;

	ChangeMonth(11, getMonth() == 12, getYear() == Calendar::year);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	Calendar::year++;
	yearnum->Text = System::Convert::ToString(Calendar::year);
	if (Calendar::year % 4 == 0)
		Calendar::month_days[1] = 29;
	else
		Calendar::month_days[1] = 28;

	int daycode;
	int d1, d2, d3;

	d1 = (Calendar::year - 1) / 4;
	d2 = (Calendar::year - 1) / 100;
	d3 = (Calendar::year - 1) / 400;

	daycode = (Calendar::year + d1 - d2 + d3) % 7;

	Calendar::Start_day_in_month[0] = daycode;
	for (size_t i = 1; i < 12; i++)
	{
		Calendar::Start_day_in_month[i] = (Calendar::month_days[i - 1] + Calendar::Start_day_in_month[i - 1]) % 7;

	}

	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button1->Text;

	ChangeMonth(0, getMonth() == 1, getYear() == Calendar::year);

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	Calendar::year--;
	yearnum->Text = System::Convert::ToString(Calendar::year);
	if (Calendar::year%4==0)
		Calendar::month_days[1] = 29;
	else
		Calendar::month_days[1] = 28;

	int d1, d2, d3;

	d1 = (Calendar::year - 1) / 4;
	d2 = (Calendar::year - 1) / 100;
	d3 = (Calendar::year - 1) / 400;
	
	Calendar::Start_day_in_month[0] = (Calendar::year + d1 - d2 + d3) % 7; ;
	for (size_t i = 1; i < 12; i++)
	{
		Calendar::Start_day_in_month[i] = (Calendar::month_days[i - 1] + Calendar::Start_day_in_month[i - 1]) % 7;

	}

	this->DaysPanal->Controls->Clear();

	LbMonthName->Text = button1->Text;

	ChangeMonth(0, getMonth() == 1, getYear() == Calendar::year);

}


	  

private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBoxYear->Text == "")
		MessageBox::Show("please enter at least year");
	else
	{
		Calendar::year = System::Convert::ToInt16(textBoxYear->Text);
		yearnum->Text = System::Convert::ToString(Calendar::year);
		if (Calendar::year % 400 == 0 || (Calendar::year % 100 == 0 && Calendar::year % 4 == 0))
			Calendar::month_days[1] = 29;
		else
			Calendar::month_days[1] = 28;

		int d1, d2, d3;

		d1 = (Calendar::year - 1) / 4;
		d2 = (Calendar::year - 1) / 100;
		d3 = (Calendar::year - 1) / 400;

		Calendar::Start_day_in_month[0] = (Calendar::year + d1 - d2 + d3) % 7; ;
		for (size_t i = 1; i < 12; i++)
		{
			Calendar::Start_day_in_month[i] = (Calendar::month_days[i - 1] + Calendar::Start_day_in_month[i - 1]) % 7;

		}

		this->DaysPanal->Controls->Clear();
		if (textBoxMonth->Text == "")
			button1->PerformClick();
		else
		{
			if (textBoxMonth->Text == "1")
				button1->PerformClick();
			else if (textBoxMonth->Text == "2")
				button2->PerformClick();
			else if (textBoxMonth->Text == "3")
				button3->PerformClick();
			else if (textBoxMonth->Text == "4")
				button4->PerformClick();
			else if (textBoxMonth->Text == "5")
				button5->PerformClick();
			else if (textBoxMonth->Text == "6")
				button6->PerformClick();
			else if (textBoxMonth->Text == "7")
				button7->PerformClick();
			else if (textBoxMonth->Text == "8")
				button8->PerformClick();
			else if (textBoxMonth->Text == "9")
				button9->PerformClick();
			else if (textBoxMonth->Text == "10")
				button10->PerformClick();
			else if (textBoxMonth->Text == "11")
				button11->PerformClick();
			else if (textBoxMonth->Text == "12")
				button12->PerformClick();
		}
	}


}
       

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	startpage->Hide();
	timer1->Enabled = false;

}


///////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////      //////////////////////////      ////////////////////////////////////////
//////////////////////////    Login    ////////////////////   signup     //////////////////////////////////
////////////////////////////       //////////////////////////        //////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

	   private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

		   Login_page->BringToFront();

	   }
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	std::string username = (const char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
	unordered_map<string, User>::iterator it = UsersManager::userList.find(username);
	if (it != UsersManager::userList.end())
	{
		std::string password = (const char*)(Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();

		if (password == it->second.getPassword())
		{

			testUser = &it->second;
			Login_page->SendToBack();
			Signup_page->SendToBack();
			label13->Text = textBox1->Text;

			MyForm::MyForm_Load(sender, e);


			textBox1->Text = "Username";
			textBox2->Text = "Password";

		}
		else
		{
			MessageBox::Show("wrong password : " + textBox1->Text, "invalid");
			return;
		}

	}
	else
	{
		MessageBox::Show("Username invalid", "invalid");
		return;

	}


}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {

	//validation of data

	//check email is correct & not empty

	if (textBox5->Text->Equals("Email"))
	{
		MessageBox::Show("Email can not be empty", "invalid");
		return;

	}
	else if (textBox5->Text->Contains("@") != true)
	{
		MessageBox::Show("incorrect Email : please try again", "invalid");
		return;
	}
	else if (textBox5->Text->Contains(".com") != true)
	{
		MessageBox::Show("incorrect Email : please try again", "invalid");
		return;
	}

	//check username is not empty

	if (textBox4->Text->Equals("Username") || textBox4->Text->Equals(""))
	{
		MessageBox::Show("Username can not be empty", "invalid");
		return;
	}
	//check password is correct & not empty

	if (textBox3->Text->Equals("Password"))
	{
		MessageBox::Show("Password cannot be the empty", "invalid");
		return;
	}
	else if (textBox3->Text->Equals(textBox4->Text))
	{
		MessageBox::Show("Password cannot be the same username : please try again", "invalid");
		return;
	}
	else if (textBox3->Text->Contains("@") != true && textBox3->Text->Contains("#") != true && textBox3->Text->Contains("$") != true && textBox3->Text->Contains("%") != true && textBox3->Text->Contains("*") != true && textBox3->Text->Contains("/") != true)
	{
		MessageBox::Show("Password doesn't have a special character : please try again", "invalid");
		return;
	}
	else if (textBox3->Text->Length < 8)
	{
		MessageBox::Show("Password is less than 8 characters: please try again", "invalid");
		return;
	}
	else if (textBox3->Text != textBox6->Text) {
		MessageBox::Show("The two passwords aren't identical : please try again", "invalid");
		return;
	}
	else
	{
		MessageBox::Show("done");
		// Get the text from the textbox control

		std::string newuser = (const char*)(Marshal::StringToHGlobalAnsi(textBox4->Text)).ToPointer();
		std::string password = (const char*)(Marshal::StringToHGlobalAnsi(textBox3->Text)).ToPointer();



		unordered_map<string, User>::iterator itnew = UsersManager::userList.find(newuser);

		if (itnew == UsersManager::userList.end())
		{

			UsersManager::adduser(User(newuser, password));

			label13->Text = textBox4->Text;
			myText = textBox4->Text;




			Login_page->BringToFront();
			Signup_page->SendToBack();
		}
		else
		{
			MessageBox::Show("Username already chosen please choose another one", "invalid");
			return;
		}

	}


}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {


	Signup_page->SendToBack();
	Login_page->BringToFront();
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {

	//Login_page->SendToBack();
	Signup_page->BringToFront();

}

private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "Email")
		textBox5->Text = "";

	if (textBox4->Text == "")
		textBox4->Text = "Username";

	if (textBox3->Text == "")
		textBox3->Text = "Password";

	if (textBox6->Text == "")
		textBox6->Text = "Confirm Password";


}



private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox4->Text == "Username")
		textBox4->Text = "";

	if (textBox5->Text == "")
		textBox5->Text = "Email";

	if (textBox3->Text == "")
		textBox3->Text = "Password";

	if (textBox6->Text == "")
		textBox6->Text = "Confirm Password";


}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text == "Password")
		textBox3->Text = "";

	if (textBox5->Text == "")
		textBox5->Text = "Email";

	if (textBox4->Text == "")
		textBox4->Text = "Username";

	if (textBox6->Text == "")
		textBox6->Text = "Confirm Password";

	if (textBox3->Text == "")
		textBox3->PasswordChar = '*';





}
private: System::Void Signup_page_Click(System::Object^ sender, System::EventArgs^ e) {


	if (textBox5->Text == "")
		textBox5->Text = "Email";

	if (textBox4->Text == "")
		textBox4->Text = "Username";

	if (textBox3->Text == "")
		textBox3->Text = "Password";

	if (textBox6->Text == "")
		textBox6->Text = "Confirm Password";



}


private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "Username")
		textBox1->Text = "";

	if (textBox2->Text == "")
		textBox2->Text = "Password";




}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox2->Text == "Password")
		textBox2->Text = "";


	if (textBox1->Text == "")
	{
		textBox1->Text = "Username";	
	}

	if (textBox2->Text == "")
		textBox2->PasswordChar='*';

	





}
private: System::Void Login_page_Click(System::Object^ sender, System::EventArgs^ e) {


	if (textBox1->Text == "")
		textBox1->Text = "Username";

	if (textBox2->Text == "")
		textBox2->Text = "Password";



}


private: System::Void Login_page_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "")
		textBox3->Text = "Password";

	if (textBox5->Text == "")
		textBox5->Text = "Email";

	if (textBox4->Text == "")
		textBox4->Text = "Username";

	if (textBox6->Text == "Confirm Password")
		textBox6->Text = "";

	if (textBox6->Text == "")
		textBox6->PasswordChar = '*';




}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {

	button21->SendToBack();
	button22->BringToFront();
	if (textBox2->Text != "Password")
		this->textBox2->PasswordChar = NULL;





}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {


	button22->SendToBack();
	button21->BringToFront();

	if(textBox2->Text != "Password")
		this->textBox2->PasswordChar = '*';


}

private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {

	button23->SendToBack();
	button24->BringToFront();
	if (textBox3->Text != "Password")
		this->textBox3->PasswordChar = NULL;

}




private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

	button24->SendToBack();
	button23->BringToFront();
	if (textBox3->Text != "Password")
		this->textBox3->PasswordChar = '*';


}



private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {

	button25->SendToBack();
	button26->BringToFront();
	if (textBox6->Text != "Password")
		this->textBox6->PasswordChar = NULL;



}



private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {

	button26->SendToBack();
	button25->BringToFront();
	if (textBox6->Text != "Password")
		this->textBox6->PasswordChar = '*';


}


	   ////undo button

private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!testUser->undo_stack.empty())
	{
		if (testUser->undo_stack.top().second == "Add")
		{
			System::String^ eventName = gcnew System::String(testUser->undo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " delete");
			testUser->events.erase(testUser->undo_stack.top().first.getId());
			testUser->Reminder_events.erase(testUser->undo_stack.top().first.getRemId());
			testUser->redo_stack.push(testUser->undo_stack.top());
			testUser->undo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);

		}
		else if (testUser->undo_stack.top().second == "delete")
		{
			System::String^ eventName = gcnew System::String(testUser->undo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " add");
			testUser->events[testUser->undo_stack.top().first.getId()] = testUser->undo_stack.top().first;
			testUser->Reminder_events[testUser->undo_stack.top().first.getRemId()] = testUser->undo_stack.top().first;
			//testUser->undo_stack.pop();
			testUser->redo_stack.push(testUser->undo_stack.top());
			testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);
		}
		else if(testUser->undo_stack.top().second=="Done")
		{
			System::String^ eventName = gcnew System::String(testUser->undo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " will be deleted");
			testUser->done_events.pop();
			testUser->redo_stack.push(testUser->undo_stack.top());
			testUser->undo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);

		}
		else if (testUser->undo_stack.top().second == "Remove From Done")
		{
			System::String^ eventName = gcnew System::String(testUser->undo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " will remove edit");

			testUser->redo_stack.push(make_pair(testUser->done_events.top(),"Remove From Done"));


			testUser->done_events.pop();

			testUser->events[testUser->undo_stack.top().first.getId()] = testUser->undo_stack.top().first;
			testUser->Reminder_events[testUser->undo_stack.top().first.getRemId()] = testUser->undo_stack.top().first;
			
			testUser->undo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);
		}
		else {
			System::String^ eventName = gcnew System::String(testUser->undo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " will remove edit");

			testUser->redo_stack.push(make_pair(testUser->events[testUser->undo_stack.top().second], testUser->undo_stack.top().first.getId()));

			testUser->Reminder_events.erase(testUser->events[testUser->undo_stack.top().second].getRemId());
			testUser->events.erase(testUser->undo_stack.top().second);
			
			testUser->events[testUser->undo_stack.top().first.getId()] = testUser->undo_stack.top().first;
			testUser->Reminder_events[testUser->undo_stack.top().first.getRemId()] = testUser->undo_stack.top().first;
			
			testUser->undo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);
		}

		

		MyForm::MyForm_Load(sender, e);
	}
	else
		MessageBox::Show("undo stack is empty");
}





private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!testUser->redo_stack.empty())
	{
		if (testUser->redo_stack.top().second == "delete")
		{
			System::String^ eventName = gcnew System::String(testUser->redo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " delete");
			testUser->events.erase(testUser->redo_stack.top().first.getId());
			testUser->Reminder_events.erase(testUser->redo_stack.top().first.getRemId());

			//testUser->undo_stack.push(testUser->redo_stack.top());
			testUser->redo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);

		}
		else if (testUser->redo_stack.top().second == "Add")
		{
			System::String^ eventName = gcnew System::String(testUser->redo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " add");
			testUser->events[testUser->redo_stack.top().first.getId()] = testUser->redo_stack.top().first;
			testUser->Reminder_events[testUser->redo_stack.top().first.getRemId()] = testUser->redo_stack.top().first;

			//testUser->undo_stack.push(testUser->redo_stack.top());
			testUser->redo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);
		}
		else if (testUser->redo_stack.top().second == "Done")
		{
			System::String^ eventName = gcnew System::String(testUser->redo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " will be add");
			testUser->done_events.push(testUser->redo_stack.top().first);

			//testUser->undo_stack.push(testUser->redo_stack.top());
			testUser->redo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);

		}
		else if (testUser->redo_stack.top().second == "Remove From Done")
		{
			System::String^ eventName = gcnew System::String(testUser->redo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " will remove edit");

			//std::cout << testUser->redo_stack.top().second;
			//testUser->undo_stack.push(make_pair(testUser->done_events.top(),"Remove From Done"));

			testUser->events.erase(testUser->redo_stack.top().first.getId());
			testUser->Reminder_events.erase(testUser->redo_stack.top().first.getRemId());

			
			testUser->done_events.push(testUser->redo_stack.top().first);

			

			
			testUser->redo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);
		}
		else {
			System::String^ eventName = gcnew System::String(testUser->redo_stack.top().first.getName().c_str());
			MessageBox::Show("Event name :" + eventName + " will remove edit");

			//testUser->undo_stack.push(make_pair(testUser->events[testUser->redo_stack.top().second], testUser->redo_stack.top().first.id));
		

			testUser->Reminder_events.erase(testUser->events[testUser->redo_stack.top().second].getRemId());
			testUser->events.erase(testUser->redo_stack.top().second);

			testUser->events[testUser->redo_stack.top().first.getId()] = testUser->redo_stack.top().first;
			testUser->Reminder_events[testUser->redo_stack.top().first.getRemId()] = testUser->redo_stack.top().first;
		
			testUser->redo_stack.pop();
			//testUser->undo_stack.pop();
			MyForm::MyForm_Load(sender, e);
		}


	}
	else
		MessageBox::Show("redo stack is empty");


}
};


}
