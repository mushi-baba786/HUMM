#pragma once

namespace HUMM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Products_Update
	/// </summary>
	public ref class Products_Update : public System::Windows::Forms::Form
	{
	public:
		Form ^obj;
		Products_Update(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Products_Update(void)
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
		~Products_Update()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  UpdateButton;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  CancelButton;
	private: System::Windows::Forms::TextBox^  TB_NewProdPrice;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TB_NewProductName;
	private: System::Windows::Forms::Label^  label8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Products_Update::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->TB_NewProdPrice = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TB_NewProductName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Maroon;
			this->groupBox1->Controls->Add(this->TB_NewProdPrice);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->TB_NewProductName);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->UpdateButton);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->CancelButton);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(16, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(755, 535);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ADD DETAILS:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Products_Update::groupBox1_Enter);
			// 
			// TB_NewProdPrice
			// 
			this->TB_NewProdPrice->AcceptsReturn = true;
			this->TB_NewProdPrice->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TB_NewProdPrice->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NewProdPrice->ForeColor = System::Drawing::Color::Black;
			this->TB_NewProdPrice->Location = System::Drawing::Point(223, 309);
			this->TB_NewProdPrice->Name = L"TB_NewProdPrice";
			this->TB_NewProdPrice->Size = System::Drawing::Size(355, 31);
			this->TB_NewProdPrice->TabIndex = 66;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(75, 313);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 26);
			this->label3->TabIndex = 65;
			this->label3->Text = L"SELLING PRICE:";
			this->label3->Click += gcnew System::EventHandler(this, &Products_Update::label3_Click);
			// 
			// TB_NewProductName
			// 
			this->TB_NewProductName->AcceptsReturn = true;
			this->TB_NewProductName->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->TB_NewProductName->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TB_NewProductName->ForeColor = System::Drawing::Color::Black;
			this->TB_NewProductName->Location = System::Drawing::Point(223, 63);
			this->TB_NewProductName->Name = L"TB_NewProductName";
			this->TB_NewProductName->Size = System::Drawing::Size(355, 31);
			this->TB_NewProductName->TabIndex = 64;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(80, 68);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(127, 26);
			this->label8->TabIndex = 63;
			this->label8->Text = L"PRODUCT ID:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(139, 346);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 26);
			this->label7->TabIndex = 62;
			this->label7->Text = L"IMAGE:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->button2->Location = System::Drawing::Point(223, 447);
			this->button2->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button2->Size = System::Drawing::Size(355, 31);
			this->button2->TabIndex = 61;
			this->button2->Text = L"Upload Image";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// UpdateButton
			// 
			this->UpdateButton->BackColor = System::Drawing::Color::DimGray;
			this->UpdateButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->UpdateButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateButton->ForeColor = System::Drawing::Color::White;
			this->UpdateButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->UpdateButton->Location = System::Drawing::Point(456, 485);
			this->UpdateButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->UpdateButton->Size = System::Drawing::Size(122, 38);
			this->UpdateButton->TabIndex = 60;
			this->UpdateButton->Text = L"Update";
			this->UpdateButton->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::DimGray;
			this->pictureBox1->Location = System::Drawing::Point(223, 347);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(355, 99);
			this->pictureBox1->TabIndex = 59;
			this->pictureBox1->TabStop = false;
			// 
			// textBox4
			// 
			this->textBox4->AcceptsReturn = true;
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(223, 273);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(355, 31);
			this->textBox4->TabIndex = 58;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(98, 278);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 26);
			this->label6->TabIndex = 57;
			this->label6->Text = L"COST PRICE:";
			// 
			// textBox3
			// 
			this->textBox3->AcceptsReturn = true;
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(223, 236);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(355, 31);
			this->textBox3->TabIndex = 56;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(106, 239);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 26);
			this->label5->TabIndex = 55;
			this->label5->Text = L"QUANTITY:";
			// 
			// textBox2
			// 
			this->textBox2->AcceptsReturn = true;
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(223, 138);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(355, 93);
			this->textBox2->TabIndex = 54;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(74, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 26);
			this->label4->TabIndex = 53;
			this->label4->Text = L"DESCRIPTION:";
			// 
			// textBox1
			// 
			this->textBox1->AcceptsReturn = true;
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(223, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(355, 31);
			this->textBox1->TabIndex = 52;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(136, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 26);
			this->label2->TabIndex = 51;
			this->label2->Text = L"NAME:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(103, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 26);
			this->label1->TabIndex = 50;
			this->label1->Text = L"CATEGORY:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"TV", L"MOBILE", L"LAPTOPS", L"SPEAKERS", L"LIGHTS",
					L"I/O DEVICES"
			});
			this->comboBox1->Location = System::Drawing::Point(223, 25);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(355, 31);
			this->comboBox1->TabIndex = 49;
			// 
			// CancelButton
			// 
			this->CancelButton->BackColor = System::Drawing::Color::DimGray;
			this->CancelButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelButton->ForeColor = System::Drawing::Color::White;
			this->CancelButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CancelButton->Location = System::Drawing::Point(223, 485);
			this->CancelButton->Margin = System::Windows::Forms::Padding(7, 9, 7, 9);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->CancelButton->Size = System::Drawing::Size(122, 38);
			this->CancelButton->TabIndex = 48;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = false;
			// 
			// Products_Update
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Products_Update";
			this->Text = L"                                    ";
			this->Load += gcnew System::EventHandler(this, &Products_Update::Products_Update_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Products_Update_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	obj->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Hide();
	obj->Show();
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
