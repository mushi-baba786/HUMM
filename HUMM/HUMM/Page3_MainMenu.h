#pragma once
#include"Page4_Products.h"
#include"Page5_Customer.h"
#include "Page6_Billing.h"

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Page3_MainMenu
	/// </summary>
	public ref class Page3_MainMenu : public System::Windows::Forms::Form
	{
	public:
		Form ^Obj;

		Page3_MainMenu(Form ^Obj1)
		{
			Obj = Obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Page3_MainMenu(void)
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
		~Page3_MainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ProductButton;
	private: System::Windows::Forms::Button^  CustomerButton;
	private: System::Windows::Forms::Button^  LogoutButton;
	protected:



	private: System::Windows::Forms::Button^  BillingButton;
	private: System::Windows::Forms::GroupBox^  groupBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Page3_MainMenu::typeid));
			this->ProductButton = (gcnew System::Windows::Forms::Button());
			this->CustomerButton = (gcnew System::Windows::Forms::Button());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->BillingButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ProductButton
			// 
			this->ProductButton->BackColor = System::Drawing::Color::DimGray;
			this->ProductButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ProductButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductButton->ForeColor = System::Drawing::Color::White;
			this->ProductButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ProductButton.Image")));
			this->ProductButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ProductButton->Location = System::Drawing::Point(53, 54);
			this->ProductButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->ProductButton->Name = L"ProductButton";
			this->ProductButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ProductButton->Size = System::Drawing::Size(271, 105);
			this->ProductButton->TabIndex = 0;
			this->ProductButton->Text = L"Products Management";
			this->ProductButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ProductButton->UseVisualStyleBackColor = false;
			this->ProductButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button1_Click);
			// 
			// CustomerButton
			// 
			this->CustomerButton->BackColor = System::Drawing::Color::DimGray;
			this->CustomerButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CustomerButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerButton->ForeColor = System::Drawing::Color::White;
			this->CustomerButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CustomerButton.Image")));
			this->CustomerButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->CustomerButton->Location = System::Drawing::Point(53, 173);
			this->CustomerButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->CustomerButton->Name = L"CustomerButton";
			this->CustomerButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CustomerButton->Size = System::Drawing::Size(271, 105);
			this->CustomerButton->TabIndex = 1;
			this->CustomerButton->Text = L"Customers\r\nDetails";
			this->CustomerButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CustomerButton->UseVisualStyleBackColor = false;
			this->CustomerButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button2_Click);
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::Color::DimGray;
			this->LogoutButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::Color::White;
			this->LogoutButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogoutButton.Image")));
			this->LogoutButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->LogoutButton->Location = System::Drawing::Point(53, 412);
			this->LogoutButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->LogoutButton->Size = System::Drawing::Size(271, 105);
			this->LogoutButton->TabIndex = 3;
			this->LogoutButton->Text = L"Log Out";
			this->LogoutButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LogoutButton->UseVisualStyleBackColor = false;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::button3_Click);
			// 
			// BillingButton
			// 
			this->BillingButton->BackColor = System::Drawing::Color::DimGray;
			this->BillingButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BillingButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BillingButton->ForeColor = System::Drawing::Color::White;
			this->BillingButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BillingButton.Image")));
			this->BillingButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->BillingButton->Location = System::Drawing::Point(53, 293);
			this->BillingButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->BillingButton->Name = L"BillingButton";
			this->BillingButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->BillingButton->Size = System::Drawing::Size(271, 105);
			this->BillingButton->TabIndex = 2;
			this->BillingButton->Text = L"Billing\r\nDashboard";
			this->BillingButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->BillingButton->UseVisualStyleBackColor = false;
			this->BillingButton->Click += gcnew System::EventHandler(this, &Page3_MainMenu::BillingButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->BillingButton);
			this->groupBox1->Controls->Add(this->LogoutButton);
			this->groupBox1->Controls->Add(this->ProductButton);
			this->groupBox1->Controls->Add(this->CustomerButton);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(385, 537);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Main Menu:";
			// 
			// Page3_MainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 38);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Mistral", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Coral;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->Name = L"Page3_MainMenu";
			this->Text = L"HS Inventory Controller";
			this->Load += gcnew System::EventHandler(this, &Page3_MainMenu::Page3_MainMenu_Load);
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Page3_MainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Obj->Show();
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Page4_Products^ P4 = gcnew Page4_Products(this);
	P4->Show();

}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Page5_Customer^ P5 = gcnew Page5_Customer(this);
	P5->Show();
}
private: System::Void BillingButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Page6_Billing^ P6 = gcnew Page6_Billing(this);
	P6->Show();

}
};
}
