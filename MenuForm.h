#pragma once
#include"FirstForm.h"
#include"SecondForm.h"
#include"AboutForm.h"
namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Noodle soup", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(66, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tic Tac Toe";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button1->Location = System::Drawing::Point(73, 92);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(231, 65);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Game against computer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Niagara Solid", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button2->Location = System::Drawing::Point(73, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(231, 62);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Game for two";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MenuForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Font = (gcnew System::Drawing::Font(L"MV Boli", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button3->Location = System::Drawing::Point(73, 231);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 32);
			this->button3->TabIndex = 3;
			this->button3->Text = L"About the game";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MenuForm::button3_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SlateBlue;
			this->ClientSize = System::Drawing::Size(378, 278);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" рестики-нолики";
			this->TopMost = true;
			this->DoubleClick += gcnew System::EventHandler(this, &MenuForm::color);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		FirstForm^ f1 = gcnew FirstForm;
		this->Hide();
		f1->ShowDialog();
		this->Show();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	SecondForm ^f2 = gcnew SecondForm;
	this->Hide();
	f2->ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	AboutForm ^f3 = gcnew AboutForm;
	this->Hide();
	f3->ShowDialog();
	this->Show();
}
private: System::Void color(System::Object^  sender, System::EventArgs^  e) {
	bool f = true;
	int rand = Random().Next(6);
	while (f)
	{
		if (rand == 0) {
			this->BackColor = this->BackColor.Coral;
			f = false;
		}
		else if (rand == 1)
		{
			this->BackColor = this->BackColor.LightSkyBlue;
			f = false;

		}
		else if (rand == 2)
		{
			this->BackColor = this->BackColor.MediumAquamarine;
			f = false;

		}
		else if (rand == 3)
		{
			this->BackColor = this->BackColor.Black;
			f = false;

		}
		else if (rand == 4)
		{
			this->BackColor = this->BackColor.SlateBlue;
			f = false;
		}
		else if (rand == 5)
		{
			this->BackColor = this->BackColor.DarkSeaGreen;
			f = false;
		}
		else
		{
			rand = Random().Next(6);
		}
	}
}
};
}
