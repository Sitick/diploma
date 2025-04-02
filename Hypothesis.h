#include "Data.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string> 
#include <ios>
#include <istream>
#include <vector>
#include <msclr\marshal_cppstd.h>
#include < stdio.h >
#include <algorithm> // Для использования std::sort
#include <numeric> // Для использования std::accumulate
#pragma once



namespace VKR3 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Hypothesis
	/// </summary>
	public ref class Hypothesis : public System::Windows::Forms::Form
	{
	public:
		Hypothesis(void)
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
		~Hypothesis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label16;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(300, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(300, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Несмещенная оценка первого центрального момента";
			this->label1->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Несмещенная оценка второго центрального момента";
			this->label2->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 89);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(300, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 135);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(300, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(300, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Несмещенная оценка третьего центрального момента";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 181);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(300, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 158);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(300, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Несмещенная оценка четвертого центрального момента";
			this->label4->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(376, 135);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(300, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(376, 112);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(300, 20);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Смещенная оценка четвертого центрального момента";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(376, 89);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(300, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(375, 66);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(300, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Смещенная оценка третьего центрального момента";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(376, 43);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(300, 20);
			this->textBox7->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(376, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(300, 20);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Смещенная оценка второго центрального момента";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(748, 43);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(300, 20);
			this->textBox9->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->Location = System::Drawing::Point(748, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(300, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Смещенная оценка СКО";
			this->label9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(748, 89);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(300, 20);
			this->textBox10->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->Location = System::Drawing::Point(748, 66);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(300, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Дисперсия";
			this->label10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(12, 318);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(310, 20);
			this->textBox11->TabIndex = 21;
			// 
			// label11
			// 
			this->label11->Location = System::Drawing::Point(12, 295);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(310, 20);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Коэффициент асимметрии β1";
			this->label11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(12, 364);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(310, 20);
			this->textBox12->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->Location = System::Drawing::Point(12, 341);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(310, 20);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Коэффициент эксцесса β2";
			this->label12->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(12, 410);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(310, 20);
			this->textBox13->TabIndex = 25;
			// 
			// label13
			// 
			this->label13->Location = System::Drawing::Point(12, 387);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(310, 20);
			this->label13->TabIndex = 24;
			this->label13->Text = L"ЗР согласно системе кривых Пирсона";
			this->label13->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(373, 410);
			this->textBox14->Multiline = true;
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(310, 80);
			this->textBox14->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->Location = System::Drawing::Point(373, 387);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(310, 20);
			this->label14->TabIndex = 30;
			this->label14->Text = L"ЗР согласно топографической классификации";
			this->label14->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(373, 364);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(310, 20);
			this->textBox15->TabIndex = 29;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(373, 341);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(310, 20);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Коэффициент контрэксцесса x ";
			this->label15->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(373, 318);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(310, 20);
			this->textBox16->TabIndex = 27;
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(373, 295);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(310, 20);
			this->label16->TabIndex = 26;
			this->label16->Text = L"Энтропийный коэффициент κ";
			this->label16->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// Hypothesis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1116, 630);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Hypothesis";
			this->Text = L"Hypothesis";
			this->Load += gcnew System::EventHandler(this, &Hypothesis::Hypothesis_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		   

		std::vector<float> GetSortedArray(std::vector<float>* numbers) {
			// Создаем копию вектора
			std::vector<float> sortedNumbers(*numbers);

			// Сортируем копию вектора
			std::sort(sortedNumbers.begin(), sortedNumbers.end());

			return sortedNumbers;
		}

		// Находим среднее значение массива
		float CalculateMean(std::vector<float>* numbers) {
			if (numbers->empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			// Суммируем все элементы массива
			float sum = std::accumulate(numbers->begin(), numbers->end(), 0.0f);

			// Вычисляем среднее значение
			float mean = sum / numbers->size();

			return mean;
		}
	

		// Функция для вычисления несмещенной оценки первого центрального момента
		float CalculateM1(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float sumDifferences = 0.0f;

			for (float number : sortedArray) {
				float difference = number - mean;
				sumDifferences += difference;
			}

			
			float M1 = sumDifferences / (sortedArray.size());

			return M1;
		}

		// Функция для вычисления несмещенной оценки второго центрального момента
		float CalculateM2(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float sumDifferences = 0.0f;

			for (float number : sortedArray) {
				float difference = number - mean;
				sumDifferences += pow(difference, 2);
			}

			
			float M2 = sumDifferences / (sortedArray.size() );

			return M2;
		}

		// Функция для вычисления несмещенной оценки третьего центрального момента
		float CalculateM3(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float sumDifferences = 0.0f;

			for (float number : sortedArray) {
				float difference = number - mean;
				sumDifferences += pow(difference, 3);
			}

			
			float M3 = sumDifferences / (sortedArray.size());

			return M3;
		}

		// Функция для вычисления несмещенной оценки четвертого центрального момента
		float CalculateM4(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float sumDifferences = 0.0f;

			for (float number : sortedArray) {
				float difference = number - mean;
				sumDifferences += pow(difference, 4);
			}

			
			float M4 = sumDifferences / (sortedArray.size());

			return M4;
		}

		
		// Функция для вычисления смещенной оценки второго центрального момента
		float CalculateU2(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float m1 = CalculateM1(sortedArray, mean);
			float m2 = CalculateM2(sortedArray, mean);

			float U2 = m2 - pow(m1, 2);

			return U2;
		}

		// Функция для вычисления смещенной оценки третьего центрального момента
		float CalculateU3(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float m1 = CalculateM1(sortedArray, mean);
			float m2 = CalculateM2(sortedArray, mean);
			float m3 = CalculateM3(sortedArray, mean);
			
			float U3 = m3 - 3 * m1 * m2 + 2 * pow(m1, 3);

			return U3;
		}

		// Функция для вычисления смещенной оценки четвертого центрального момента
		float CalculateU4(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float m1 = CalculateM1(sortedArray, mean);
			float m2 = CalculateM2(sortedArray, mean);
			float m3 = CalculateM3(sortedArray, mean);
			float m4 = CalculateM4(sortedArray, mean);

			float U4 = m4 - 4 * m1 * m3 + 6 * pow(m1, 2) * m2 - 3 * pow(m1, 4);;

			return U4;
		}

		// Функция для вычисления дисперсии массива
		float CalculateVariance(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float sumOfSquaredDifferences = 0.0f;

			for (float number : sortedArray) {
				float difference = number - mean;
				sumOfSquaredDifferences += pow(difference, 2);
			}

			
			float variance = sumOfSquaredDifferences / (sortedArray.size() - 1);

			return variance;
		}

		// Функция для вычисления СКО
		float CalculateStandardDeviation(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float Variance = CalculateVariance(sortedArray, mean);

			float Deviation = sqrt(Variance);

			return Deviation;
		}
		// Функция для вычисления B1
		float CalculateB1(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}

			float u2 = CalculateU2(sortedArray, mean);
			float u3 = CalculateU3(sortedArray, mean);

			float B1 = u3 / pow(u2, 1.5);

			return B1;
		}
		// Функция для вычисления B2
		float CalculateB2(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}
			float u2 = CalculateU2(sortedArray, mean);
			float u4 = CalculateU4(sortedArray, mean);

			float B2 = u4 / pow(u2, 2);

			return B2;
		}
		// Функция для вычисления K
		float CalculateK(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}
			float min = *std::min_element(sortedArray.begin(), sortedArray.end());
			float max = *std::max_element(sortedArray.begin(), sortedArray.end());
			
			float h = max - min;
			float n = sortedArray.size();
			float s = CalculateStandardDeviation(sortedArray, mean);
			
			int k = static_cast<int>(ceil(1 + 3.322 * log10(SharedData::numbers->size())));

			std::vector<SharedData::Interval> intervalsData = SharedData::countElementsInIntervals(SharedData::numbers, k);
		
			float sumArray = 0.0f;

			//double sum = 0.0;
			for (size_t i = 0; i < intervalsData.size(); ++i) {
				int count = intervalsData[i].count;
				if (count > 0) {
					sumArray += count * std::log10(count);
				}
			}

			/*for (float number : sortedArray) {
				float Array = number;
				float LgArray = log10(number);
				sumArray += Array* LgArray;
			}*/

			float step = -(sumArray)/(n);

			float K = ((h/k)*n) / (2*s) * pow(10, step);

			return K;
		}

		// Функция для вычисления X
		float CalculateX(const std::vector<float>& sortedArray, float mean) {
			if (sortedArray.empty()) {
				return 0.0f; // Возвращаем 0, если массив пустой
			}
			float B2 = CalculateB2(sortedArray, mean);
			
			float X = 1 / sqrt(B2);

			return X;
		}


		String^ SKP(const std::vector<float>& sortedArray, float mean) {
			
			float b1 = CalculateB1(sortedArray, mean);
			float b2 = CalculateB2(sortedArray, mean);

			String^ Ans ;
				// Предположение о виде закона распределения согласно системе кривых Пирсона

				if (b1 >= 0 && b1 <= 4 && b2 >= 0 && b2 <= 0.975 * b1 + 1)
				{
					Ans ="Критическая область";
				}
				else if (b1 >= 0 && b1 <= 2.25 && b2 > 0.975 * b1 + 1 && b2 <= 0.975 * b1 + 1.85)
				{
					Ans = "Равномерное распределение";
				}
				else if (b1 >= 2.25 && b1 <= 4 && b2 > 0.975 * b1 + 1 && b2 <= 0.975 * b1 + 1.85)
				{
					Ans = "U-образное β-распределение";
				}
				else if (b1 > 0 && b1 <= 4 && b2 > 0.975 * b1 + 1.85 && b2 <= 7 / 3.75 * b1 + 1.85)
				{
					Ans = "J-образное β-распределение";
				}
				else if (b1 >= 0 && b1 <= 0.8 && b2 > 7 / 3.75 * b1 + 1.85 &&  b2 <= b1 * (9.317 - 3) / 4 + 3)
				{
					Ans = "Нормальное распределение";
				}
				else if (b1 > 0.8 && b1 <= 1.75 && b2 > 7 / 3.75 * b1 + 1.85 && b2 <= b1 * (9.317 - 3) / 4 + 3)
				{
					Ans = "β-распределение";
				}
				else if (b1 > 1.75 && b1 < 4 && b2 > 7 / 3.75 * b1 + 1.85 && b2 <= b1 * (9.317 - 3) / 4 + 3)
				{
					Ans = "γ-распределение";
				}
				else if (b1 > 0 && b1 <= 2.76 && b2 > b1 * (9.317 - 3) / 4 + 3 && b2 <= 7 * b1 / 3.75 + 3)
				{
					Ans = "Логнормальное распределение";
				}
				else if ((b1 > 2.76 && b1 <= 3.75 && b2 > b1 * (9.317 - 3) / 4 + 3 && b2 <= 7 * b1 / 3.75 + 3)
					|| (b1 > 3.75 && b1 <= 4 && b2 > b1 * (9.317 - 3) / 4 + 3 && b1 <= 10))
				{
					Ans = "Экспоненциальное распределение";
				}
				else if (b1 >= 0 && b1 <= 3.75 && b2 > 7 * b1 / 3.75 + 3 && b2 <= 10)
				{
					Ans = "t-распределение";
				}
				else
				{
					Ans = "Неизвестен";
		
				}
				return Ans;
		}


		String^ TKN(const std::vector<float>& sortedArray, float mean) {

			float k = CalculateK(sortedArray, mean);
			float x = CalculateX(sortedArray, mean);

			String^ Ans;
			// Предположение о виде закона распределения согласно топографической классификации Новицкого

			if (x >= 0.48 && x <= 0.68 && k > 1.97 && k <= 2.17)
			{
				Ans += "Нормальное распределение\r\n";
			}
			if ((k >= 0 && k <= 2 && x >= 0 && x <= 0.1)
				|| (k >= 1.8 && k <= 2.2 && x >= 0 && x <= 0.6))
			{
				Ans += "t-распределение\r\n";
			}
			if (x >= 0.31 && x <= 0.41 && k > 1.7 && k <= 2)
			{
				Ans += "Распределение Лалпасса\r\n";
			}
			if (x >= 0.69 && x <= 0.79 && k > 1.62 && k <= 1.82)
			{
				Ans += "Равноверное распределение\r\n";
			}
			if (x >= 0.59 && x < 0.69 && k > 1.9 && x <= 2.1)
			{
				Ans += "Треугольное распределение\r\n";
			}
			if (x > 0.64 && x <= 0.79 && k >= -7.35 * std::pow(x, 2) + 8 * x - 0.3 && k <= -7.35 * std::pow(x, 2) + 7.3 * x + 0.5)
			{
				Ans += "Трапецеидальное распределение\r\n";
			}
			if (x >= 0.78 && x <= 0.87 && k > 1.06 && k <= 1.16)
			{
				Ans += "Арксинусное распределение\r\n";
			}
			if (x >= 0 && x <= 0.8 && k >= -7.35 * std::pow(x, 2) + 8 * x - 0.3 && k <= -7.35 * std::pow(x, 2) + 7.3 * x + 0.5)
			{
				Ans += "Экспоненциальное распределение\r\n";
			}
			if (Ans == "")
			{
				Ans = "Неизвестен";

			}
			return Ans;
		}



		
		

private: System::Void Hypothesis_Load(System::Object^ sender, System::EventArgs^ e) 
{	
	std::vector<float> sortedNumbers = GetSortedArray(SharedData::numbers);
	float mean = CalculateMean(SharedData::numbers);
	textBox1->Text = CalculateM1(sortedNumbers, mean).ToString();
	textBox2->Text = CalculateM2(sortedNumbers, mean).ToString();
	textBox3->Text = CalculateM3(sortedNumbers, mean).ToString();
	textBox4->Text = CalculateM4(sortedNumbers, mean).ToString();
	textBox7->Text = CalculateU2(sortedNumbers, mean).ToString();
	textBox6->Text = CalculateU3(sortedNumbers, mean).ToString();
	textBox5->Text = CalculateU4(sortedNumbers, mean).ToString();
	textBox10->Text = CalculateVariance(sortedNumbers, mean).ToString();
	textBox9->Text = CalculateStandardDeviation(sortedNumbers, mean).ToString();
	textBox11->Text = CalculateB1(sortedNumbers, mean).ToString();
	textBox12->Text = CalculateB2(sortedNumbers, mean).ToString();
	
	textBox15->Text = CalculateX(sortedNumbers, mean).ToString();
	textBox16->Text = CalculateK(sortedNumbers, mean).ToString();


	textBox13->Text = SKP(sortedNumbers, mean);
	textBox14->Text = TKN(sortedNumbers, mean);

}
};
}
