#pragma once
#include "Event.h"
#include "Date.h"
#include "User.h"
#include <string>

//#include "Calendar.h"
//#include "DisplayAllEvents.h"
//#include "EventAllData.h"
//#include "MyForm.h"
//#include <iostream>

//#include <msclr\marshal_cppstd.h>

//using namespace System;
//using namespace msclr::interop;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//	using namespace msclr::interop;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// Summary for AddEventForm
	/// </summary>
	public ref class AddEventForm : public System::Windows::Forms::Form
	{
	public:
		AddEventForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		AddEventForm(User* test)
		{
			InitializeComponent();
			usertest = test;

			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	public:

	public:

	public:



		Button^ startbutton;
		AddEventForm(User* test, Event* even, Button^ startbutton)
		{
			InitializeComponent();

			//this->flowPanel = flowPanel;
			this->startbutton = startbutton;

			this->Text = "Edit Form";
			Edit = true;
			usertest = test;
			this->event = even;


			textBox1->Text = gcnew System::String(event->getName().c_str());

			dateTimePicker1->Text = event->getStartDate().getMonth() + "/" + event->getStartDate().getDay() + "/" + event->getStartDate().getYear();

			dateTimePicker2->Text = event->getEndDate().getMonth() + "/" + event->getEndDate().getDay() + "/" + event->getEndDate().getYear();

			dateTimePicker3->Text = event->getReminder().getMonth() + "/" + event->getReminder().getDay() + "/" + event->getReminder().getYear();

			textBox2->Text = gcnew System::String(convertTo12HourFormat(event->getStartDate().getHour()).c_str());

			textBox3->Text = System::Convert::ToString(event->getStartDate().getMinute());

			textBox4->Text = gcnew System::String(convertTo12HourFormat(event->getEndDate().getHour()).c_str());

			textBox5->Text = System::Convert::ToString(event->getEndDate().getMinute());


			if (IsAmOrPm(event->getStartDate().getHour()) == "am")
				listBox1->Text = "AM";
			else
				listBox1->Text = "PM";

			if (IsAmOrPm(event->getEndDate().getHour()) == "am")
				listBox2->Text = "AM";
			else
				listBox2->Text = "PM";


			textBox6->Text = gcnew System::String(event->getPlace().c_str());

			if (event->isDone() == true)
				checkBox1->Checked = true;

			id = gcnew System::String(event->getId().c_str());

			//
			//TODO: Add the constructor code here
			//
		}

		std::string convertTo12HourFormat(int hour) {
			if (hour == 0) {
				return "12 ";
			}
			else if (hour < 12) {
				return std::to_string(hour);
			}
			else if (hour == 12) {
				return "12 ";
			}
			else {
				return std::to_string(hour - 12);
			}
		}

		std::string IsAmOrPm(int hour) {
			if (hour == 0) {
				return "am";
			}
			else if (hour < 12) {
				return  "am";
			}
			else if (hour == 12) {
				return "pm";
			}
			else {
				return  "pm";
			}
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddEventForm()
		{
			if (components)
			{
				delete components;
			}

		}
	private: System::Windows::Forms::TextBox^ textBox1;

		   FlowLayoutPanel^ flowPanel = gcnew FlowLayoutPanel;

	public:User* usertest;
	public:Event* event;
		  bool Edit = false;
		  String^ id;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label8;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddEventForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Location = System::Drawing::Point(5, 13);
			this->textBox1->Margin = System::Windows::Forms::Padding(10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(300, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Event Name";
			this->textBox1->Click += gcnew System::EventHandler(this, &AddEventForm::textBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(23, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(313, 49);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddEventForm::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(10, 175);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(52, 44);
			this->panel2->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox2->Location = System::Drawing::Point(22, 183);
			this->textBox2->Margin = System::Windows::Forms::Padding(10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(37, 31);
			this->textBox2->TabIndex = 0;
			this->textBox2->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(23, 111);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(111, 27);
			this->dateTimePicker1->TabIndex = 5;
			this->dateTimePicker1->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label1->Location = System::Drawing::Point(24, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Start Date";
			this->label1->Click += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker2->CalendarTitleBackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker2->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(224, 111);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(111, 27);
			this->dateTimePicker2->TabIndex = 9;
			this->dateTimePicker2->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label2->Location = System::Drawing::Point(229, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 20);
			this->label2->TabIndex = 10;
			this->label2->Text = L"End Date";
			this->label2->Click += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox3->Location = System::Drawing::Point(84, 183);
			this->textBox3->Margin = System::Windows::Forms::Padding(10);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 31);
			this->textBox3->TabIndex = 11;
			this->textBox3->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(72, 175);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(52, 44);
			this->panel3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox4->Location = System::Drawing::Point(197, 183);
			this->textBox4->Margin = System::Windows::Forms::Padding(10);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(37, 31);
			this->textBox4->TabIndex = 13;
			this->textBox4->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(185, 175);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(52, 44);
			this->panel4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox5->Location = System::Drawing::Point(259, 183);
			this->textBox5->Margin = System::Windows::Forms::Padding(10);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(37, 31);
			this->textBox5->TabIndex = 15;
			this->textBox5->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(247, 175);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(52, 44);
			this->panel5->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label3->Location = System::Drawing::Point(11, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 20);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Start Time";
			this->label3->Click += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label4->Location = System::Drawing::Point(197, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 20);
			this->label4->TabIndex = 18;
			this->label4->Text = L"End Time";
			this->label4->Click += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label5->Location = System::Drawing::Point(59, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 25);
			this->label5->TabIndex = 19;
			this->label5->Text = L":";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label6->Location = System::Drawing::Point(234, 183);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(19, 25);
			this->label6->TabIndex = 20;
			this->label6->Text = L":";
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel6->Controls->Add(this->textBox6);
			this->panel6->Location = System::Drawing::Point(23, 241);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(313, 49);
			this->panel6->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox6->Location = System::Drawing::Point(4, 14);
			this->textBox6->Margin = System::Windows::Forms::Padding(10);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(300, 25);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"Location";
			this->textBox6->Click += gcnew System::EventHandler(this, &AddEventForm::textBox6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label7->Location = System::Drawing::Point(113, 300);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 20);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Reminder Date";
			this->label7->Click += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->CalendarForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker3->CalendarTitleBackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker3->CalendarTitleForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dateTimePicker3->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker3->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker3->Location = System::Drawing::Point(116, 323);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(111, 27);
			this->dateTimePicker3->TabIndex = 22;
			this->dateTimePicker3->BindingContextChanged += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(63, 418);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(242, 81);
			this->button1->TabIndex = 24;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddEventForm::button1_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->listBox2);
			this->panel7->Controls->Add(this->listBox1);
			this->panel7->Controls->Add(this->checkBox1);
			this->panel7->Controls->Add(this->label8);
			this->panel7->Controls->Add(this->label7);
			this->panel7->Controls->Add(this->dateTimePicker3);
			this->panel7->Controls->Add(this->panel6);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->textBox5);
			this->panel7->Controls->Add(this->panel5);
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->Controls->Add(this->panel4);
			this->panel7->Controls->Add(this->textBox3);
			this->panel7->Controls->Add(this->panel3);
			this->panel7->Controls->Add(this->textBox2);
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->dateTimePicker2);
			this->panel7->Controls->Add(this->label1);
			this->panel7->Controls->Add(this->dateTimePicker1);
			this->panel7->Controls->Add(this->panel2);
			this->panel7->Controls->Add(this->panel1);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->label6);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(363, 503);
			this->panel7->TabIndex = 25;
			this->panel7->Click += gcnew System::EventHandler(this, &AddEventForm::panel7_Click);
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AddEventForm::panel7_Paint);
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 22;
			this->listBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->listBox2->Location = System::Drawing::Point(305, 184);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(52, 26);
			this->listBox2->TabIndex = 27;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->listBox1->Location = System::Drawing::Point(127, 184);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(52, 26);
			this->listBox1->TabIndex = 26;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(191, 374);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(18, 17);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->label8->Location = System::Drawing::Point(123, 372);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 20);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Done \?";
			// 
			// AddEventForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->ClientSize = System::Drawing::Size(363, 503);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel7);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(381, 550);
			this->MinimizeBox = false;
			this->Name = L"AddEventForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add Event Form";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "Event Name")
			textBox1->Text = "";

		if (textBox6->Text == "")
			textBox6->Text = "Location";

	}





	private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text == "Location")
			textBox6->Text = "";

		if (textBox1->Text == "")
			textBox1->Text = "Event Name";
	}
	private: System::Void panel7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox6->Text == "")
			textBox6->Text = "Location";
		if (textBox1->Text == "")
			textBox1->Text = "Event Name";
	}


		   bool IsVaildInput(std::string s) {
			   for (auto it : s) {
				   int asciinum = it - '0';

				   if (asciinum >= 48 && asciinum <= 58) {
					   continue;
				   }
				   else {
					   return false;
				   }

			   }
			   return true;

		   }

		   bool  isvaild(std::string s) {
			   for (auto it : s) {
				   int x = (int)it;

				   if (x >= 48 && x <= 57) {
					   continue;
				   }
				   else {
					   return false;
				   }

			   }
			   return true;
		   }



		   // save 
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text == "Event Name" || textBox1->Text == "")
		{
			MessageBox::Show("Enter Event Name");
			return;
		}
		if (textBox2->Text == "")
		{
			MessageBox::Show("Enter Event Start Date");
			return;
		}
		if (textBox4->Text == "")
		{
			MessageBox::Show("Enter Event End Date");
			return;
		}
		if (textBox6->Text == "Location" || textBox6->Text == "")
		{
			MessageBox::Show("Enter Event Location");
			return;
		}
		if (textBox3->Text == "")
		{

			textBox3->Text = "00";

		}
		if (textBox5->Text == "")
		{

			textBox5->Text = "00";

		}






		if (listBox1->Text == "" || listBox2->Text == "")
		{
			MessageBox::Show("Select Event Time AM OR PM");
			return;
		}



		//name//////////////

		std::string evname = (const char*)(Marshal::StringToHGlobalAnsi(textBox1->Text)).ToPointer();
		//std::cout << evname << "\n";
		//start date////////
		String^ Start_Date_Text = dateTimePicker1->Text;
		array<String^>^ Start_date = Start_Date_Text->Split('/');
		int year_S = Int16::Parse(Start_date[2]);
		int month_S = Int16::Parse(Start_date[1]);
		int day_S = Int16::Parse(Start_date[0]);

		//std::cout << day_S<<"\n"<<month_S<<"\n" << year_S<<"\n";
		//end date/////////
		String^ End_Date_Text = dateTimePicker2->Text;
		array<String^>^ End_date = End_Date_Text->Split('/');
		int year_E = Int16::Parse(End_date[2]);
		int month_E = Int16::Parse(End_date[1]);
		int day_E = Int16::Parse(End_date[0]);
		//std::cout << day_E << "\n" << month_E << "\n" << year_E<<"\n";

		//std::string t = (const char*)(Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();
		//if (!IsVaildInput(t)) {
		//	MessageBox::Show("INVAILD INPUT");
		//	return;
		//}



		std::string startDateHours1 = (const char*)(Marshal::StringToHGlobalAnsi(textBox2->Text)).ToPointer();
		std::string startDateHours2 = (const char*)(Marshal::StringToHGlobalAnsi(textBox3->Text)).ToPointer();

		if (!isvaild(startDateHours1) || !isvaild(startDateHours2)) {
			MessageBox::Show("Start Time Invalid");
			return;
		}
		std::string endDateHours1 = (const char*)(Marshal::StringToHGlobalAnsi(textBox4->Text)).ToPointer();
		std::string endDateHours2 = (const char*)(Marshal::StringToHGlobalAnsi(textBox5->Text)).ToPointer();

		if (!isvaild(endDateHours1) || !isvaild(endDateHours2)) {
			MessageBox::Show("End Time Invalid");
			return;
		}

		int Hour_S = Int16::Parse(textBox2->Text);
		//std::cout << Hour_S << "\n";

		int Min_S = Int16::Parse(textBox3->Text);
		//std::cout << Min_S << "\n";


		int Hour_E = Int16::Parse(textBox4->Text);
		//std::cout << Hour_E << "\n";

		int Min_E = Int16::Parse(textBox5->Text);
		//std::cout << Min_E << "\n";


		if (Hour_S > 12 || Min_S >= 60 || Hour_S < 0 || Min_S < 0)
		{
			MessageBox::Show("Start Time Invalid");
			return;
		}
		if (Hour_E > 12 || Min_E >= 60 || Hour_E < 0 || Min_E < 0)
		{
			MessageBox::Show("End Time Invalid");
			return;
		}


		if (listBox1->Text == "AM" && Hour_S < 12)
			Hour_S = Hour_S;
		else if (listBox1->Text == "AM" && Hour_S == 12)
			Hour_S = 0;
		else if (listBox1->Text == "PM" && Hour_S < 12)
			Hour_S += 12;
		else
			Hour_S = Hour_S;



		if (listBox2->Text == "AM" && Hour_E < 12)
			Hour_E = Hour_E;
		else if (listBox2->Text == "AM" && Hour_E == 12)
			Hour_E = 0;
		else if (listBox2->Text == "PM" && Hour_E < 12)
			Hour_E += 12;
		else
			Hour_E = Hour_E;


		/*if (listBox1->Text == "PM")
			Hour_S += 12;

		std::cout << (const char*)(Marshal::StringToHGlobalAnsi(listBox1->Text)).ToPointer()<<"jjjj";

		if (listBox2->Text == "PM")
			Hour_E += 12;*/


		std::string evLocation = (const char*)(Marshal::StringToHGlobalAnsi(textBox6->Text)).ToPointer();
		//std::cout << evLocation << "\n";


		//std::cout << day_R << "\n" << month_R << "\n" << year_R << "\n";

		Date start_Date(year_S, month_S, day_S, Hour_S, Min_S);
		Date end_Date(year_E, month_E, day_E, Hour_E, Min_E);
		if (end_Date < start_Date)
		{
			MessageBox::Show("End date < start date ?");
			return;
		}

		String^ Rem_Date_Text = dateTimePicker3->Text;
		array<String^>^ Rem_date = Rem_Date_Text->Split('/');
		int year_R = Int16::Parse(Rem_date[2]);
		int month_R = Int16::Parse(Rem_date[1]);
		int day_R = Int16::Parse(Rem_date[0]);
		Date rem_Date(year_R, month_R, day_R);

		if (rem_Date > start_Date)
		{
			MessageBox::Show("Reminder date > start date ?");
			return;
		}

		Event ev(evname, evLocation, start_Date, end_Date, rem_Date, usertest->getUsername(), checkBox1->Checked);



		if (Edit)
		{
			std::string idstd = (const char*)(Marshal::StringToHGlobalAnsi(id)).ToPointer();
			bool flag = usertest->update_event(idstd, ev);

			//std::cout << "Event Added";


			if (flag)
			{
				startbutton->PerformClick();
				//Calendar::Edit = true;
				this->Close();
			}

			//flowPanel->Controls->Clear();
			//for (auto it = usertest->events.begin(); it != usertest->events.end(); it++)
			//{
			//	EventAllData^ evt = gcnew EventAllData(&it->second, usertest);

			//	flowPanel->Controls->Add(evt);
			//}

		}
		else
		{

			bool flag = usertest->add_event(ev);

			//std::cout << "Event Added";

			if (flag)
				this->Close();

		}


	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	};
}