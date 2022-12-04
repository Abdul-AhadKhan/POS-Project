#pragma once

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bill
	/// </summary>
	public ref class Bill : public System::Windows::Forms::Form
	{
	public:
		Bill(void)
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
		~Bill()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ ProductName;

	private: System::Windows::Forms::Button^ backbutton;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ quantity;
	private: System::Windows::Forms::TextBox^ price;


	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ totalbill;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->ProductName = (gcnew System::Windows::Forms::TextBox());
			this->backbutton = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->quantity = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->totalbill = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DodgerBlue;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Mistral", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(310, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(682, 156);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"HASA Developers";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DodgerBlue;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(122, 278);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 34);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"Product Name: ";
			// 
			// ProductName
			// 
			this->ProductName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductName->Location = System::Drawing::Point(380, 273);
			this->ProductName->Name = L"ProductName";
			this->ProductName->Size = System::Drawing::Size(256, 41);
			this->ProductName->TabIndex = 7;
			// 
			// backbutton
			// 
			this->backbutton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->backbutton->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backbutton->Location = System::Drawing::Point(1036, 634);
			this->backbutton->Name = L"backbutton";
			this->backbutton->Size = System::Drawing::Size(129, 51);
			this->backbutton->TabIndex = 8;
			this->backbutton->Text = L"Back";
			this->backbutton->UseVisualStyleBackColor = false;
			this->backbutton->Click += gcnew System::EventHandler(this, &Bill::backbutton_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::DodgerBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(122, 349);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 34);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"Quantity:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::DodgerBlue;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(122, 429);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(205, 34);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"Price:\r\n";
			// 
			// quantity
			// 
			this->quantity->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantity->Location = System::Drawing::Point(380, 349);
			this->quantity->Name = L"quantity";
			this->quantity->Size = System::Drawing::Size(256, 41);
			this->quantity->TabIndex = 11;
			// 
			// price
			// 
			this->price->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->Location = System::Drawing::Point(380, 429);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(256, 41);
			this->price->TabIndex = 12;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::DodgerBlue;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(122, 510);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(205, 34);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"Total Bill:";
			// 
			// totalbill
			// 
			this->totalbill->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalbill->Location = System::Drawing::Point(380, 510);
			this->totalbill->Name = L"totalbill";
			this->totalbill->Size = System::Drawing::Size(256, 41);
			this->totalbill->TabIndex = 14;
			// 
			// Bill
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DodgerBlue;
			this->ClientSize = System::Drawing::Size(1247, 714);
			this->Controls->Add(this->totalbill);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->price);
			this->Controls->Add(this->quantity);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->backbutton);
			this->Controls->Add(this->ProductName);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Bill";
			this->Text = L"Bill";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void backbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
