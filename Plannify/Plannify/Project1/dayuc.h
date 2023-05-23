#pragma once
#include <string>
#include <iostream>


//#include "MyForm.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;




namespace Project1 {

	/// <summary>
	/// Summary for dayuc
	/// </summary>
	public ref class dayuc : public System::Windows::Forms::UserControl
	{
	public:
		dayuc(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		/// <summary>
		/// varilables
		/// </summary>

	private: Label^ thelabel;

		   int year, month;
		   bool checkBorder;

	private: System::Windows::Forms::Panel^ panel1;

		   bool check;

		   /// <summary>
		   /// Empty day
		   /// </summary>

	public:
		dayuc(int x)
		{
			InitializeComponent();
			label1->Text = System::Convert::ToString(x);
			label1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			check = false;

		}

		/// <summary>
		/// Valid Day
		/// </summary>

	public:
		dayuc(int x, Label^ thelabel, int year, int month)
		{
			InitializeComponent();
			label1->Text = System::Convert::ToString(x);
			this->thelabel = thelabel;
			this->year = year;
			this->month = month;
			check = true;






			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dayuc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dayuc::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->label1->Location = System::Drawing::Point(18, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &dayuc::label1_Click);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &dayuc::panel1_MouseLeave);

			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(241)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(241)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(70, 60);
			this->panel1->TabIndex = 1;
			this->panel1->Click += gcnew System::EventHandler(this, &dayuc::label1_Click);
			this->panel1->Leave += gcnew System::EventHandler(this, &dayuc::panel1_Leave);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &dayuc::panel1_MouseLeave);
		
			// 
			// dayuc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Controls->Add(this->panel1);
			this->Name = L"dayuc";
			this->Size = System::Drawing::Size(70, 60);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	public:
		void nowday()
		{
			panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
		}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
		if (checkBorder == false)
		{
			if (check)
				thelabel->Text = label1->Text + "/" + (month + 1) + "/" + year;

			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			checkBorder = true;
		}
		else
		{
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			checkBorder = false;
		}
	}
	
private: System::Void panel1_Leave(System::Object^ sender, System::EventArgs^ e) {


	this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::None;
	checkBorder = false;

}
private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::None;
	checkBorder = false;

}
//private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
//	this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::None;
//	checkBorder = false;
//
//}
};
}
