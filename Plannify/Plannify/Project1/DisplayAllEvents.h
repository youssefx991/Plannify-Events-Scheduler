//#include <msclr/marshal_cppstd.h>
#include "Event.h"
#include "Date.h"

#include "EventAllData.h"
#include<string>
#include<vector>


#pragma once


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace  std;

	
	/// <summary>
	/// Summary for DisplayAllEvents
	/// </summary>
	public ref class DisplayAllEvents : public System::Windows::Forms::Form
	{
	public:
		DisplayAllEvents(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DisplayAllEvents(User* testuser)
		{
			InitializeComponent();
			user = testuser;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DisplayAllEvents()
		{
			if (components)
			{
				delete components;
			}
		}

	public: User* user;

	public: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DisplayAllEvents::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 128);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(844, 525);
			this->flowLayoutPanel1->TabIndex = 0;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DisplayAllEvents::flowLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(82, 29);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 52);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DisplayAllEvents::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(362, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 52);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DisplayAllEvents::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(362, 29);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 52);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(82, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 52);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DisplayAllEvents::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(844, 122);
			this->panel1->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(650, 29);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(95, 52);
			this->button5->TabIndex = 8;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DisplayAllEvents::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(650, 29);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(95, 52);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// DisplayAllEvents
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->ClientSize = System::Drawing::Size(844, 653);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(862, 700);
			this->MinimizeBox = false;
			this->Name = L"DisplayAllEvents";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DisplayAllEvents";
			this->Load += gcnew System::EventHandler(this, &DisplayAllEvents::DisplayAllEvents_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}

	//just when this form open do this 
	private: System::Void DisplayAllEvents_Load(System::Object^ sender, System::EventArgs^ e) {




		for (auto it = user->events.begin(); it != user->events.end(); it++)
		{
			EventAllData^ evt = gcnew EventAllData(&it->second, user,this->button4);

			flowLayoutPanel1->Controls->Add(evt);
		}		
	



		/*for (auto it=user->Reminder_events.begin();it!=user->Reminder_events.end();it++)
		{
			EventAllData^ evt = gcnew EventAllData(&it->second,user);

			flowLayoutPanel1->Controls->Add(evt);
		}		*/












		//vector<Event> Events;
//Date e1(2023 , 4,13,5,0);
//Date e2(2023, 5, 3, 5, 0);
//Date e3(2023, 1, 7, 5, 0);
//Event ee("acm", "ain shams", e1, e2, e3);
//Events.push_back(ee);
//
//Event ee2("data structure", "ain shams", e1, e2, e3);
//Events.push_back(ee2);
//
//Event ee3("AI", "ain shams", e1, e2, e3);
//Events.push_back(ee3);
//Events.push_back(ee2);
//
//Event ee4("OR", "ain shams", e1, e2, e3);
//Events.push_back(ee4);
//Events.push_back(ee4);
				
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		flowLayoutPanel1->Controls->Clear();
		for (auto it = user->events.begin(); it != user->events.end(); it++)
		{
			EventAllData^ evt = gcnew EventAllData(&it->second, user, this->button4);

			flowLayoutPanel1->Controls->Add(evt);
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	button3->BringToFront();
	button4->BringToFront();
	button5->BringToFront();


	flowLayoutPanel1->Controls->Clear();
	for (auto it = user->Reminder_events.begin(); it != user->Reminder_events.end(); it++)
	{
		EventAllData^ evt = gcnew EventAllData(&it->second, user ,this->button4);

		flowLayoutPanel1->Controls->Add(evt);
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->BringToFront();
	button1->BringToFront();
	button5->BringToFront();

	flowLayoutPanel1->Controls->Clear();

	for (auto it = user->events.begin(); it != user->events.end(); it++)
	{
		EventAllData^ evt = gcnew EventAllData(&it->second, user, this->button4);

		flowLayoutPanel1->Controls->Add(evt);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	button6->BringToFront();
	button2->BringToFront();
	button4->BringToFront();

	flowLayoutPanel1->Controls->Clear();
	stack<Event> tempstack;
	while (!user->done_events.empty()) {
		EventAllData^ evt = gcnew EventAllData(&user->done_events.top(), user,this->button4);
		flowLayoutPanel1->Controls->Add(evt);
		tempstack.push(user->done_events.top());
		user->done_events.pop();
	}
	while (!tempstack.empty()) {
		user->done_events.push(tempstack.top());
		tempstack.pop();
	}

}


};
}
