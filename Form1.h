#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
//#include <msclr\marshal_cppstd.h>
#include <numeric>
#include <algorithm>


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_add;
	protected:
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btn_edit;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_surname;
	private: System::Windows::Forms::TextBox^ textBox_grades;
	private: System::Windows::Forms::TextBox^ textBox_exam;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_calculate;


	private: System::Windows::Forms::DataGridView^ dataGridView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vardas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pavardė;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pažymiai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Egzamino_įvertis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vidurkis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Mediana;
	private: System::Windows::Forms::Button^ btn_file;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_file;








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
			this->btn_add = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_edit = (gcnew System::Windows::Forms::Button());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_surname = (gcnew System::Windows::Forms::TextBox());
			this->textBox_grades = (gcnew System::Windows::Forms::TextBox());
			this->textBox_exam = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_calculate = (gcnew System::Windows::Forms::Button());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Vardas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pavardė = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pažymiai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Egzamino_įvertis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vidurkis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Mediana = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_file = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_file = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_add
			// 
			this->btn_add->Location = System::Drawing::Point(414, 475);
			this->btn_add->Name = L"btn_add";
			this->btn_add->Size = System::Drawing::Size(107, 32);
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = L"Pridėti";
			this->btn_add->UseVisualStyleBackColor = true;
			this->btn_add->Click += gcnew System::EventHandler(this, &Form1::btn_add_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(23, 475);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(118, 32);
			this->btn_delete->TabIndex = 1;
			this->btn_delete->Text = L"Ištrinti";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &Form1::btn_delete_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 348);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Vardas";
			// 
			// btn_edit
			// 
			this->btn_edit->Location = System::Drawing::Point(159, 475);
			this->btn_edit->Name = L"btn_edit";
			this->btn_edit->Size = System::Drawing::Size(107, 32);
			this->btn_edit->TabIndex = 4;
			this->btn_edit->Text = L"Redaguoti";
			this->btn_edit->UseVisualStyleBackColor = true;
			this->btn_edit->Click += gcnew System::EventHandler(this, &Form1::btn_edit_Click);
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(403, 346);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(118, 22);
			this->textBox_name->TabIndex = 5;
			// 
			// textBox_surname
			// 
			this->textBox_surname->Location = System::Drawing::Point(403, 374);
			this->textBox_surname->Name = L"textBox_surname";
			this->textBox_surname->Size = System::Drawing::Size(118, 22);
			this->textBox_surname->TabIndex = 6;
			// 
			// textBox_grades
			// 
			this->textBox_grades->Location = System::Drawing::Point(403, 402);
			this->textBox_grades->Name = L"textBox_grades";
			this->textBox_grades->Size = System::Drawing::Size(118, 22);
			this->textBox_grades->TabIndex = 7;
			// 
			// textBox_exam
			// 
			this->textBox_exam->Location = System::Drawing::Point(403, 430);
			this->textBox_exam->Name = L"textBox_exam";
			this->textBox_exam->Size = System::Drawing::Size(118, 22);
			this->textBox_exam->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 376);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Pavardė";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 404);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Pažymiai";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 432);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Egzamino įvertis";
			// 
			// btn_calculate
			// 
			this->btn_calculate->Location = System::Drawing::Point(288, 475);
			this->btn_calculate->Name = L"btn_calculate";
			this->btn_calculate->Size = System::Drawing::Size(107, 32);
			this->btn_calculate->TabIndex = 12;
			this->btn_calculate->Text = L"Apskaičiuoti";
			this->btn_calculate->UseVisualStyleBackColor = true;
			this->btn_calculate->Click += gcnew System::EventHandler(this, &Form1::btn_calculate_Click);
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Vardas,
					this->Pavardė, this->Pažymiai, this->Egzamino_įvertis, this->Vidurkis, this->Mediana
			});
			this->dataGridView->Location = System::Drawing::Point(29, 22);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(1039, 308);
			this->dataGridView->TabIndex = 15;
			this->dataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView_CellContentClick);
			// 
			// Vardas
			// 
			this->Vardas->HeaderText = L"Vardas";
			this->Vardas->MinimumWidth = 6;
			this->Vardas->Name = L"Vardas";
			this->Vardas->Width = 125;
			// 
			// Pavardė
			// 
			this->Pavardė->HeaderText = L"Pavardė";
			this->Pavardė->MinimumWidth = 6;
			this->Pavardė->Name = L"Pavardė";
			this->Pavardė->Width = 125;
			// 
			// Pažymiai
			// 
			this->Pažymiai->HeaderText = L"Pažymiai";
			this->Pažymiai->MinimumWidth = 6;
			this->Pažymiai->Name = L"Pažymiai";
			this->Pažymiai->Width = 125;
			// 
			// Egzamino_įvertis
			// 
			this->Egzamino_įvertis->HeaderText = L"Egzamino_įvertis";
			this->Egzamino_įvertis->MinimumWidth = 6;
			this->Egzamino_įvertis->Name = L"Egzamino_įvertis";
			this->Egzamino_įvertis->Width = 125;
			// 
			// Vidurkis
			// 
			this->Vidurkis->HeaderText = L"Vidurkis";
			this->Vidurkis->MinimumWidth = 6;
			this->Vidurkis->Name = L"Vidurkis";
			this->Vidurkis->Width = 125;
			// 
			// Mediana
			// 
			this->Mediana->HeaderText = L"Mediana";
			this->Mediana->MinimumWidth = 6;
			this->Mediana->Name = L"Mediana";
			this->Mediana->Width = 125;
			// 
			// btn_file
			// 
			this->btn_file->Location = System::Drawing::Point(543, 348);
			this->btn_file->Name = L"btn_file";
			this->btn_file->Size = System::Drawing::Size(525, 104);
			this->btn_file->TabIndex = 16;
			this->btn_file->Text = L"Atidaryti failą";
			this->btn_file->UseVisualStyleBackColor = true;
			this->btn_file->Click += gcnew System::EventHandler(this, &Form1::btn_file_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(539, 480);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 20);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Failo kelias:";
			// 
			// label_file
			// 
			this->label_file->AutoSize = true;
			this->label_file->Location = System::Drawing::Point(643, 484);
			this->label_file->Name = L"label_file";
			this->label_file->Size = System::Drawing::Size(0, 16);
			this->label_file->TabIndex = 18;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1112, 530);
			this->Controls->Add(this->label_file);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btn_file);
			this->Controls->Add(this->dataGridView);
			this->Controls->Add(this->btn_calculate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_exam);
			this->Controls->Add(this->textBox_grades);
			this->Controls->Add(this->textBox_surname);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->btn_edit);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_add);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_add_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = "";
		System::String^ surname = "";
		System::String^ grades = "";
		System::String^ exam = "";
		name = textBox_name->Text;
		surname = textBox_surname->Text;
		grades = textBox_grades->Text;
		exam = textBox_exam->Text;

		dataGridView->Rows->Add(name,surname,grades,exam);

		textBox_name->Text = "";
		textBox_surname->Text = "";
		textBox_grades->Text = "";
		textBox_exam->Text = "";
	}
	private: System::Void listBox_stud_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		/*if (listBox_stud->SelectedItem != nullptr)
		{
			System::String^ stringToSplit = "";
			System::String^ splitName = "";
			System::String^ splitSurname = "";
			System::String^ splitGrades = "";
			System::String^ splitExam = "";

			stringToSplit = listBox_stud->SelectedItem->ToString();
			splitName = stringToSplit->Split(' ')[0];
			splitSurname = stringToSplit->Split(' ')[1];
			splitGrades = stringToSplit->Split(' ')[2];
			splitExam = stringToSplit->Split(' ')[3];

			textBox_name->Text = splitName;
			textBox_surname->Text = splitSurname;
			textBox_grades->Text = splitGrades;
			textBox_exam->Text = splitExam;
		}*/
	}
	private: System::Void btn_edit_Click(System::Object^ sender, System::EventArgs^ e) {
		//System::String^ name = "";
		//System::String^ surname = "";
		//System::String^ grades = "";
		//System::String^ exam = "";
		//name = textBox_name->Text;
		//surname = textBox_surname->Text;
		//grades = textBox_grades->Text;
		//exam = textBox_exam->Text;
		//System::String^ full = name + " " + surname + " " + grades + " " + exam;

		//listBox_stud->Items->Add(full);
		//listBox_stud->Items->Remove(listBox_stud->SelectedItem);


		//textBox_name->Text = "";
		//textBox_surname->Text = "";
		//textBox_grades->Text = "";
		//textBox_exam->Text = "";
	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < dataGridView->RowCount; i++) {
			if (dataGridView->Rows[i]->Selected) {
				dataGridView->Rows->RemoveAt(i);
			}
		}
	}
	private: System::Void btn_calculate_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string vidurkis = "";
		float number;

		int rowCount = dataGridView->RowCount;
		for (int i = 0; i < rowCount-1; i++) {
			char cStr[50] = { 0 };
			String^ clrString = dataGridView->Rows[i]->Cells[2]->Value->ToString();
			sprintf(cStr, "%s", clrString);
			std::string stlString(cStr);

			vidurkis = stlString;
			std::stringstream iss(vidurkis);
			std::vector<float> myNumbers;
			while (iss >> number)
				myNumbers.push_back(number);

			float average = 0.0;

			for (int i = 0; i < myNumbers.size(); i++) {
				average += myNumbers[i];
			}
			dataGridView->Rows[i]->Cells[4]->Value = average/myNumbers.size();

			sort(myNumbers.begin(), myNumbers.end());
			float mediana = 0;
			if (myNumbers.size() % 2 == 0) {
				mediana = (myNumbers[myNumbers.size() / 2] + myNumbers[myNumbers.size() / 2 - 1]) / 2;
			}
			else {
				mediana = myNumbers[(myNumbers.size() - 1) / 2];
			}
			dataGridView->Rows[i]->Cells[5]->Value = mediana.ToString();
		}
	}
