#pragma once

#include <cmath>

namespace Calculate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ labelBaseOfLogarithm1;

	private: System::Windows::Forms::Label^ labelSourceNumberLogarithm1;
	private: System::Windows::Forms::Label^ labelResultOfLogarithm1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ �;


	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->labelBaseOfLogarithm1 = (gcnew System::Windows::Forms::Label());
			this->labelSourceNumberLogarithm1 = (gcnew System::Windows::Forms::Label());
			this->labelResultOfLogarithm1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->� = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"�������� �����", L"��������", L"���������", L"���������",
					L"�������"
			});
			this->comboBox1->Location = System::Drawing::Point(50, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(155, 24);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged_1);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox1->Location = System::Drawing::Point(50, 121);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(593, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox2->Location = System::Drawing::Point(50, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(593, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->textBox3->Location = System::Drawing::Point(50, 267);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(593, 22);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// labelBaseOfLogarithm1
			// 
			this->labelBaseOfLogarithm1->AutoSize = true;
			this->labelBaseOfLogarithm1->Location = System::Drawing::Point(47, 100);
			this->labelBaseOfLogarithm1->Name = L"labelBaseOfLogarithm1";
			this->labelBaseOfLogarithm1->Size = System::Drawing::Size(262, 17);
			this->labelBaseOfLogarithm1->TabIndex = 4;
			this->labelBaseOfLogarithm1->Text = L"������ ����� / ��������� ���������\r\n";
			this->labelBaseOfLogarithm1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// labelSourceNumberLogarithm1
			// 
			this->labelSourceNumberLogarithm1->AutoSize = true;
			this->labelSourceNumberLogarithm1->Location = System::Drawing::Point(47, 172);
			this->labelSourceNumberLogarithm1->Name = L"labelSourceNumberLogarithm1";
			this->labelSourceNumberLogarithm1->Size = System::Drawing::Size(313, 17);
			this->labelSourceNumberLogarithm1->TabIndex = 5;
			this->labelSourceNumberLogarithm1->Text = L"������ ����� / �����, ���������� � �������";
			this->labelSourceNumberLogarithm1->Click += gcnew System::EventHandler(this, &MyForm::labelSourceNumberLogarithm1_Click);
			// 
			// labelResultOfLogarithm1
			// 
			this->labelResultOfLogarithm1->AutoSize = true;
			this->labelResultOfLogarithm1->Location = System::Drawing::Point(47, 247);
			this->labelResultOfLogarithm1->Name = L"labelResultOfLogarithm1";
			this->labelResultOfLogarithm1->Size = System::Drawing::Size(76, 17);
			this->labelResultOfLogarithm1->TabIndex = 6;
			this->labelResultOfLogarithm1->Text = L"���������\r\n";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Location = System::Drawing::Point(144, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 46);
			this->button1->TabIndex = 7;
			this->button1->Text = L"���������";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// �
			// 
			this->�->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->�->Location = System::Drawing::Point(406, 360);
			this->�->Name = L"�";
			this->�->Size = System::Drawing::Size(127, 46);
			this->�->TabIndex = 8;
			this->�->Text = L"��������";
			this->�->UseVisualStyleBackColor = false;
			this->�->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(693, 418);
			this->Controls->Add(this->�);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelResultOfLogarithm1);
			this->Controls->Add(this->labelSourceNumberLogarithm1);
			this->Controls->Add(this->labelBaseOfLogarithm1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"����������� ����������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void figure5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void figure4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void figure3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void figure2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void figure1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
		   bool checkInputTextBox1() {
			   if (textBox1->Text->Length == 0) {
				   return false;
			   }
			   for (int i = 0; i < textBox1->Text->Length; ++i) {
				   if ((textBox1->Text[i] >= '0' && textBox1->Text[i] <= '9') || textBox1->Text[i] == ',' || textBox1->Text[i] == '-') {}
				   else return false;
				   return true;
			   }
		   }

		   bool checkInputTextBox2() {
			   if (textBox2->Text->Length == 0) {
				   return false;
			   }
			   for (int i = 0; i < textBox2->Text->Length; ++i) {
				   if ((textBox2->Text[i] >= '0' && textBox2->Text[i] <= '9') || textBox2->Text[i] == ',' || textBox2->Text[i] == '-') {}
				   else return false;
				   return true;
			   }
		   }


	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkInputTextBox1() && checkInputTextBox2()) {
			if (comboBox1->SelectedItem == "�������� �����") {
				double base, number, result = 0;
				base = System::Convert::ToDouble(textBox1->Text);
				number = System::Convert::ToDouble(textBox2->Text);
				if (base > 0 && number > 0 && number != 1) {
					result = log(number) / log(base);
					textBox3->Text = System::Convert::ToString(result);
				}
				else if (base <= 0) {
					MessageBox::Show("��������� ������ ���� ������ 0\n������ ��������� �� ����������");
				}
				else if (number <= 0) {
					MessageBox::Show("������� ����� ������ ���� ������ 0\n������ ��������� �� ����������");
				}
				else if (number == 1) {
					MessageBox::Show("������� ����� ������ ���� �� ����� 1\n������ ��������� �� ����������");
				}

			}
			else if (comboBox1->SelectedItem == "��������") {
				double first, second, result = 0;
				first = System::Convert::ToDouble(textBox1->Text);
				second = System::Convert::ToDouble(textBox2->Text);
				result = first + second;
				textBox3->Text = System::Convert::ToString(result);
			}
			else if (comboBox1->SelectedItem == "���������") {
				double first, second, result = 0;
				first = System::Convert::ToDouble(textBox1->Text);
				second = System::Convert::ToDouble(textBox2->Text);
				result = first - second;
				textBox3->Text = System::Convert::ToString(result);
			}
			else if (comboBox1->SelectedItem == "���������") {
				double first, second, result = 0;
				first = System::Convert::ToDouble(textBox1->Text);
				second = System::Convert::ToDouble(textBox2->Text);
				result = first * second;
				textBox3->Text = System::Convert::ToString(result);
			}
			else if (comboBox1->SelectedItem == "�������") {
				double first, second, result = 0;
				first = System::Convert::ToDouble(textBox1->Text);
				second = System::Convert::ToDouble(textBox2->Text);
				if (second != 0) {
					result = first / second;
					textBox3->Text = System::Convert::ToString(result);
				}
				else {
					MessageBox::Show("������� �� ���� ����������");
				}
			}
		}
		else if (!checkInputTextBox1()) {
			MessageBox::Show("������ ������� ����� ������� �����������");
		}
		else if (!checkInputTextBox2()) {
			MessageBox::Show("������ ������� ����� ������� �����������");
		}
	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = ""; textBox2->Text = ""; textBox3->Text = "";
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == "�������� �����") {
			labelBaseOfLogarithm1->Text = L"��������� ���������";
		}
		else {
			labelBaseOfLogarithm1->Text = L"������ �����";
		}
	}
	private: System::Void labelSourceNumberLogarithm1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == "�������� �����") {
			labelSourceNumberLogarithm1->Text = L"�����, ���������� � �������";
		}
		else {
			labelSourceNumberLogarithm1->Text = L"������ �����";
		}
	}
	};
}
