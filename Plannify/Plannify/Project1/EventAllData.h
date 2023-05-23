#pragma once
#include "User.h"
#include "Event.h"
#include "AddEventForm.h"
#include <string>
#include <vector>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
//	using namespace msclr::interop;
using namespace Runtime::InteropServices;




namespace Project1 {

	/// <summary>
	/// Summary for EventAllData
	/// </summary>

	public ref class EventAllData : public System::Windows::Forms::UserControl

	{



	public:


		EventAllData(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



		//EventAllData(Event* event, User* user,FlowLayoutPanel^ pan)
		//{
		//	InitializeComponent();

		//	this->flowpanel = pan;
		//	us = user;
		//	ev = event;

		//	//ev = Event(event.name, event.place, event.start_date, event.end_date, event.reminder);

		//	std::vector<std::string> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };


		//	System::String^ eventName = gcnew System::String(ev->name.c_str());
		//	label2->Text = eventName;

		//	System::String^ placeName = gcnew System::String(ev->place.c_str());
		//	label3->Text = placeName;

		//	System::String^ startDay = System::Convert::ToString(ev->start_date.day);
		//	label1->Text = startDay;

		//	//months[it.start_date.month - 1 ]
		//	String^ startDate_hour;
		//	if (ev->start_date.hour < 9)
		//		startDate_hour = "0" + System::Convert::ToString(ev->start_date.hour);
		//	else
		//		startDate_hour = System::Convert::ToString(ev->start_date.hour);

		//	String^ startDate_minute;
		//	if (ev->start_date.minute < 9)
		//		startDate_minute = "0" + System::Convert::ToString(ev->start_date.minute);
		//	else
		//		startDate_minute = System::Convert::ToString(ev->start_date.minute);

		//	System::String^ startDate = gcnew System::String(months[ev->start_date.month - 1].c_str()) + " " + System::Convert::ToString(ev->start_date.day)
		//		+ ", "
		//		+ System::Convert::ToString(ev->start_date.year) + " " + startDate_hour + ":" + startDate_minute;
		//	label4->Text = startDate;

		//	String^ endDate_hour;
		//	if (ev->end_date.hour < 9)
		//		endDate_hour = "0" + System::Convert::ToString(ev->end_date.hour);
		//	else
		//		endDate_hour = System::Convert::ToString(ev->end_date.hour);

		//	String^ endDate_minute;
		//	if (ev->end_date.minute < 9)
		//		endDate_minute = "0" + System::Convert::ToString(ev->end_date.minute);
		//	else
		//		endDate_minute = System::Convert::ToString(ev->end_date.minute);


		//	System::String^ endDate = gcnew System::String(months[ev->end_date.month - 1].c_str()) + " " + System::Convert::ToString(ev->end_date.day)
		//		+ ", "
		//		+ System::Convert::ToString(ev->end_date.year) + " " + endDate_hour + ":" + endDate_minute;
		//	label6->Text = endDate;

		//	System::String^ reminderDate = "Reminder: " + gcnew System::String(months[ev->reminder.month - 1].c_str()) + " " + System::Convert::ToString(ev->reminder.day)
		//		+ ", "
		//		+ System::Convert::ToString(ev->reminder.year);
		//	label7->Text = reminderDate;


		//	if (ev->done)
		//	{
		//		Done->BringToFront();
		//	}
		//	else
		//	{
		//		Not_Done->BringToFront();
		//		label8->Font = gcnew System::Drawing::Font(label8->Font, label8->Font->Style ^ FontStyle::Strikeout);
		//	}

		//	id = gcnew System::String(ev->id.c_str());
		//	//
		//	//TODO: Add the constructor code here
		//	//
		//}

		Button^ startbutton;

		EventAllData(Event* event, User* user,Button^ startbutton)
		{
			InitializeComponent();
			this->startbutton = startbutton;
			us = user;
			ev = event;

			//ev = Event(event.name, event.place, event.start_date, event.end_date, event.reminder);

			std::vector<std::string> months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };


			System::String^ eventName = gcnew System::String(ev->getName().c_str());
			label2->Text = eventName;

			System::String^ placeName = gcnew System::String(ev->getPlace().c_str());
			label3->Text = placeName;

			System::String^ startDay = System::Convert::ToString(ev->getStartDate().getDay());
			label1->Text = startDay;


			String^ startDate_hour;

			std::string startHourString = convertTo12HourFormat(ev->getStartDate().getHour());
			std::string startStatus = IsAmOrPm(ev->getStartDate().getHour());


			if (startHourString.size()<2)
				startDate_hour = "0" + gcnew System::String(startHourString.c_str());
			else
				startDate_hour = gcnew System::String(startHourString.c_str());

			String^ startDate_minute;
			if (ev->getStartDate().getMinute() < 9)
				startDate_minute = "0" + System::Convert::ToString(ev->getStartDate().getMinute());
			else
				startDate_minute = System::Convert::ToString(ev->getStartDate().getMinute());

			System::String^ startDate = gcnew System::String(months[ev->getStartDate().getMonth() - 1].c_str()) + " " + System::Convert::ToString(ev->getStartDate().getDay())
				+ ", "
				+ System::Convert::ToString(ev->getStartDate().getYear()) + " " + startDate_hour + ":" + startDate_minute + gcnew System::String(startStatus.c_str());
			label4->Text = startDate;

			std::string endHourString = convertTo12HourFormat(ev->getEndDate().getHour());
			std::string endStatus = IsAmOrPm(ev->getEndDate().getHour());
			String^ endDate_hour;
			if (endHourString.size()< 2)
				endDate_hour = "0" + gcnew System::String(endHourString.c_str());
			else
				endDate_hour = gcnew System::String(endHourString.c_str());

			String^ endDate_minute;
			if (ev->getEndDate().getMinute() < 9)
				endDate_minute = "0" + System::Convert::ToString(ev->getEndDate().getMinute());
			else
				endDate_minute = System::Convert::ToString(ev->getEndDate().getMinute());


			System::String^ endDate = gcnew System::String(months[ev->getEndDate().getMonth() - 1].c_str()) + " " + System::Convert::ToString(ev->getEndDate().getDay())
				+ ", "
				+ System::Convert::ToString(ev->getEndDate().getYear()) + " " + endDate_hour + ":" + endDate_minute + gcnew System::String(endStatus.c_str());
			label6->Text = endDate;

			System::String^ reminderDate = "Reminder: " + gcnew System::String(months[ev->getReminder().getMonth() - 1].c_str()) + " " + System::Convert::ToString(ev->getReminder().getDay())
				+ ", "
				+ System::Convert::ToString(ev->getReminder().getYear());
			label7->Text = reminderDate;


			if (ev->isDone())
			{
				Done->BringToFront();
				button1->Hide();
				button2->Hide();
			}
			else
			{
				Not_Done->BringToFront();
				label8->Font = gcnew System::Drawing::Font(label8->Font, label8->Font->Style ^ FontStyle::Strikeout);
			}

			id = gcnew System::String(ev->getId().c_str());
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
				return " am";
			}
			else if (hour < 12) {
				return  " am";
			}
			else if (hour == 12) {
				return " pm";
			}
			else {
				return  " pm";
			}
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EventAllData()
		{
			if (components)
			{
				delete components;
			}
		}

	public:Event* ev;
	public:User* us;

	public:	String^ id;
		  FlowLayoutPanel^ flowpanel = gcnew FlowLayoutPanel;


	public: System::Windows::Forms::Panel^ panel1;
	protected:
	public: System::Windows::Forms::PictureBox^ pictureBox1;
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label7;
	public: System::Windows::Forms::Label^ label6;
	public: System::Windows::Forms::Label^ label5;
	public: System::Windows::Forms::Label^ label4;
	public: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
public: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::PictureBox^ Done;
public:
private: System::Windows::Forms::PictureBox^ Not_Done;
private:

public:
	public:

	public:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EventAllData::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Not_Done = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Done = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Not_Done))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Done))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Location = System::Drawing::Point(4, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(804, 150);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Not_Done);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->Done);
			this->panel2->Controls->Add(this->flowLayoutPanel1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(131, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(673, 150);
			this->panel2->TabIndex = 10;
			this->panel2->MouseEnter += gcnew System::EventHandler(this, &EventAllData::panel2_MouseEnter);
			this->panel2->MouseLeave += gcnew System::EventHandler(this, &EventAllData::panel2_MouseLeave);
			// 
			// Not_Done
			// 
			this->Not_Done->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Not_Done.Image")));
			this->Not_Done->Location = System::Drawing::Point(627, 5);
			this->Not_Done->Name = L"Not_Done";
			this->Not_Done->Size = System::Drawing::Size(35, 31);
			this->Not_Done->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Not_Done->TabIndex = 13;
			this->Not_Done->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->label8->Location = System::Drawing::Point(559, 8);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 24);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Done";
			// 
			// Done
			// 
			this->Done->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Done.Image")));
			this->Done->Location = System::Drawing::Point(627, 5);
			this->Done->Name = L"Done";
			this->Done->Size = System::Drawing::Size(35, 31);
			this->Done->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Done->TabIndex = 11;
			this->Done->TabStop = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->label4);
			this->flowLayoutPanel1->Controls->Add(this->label5);
			this->flowLayoutPanel1->Controls->Add(this->label6);
			this->flowLayoutPanel1->Controls->Add(this->label7);
			this->flowLayoutPanel1->Location = System::Drawing::Point(-7, 116);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(703, 34);
			this->flowLayoutPanel1->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(177, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"May 10, 2022 09:00pm";
			this->label4->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->label5->Location = System::Drawing::Point(186, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L":";
			this->label5->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->label6->Location = System::Drawing::Point(206, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"May 11, 2022 10:00pm";
			this->label6->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(150)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)));
			this->label7->Location = System::Drawing::Point(386, 0);
			this->label7->Margin = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 20);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Reminder: May 8,2022";
			this->label7->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkGray;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(246)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(621, 58);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 31);
			this->button2->TabIndex = 9;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &EventAllData::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(568, 58);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 31);
			this->button1->TabIndex = 8;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EventAllData::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->label3->Location = System::Drawing::Point(45, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"ain shams university";
			this->label3->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->label2->Location = System::Drawing::Point(45, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"acm event,";
			this->label2->MouseEnter += gcnew System::EventHandler(this, &EventAllData::button2_MouseEnter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(10)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->label1->Location = System::Drawing::Point(35, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"10";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(13, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(109, 117);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// EventAllData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(5, 10, 3, 5);
			this->Name = L"EventAllData";
			this->Size = System::Drawing::Size(808, 150);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Not_Done))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Done))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		std::string deleteid = (const char*)(Marshal::StringToHGlobalAnsi(id)).ToPointer();
	
		//	std::cout << deleteid << "\n";

		us->delete_event(deleteid);


		this->Parent->Controls->Remove(this);

	}


	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		//AddEventForm^ Editform = gcnew AddEventForm(us,ev,flowpanel);
		AddEventForm^ Editform = gcnew AddEventForm(us, ev,startbutton);
		Editform->ShowDialog();



	}

	public: System::Void panel2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(202)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
			static_cast<System::Int32>(static_cast<System::Byte>(234)));
	}



	public: System::Void panel2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	public: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(202)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
			static_cast<System::Int32>(static_cast<System::Byte>(234)));

	}




	
};
}
