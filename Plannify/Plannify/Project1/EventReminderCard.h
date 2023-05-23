#pragma once
#include "AddEventForm.h"
#include "User.h"
#include "Event.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Summary for EventReminderCard
	/// </summary>
	public ref class EventReminderCard : public System::Windows::Forms::UserControl
	{
	public:

		EventReminderCard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}



		EventReminderCard(Event* event, User* user)
		{
			InitializeComponent();
			us = user;
			ev = event;


			System::String^ eventName = gcnew System::String(ev->getName().c_str());
			label2->Text = eventName;

			System::String^ placeName = gcnew System::String(ev->getPlace().c_str());
			label3->Text = placeName;

			System::String^ startDay = System::Convert::ToString(ev->getStartDate().getDay());

			std::vector<std::string> months = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };


			String^ startDate_hour;
			if (ev->getStartDate().getHour() < 9)
				startDate_hour = "0" + System::Convert::ToString(ev->getStartDate().getHour());
			else
				startDate_hour = System::Convert::ToString(ev->getStartDate().getHour());

			String^ startDate_minute;
			if (ev->getStartDate().getMinute() < 9)
				startDate_minute = "0" + System::Convert::ToString(ev->getStartDate().getMinute());
			else
				startDate_minute = System::Convert::ToString(ev->getStartDate().getMinute());

			System::String^ startDate = gcnew System::String(months[ev->getStartDate().getMonth() - 1].c_str()) + " " + System::Convert::ToString(ev->getStartDate().getDay())
				+ ", "
				+ System::Convert::ToString(ev->getStartDate().getYear()) + " " + startDate_hour + ":" + startDate_minute;
			label4->Text = startDate;


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
		~EventReminderCard()
		{
			if (components)
			{
				delete components;
			}
		}

	public:Event* ev;
	public:User* us;


	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EventReminderCard::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(60, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 22);
			this->label4->TabIndex = 12;
			this->label4->Text = L"May 10, 2022 09:00pm";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->label3->Location = System::Drawing::Point(60, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 23);
			this->label3->TabIndex = 14;
			this->label3->Text = L"ain shams university";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(114)),
				static_cast<System::Int32>(static_cast<System::Byte>(114)));
			this->label2->Location = System::Drawing::Point(86, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 24);
			this->label2->TabIndex = 13;
			this->label2->Text = L"acm event,";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Red;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(61, 35);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(20, 20);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// EventReminderCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"EventReminderCard";
			this->Size = System::Drawing::Size(304, 90);
			this->Load += gcnew System::EventHandler(this, &EventReminderCard::EventReminderCard_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EventReminderCard_Load(System::Object^ sender, System::EventArgs^ e) {




	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEventForm^ EditForm = gcnew AddEventForm;
		EditForm->ShowDialog();

	}
	};
}