private: System::Void dataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	

	}
private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_file_Click(System::Object^ sender, System::EventArgs^ e) {
		using namespace System::IO;

		
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;


		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ strfilename = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

				StreamReader^ dataFile = File::OpenText(openFileDialog1->FileName);

				label_file->Text = strfilename;

				std::string number;
				char cStr[200] = { 0 };
				String^ clrString;
				std::string naujas;
				std::vector<std::string> myNumbers;

				clrString = dataFile->ReadLine();
				sprintf(cStr, "%s", clrString);
				std::string stlString(cStr);

				naujas = stlString;


				std::stringstream iss(naujas);
				while (iss >> number)
					myNumbers.push_back(number);


				std::string name = "";
				std::string surname = "";
				std::string grades = "";
				std::string exam = "";

				std::string niekas = "";

				for (int i = 0; i < 1000; i++) {

					std::string number;
					char cStr[200] = { 0 };
					String^ clrString;
					std::string naujas;
					std::vector<std::string> myNumbers;

					clrString = dataFile->ReadLine();
					sprintf(cStr, "%s", clrString);
					std::string stlString(cStr);

					naujas = stlString;


					std::stringstream iss(naujas);
					while (iss >> number)
						myNumbers.push_back(number);


					name = myNumbers[0];
					surname = myNumbers[1];

					for (int j = 2; j < myNumbers.size() - 1; j++) {
						niekas = myNumbers[j];
						grades = grades + " " + niekas;
					}

					exam = myNumbers[myNumbers.size()-1];

					String^ name2 = gcnew String(name.c_str());
					String^ surname2 = gcnew String(surname.c_str());
					String^ grades2 = gcnew String(grades.c_str());
					String^ exam2 = gcnew String(exam.c_str());

					dataGridView->Rows->Add(name2, surname2, grades2, exam2);

					grades.erase();
				}





		}




	}
};
}
