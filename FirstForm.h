#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FirstForm
	/// </summary>
	public ref class FirstForm : public System::Windows::Forms::Form
	{
		bool f = true;
		bool res = false;
		int x = 0, n = 0, o = 0;
	public:
		FirstForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FirstForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn1;

	protected:


	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuText;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(266, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 32);
			this->button2->TabIndex = 54;
			this->button2->Text = L"Сбросить все";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &FirstForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(266, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 32);
			this->button1->TabIndex = 53;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FirstForm::button1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Sitka Text", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(85, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 23);
			this->label8->TabIndex = 52;
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(128, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 24);
			this->label7->TabIndex = 51;
			this->label7->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(90, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 24);
			this->label6->TabIndex = 50;
			this->label6->Text = L"N:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(192, 13);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 24);
			this->label5->TabIndex = 49;
			this->label5->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(192, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 24);
			this->label4->TabIndex = 48;
			this->label4->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(48, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 24);
			this->label3->TabIndex = 47;
			this->label3->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(162, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 24);
			this->label2->TabIndex = 46;
			this->label2->Text = L"O: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(15, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 24);
			this->label1->TabIndex = 45;
			this->label1->Text = L"X: ";
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::Transparent;
			this->btn9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn9->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn9->ForeColor = System::Drawing::Color::Snow;
			this->btn9->Location = System::Drawing::Point(147, 207);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(66, 67);
			this->btn9->TabIndex = 36;
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::Transparent;
			this->btn8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn8->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn8->ForeColor = System::Drawing::Color::Snow;
			this->btn8->Location = System::Drawing::Point(83, 207);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(66, 67);
			this->btn8->TabIndex = 37;
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::Transparent;
			this->btn7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn7->ForeColor = System::Drawing::Color::Snow;
			this->btn7->Location = System::Drawing::Point(19, 207);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(66, 67);
			this->btn7->TabIndex = 38;
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::Transparent;
			this->btn6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn6->ForeColor = System::Drawing::Color::Snow;
			this->btn6->Location = System::Drawing::Point(147, 143);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(66, 67);
			this->btn6->TabIndex = 39;
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::Transparent;
			this->btn3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn3->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn3->ForeColor = System::Drawing::Color::Snow;
			this->btn3->Location = System::Drawing::Point(147, 79);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(66, 67);
			this->btn3->TabIndex = 40;
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::Transparent;
			this->btn5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn5->ForeColor = System::Drawing::Color::Snow;
			this->btn5->Location = System::Drawing::Point(83, 143);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(66, 67);
			this->btn5->TabIndex = 41;
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::Transparent;
			this->btn2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::Color::Snow;
			this->btn2->Location = System::Drawing::Point(83, 79);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(66, 67);
			this->btn2->TabIndex = 42;
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::Transparent;
			this->btn4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36));
			this->btn4->ForeColor = System::Drawing::Color::Snow;
			this->btn4->Location = System::Drawing::Point(19, 143);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(66, 67);
			this->btn4->TabIndex = 43;
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::Transparent;
			this->btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::Color::Snow;
			this->btn1->Location = System::Drawing::Point(19, 79);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(66, 67);
			this->btn1->TabIndex = 44;
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &FirstForm::b_Click);
			// 
			// FirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Coral;
			this->ClientSize = System::Drawing::Size(386, 286);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FirstForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Игра против компьютера";
			this->DoubleClick += gcnew System::EventHandler(this, &FirstForm::color);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void b_Click(System::Object^  sender, System::EventArgs^  e) {
		Button^ s = safe_cast<Button^>(sender);
		s->Text = "x";
		s->Enabled = false;
		pc();
		res = result();
		if (res) {
			button1->Enabled = true;
			btn1->Enabled = false;
			btn2->Enabled = false;
			btn3->Enabled = false;
			btn4->Enabled = false;
			btn5->Enabled = false;
			btn6->Enabled = false;
			btn7->Enabled = false;
			btn8->Enabled = false;
			btn9->Enabled = false;
		}
	} 
			 //Функция проверяет есть ли выйгравший 
		bool result() {
		if (btn1->Text == "x" && btn2->Text == "x"&& btn3->Text == "x" || btn4->Text == "x" && btn5->Text == "x" && btn6->Text == "x" || btn7->Text == "x" && btn8->Text == "x"&& btn9->Text == "x") {
			x++;
			label8->Text = "X Win!";
			label3->Text = Convert::ToString(x);
			return true;
		}
		else if (btn1->Text == "x" && btn4->Text == "x"&& btn7->Text == "x" || btn2->Text == "x" && btn5->Text == "x" && btn8->Text == "x" || btn3->Text == "x" && btn6->Text == "x"&& btn9->Text == "x") {
			x++;
			label8->Text = "X Win!";
			label3->Text = Convert::ToString(x);
			return true;
		}
		else if (btn1->Text == "x" && btn5->Text == "x"&& btn9->Text == "x" || btn3->Text == "x" && btn5->Text == "x" && btn7->Text == "x") {
			x++;
			label8->Text = "X Win!";
			label3->Text = Convert::ToString(x);
			return true;
		}
		///////////////////////////////////

		else if (btn1->Text == "o" && btn2->Text == "o"&& btn3->Text == "o" || btn4->Text == "o" && btn5->Text == "o" && btn6->Text == "o" || btn7->Text == "o" && btn8->Text == "o"&& btn9->Text == "o") {
			o++;
			label8->Text = "O Win!";
			label5->Text = Convert::ToString(o);
			return true;
		}
		else if (btn1->Text == "o" && btn4->Text == "o"&& btn7->Text == "o" || btn2->Text == "o" && btn5->Text == "o" && btn8->Text == "o" || btn3->Text == "o" && btn6->Text == "o"&& btn9->Text == "o") {
			o++;
			label8->Text = "O Win!";
			label5->Text = Convert::ToString(o);
			return true;
		}
		else if (btn1->Text == "o" && btn5->Text == "o"&& btn9->Text == "o" || btn3->Text == "o" && btn5->Text == "o" && btn7->Text == "o") {
			o++;
			label8->Text = "O Win!";
			label5->Text = Convert::ToString(o);
			return true;
		}
		else if (btn1->Enabled == false && btn2->Enabled == false && btn3->Enabled == false && btn4->Enabled == false && btn5->Enabled == false && btn6->Enabled == false && btn7->Enabled == false && btn8->Enabled == false && btn9->Enabled == false) {
			n++;
			label8->Text = "Draw!";
			label7->Text = Convert::ToString(n);
			return true;
		}
		else {
			return false;
		}

	}
		//Функция сброса
	void again() {
		clear();
		f = true;
		res = false;
		x = 0, n = 0, o = 0;
		label3->Text = "0";
		label5->Text = "0";
		label7->Text = "0";
		label8->Text = "";
		btn1->Enabled = true;
		btn2->Enabled = true;
		btn3->Enabled = true;
		btn4->Enabled = true;
		btn5->Enabled = true;
		btn6->Enabled = true;
		btn7->Enabled = true;
		btn8->Enabled = true;
		btn9->Enabled = true;


	}
	//Функция очистки поля
	void clear() {
		btn1->Text = "";
		btn2->Text = "";
		btn3->Text = "";
		btn4->Text = "";
		btn5->Text = "";
		btn6->Text = "";
		btn7->Text = "";
		btn8->Text = "";
		btn9->Text = "";
	}

	//Функция кнопки продолжить
	void contin() {
		clear();
		f = true;
		res = false;
		label8->Text = "";
		btn1->Enabled = true;
		btn2->Enabled = true;
		btn3->Enabled = true;
		btn4->Enabled = true;
		btn5->Enabled = true;
		btn6->Enabled = true;
		btn7->Enabled = true;
		btn8->Enabled = true;
		btn9->Enabled = true;
	}

	//Ответ от Компьютера
	void pc() {
		int rand = Random().Next(10);
		bool check = true;
		while (check) {
			if (rand == 1 && btn1->Enabled != false) {
				btn1->Text = "o";
				btn1->Enabled = false;
				check = false;
			}
			else if (rand == 2 && btn2->Enabled != false) {
				btn2->Text = "o";
				btn2->Enabled = false;
				check = false;
			}
			else if (rand == 3 && btn3->Enabled != false) {
				btn3->Text = "o";
				btn3->Enabled = false;
				check = false;
			}
			else if (rand == 4 && btn4->Enabled != false) {
				btn4->Text = "o";
				btn4->Enabled = false;
				check = false;
			}
			else if (rand == 5 && btn5->Enabled != false) {
				btn5->Text = "o";
				btn5->Enabled = false;
				check = false;
			}
			else if (rand == 6 && btn6->Enabled != false) {
				btn6->Text = "o";
				btn6->Enabled = false;
				check = false;
			}
			else if (rand == 7 && btn7->Enabled != false) {
				btn7->Text = "o";
				btn7->Enabled = false;
				check = false;
			}
			else if (rand == 8 && btn8->Enabled != false) {
				btn8->Text = "o";
				btn8->Enabled = false;
				check = false;
			}
			else if (rand == 9 && btn9->Enabled != false) {
				btn9->Text = "o";
				btn9->Enabled = false;
				check = false;
			}
			else if (btn1->Enabled == false && btn2->Enabled == false && btn3->Enabled == false && btn4->Enabled == false && btn5->Enabled == false && btn6->Enabled == false && btn7->Enabled == false && btn8->Enabled == false && btn9->Enabled == false) {
				break;
			}
			else {
				rand = Random().Next(10);
			}
			
		}
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	contin();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	again();
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
