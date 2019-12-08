#pragma once
//#include "function.h"
#include <random>
#include<iostream>
#include <cmath>
#include <math.h>
#include<time.h>

namespace ysa1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;


	int sizec1 = 0;// dizi boyutlari
	int sizec2 = 0;
	int sizec3 =0;
	int sizec4 = 0;
	int sizec5 = 0;
	int sizec6 = 0;
	int sizec7 = 0;

	float* class1 = new float[sizec1];//diziler
	float* class2 = new float[sizec2];
	float* class3 = new float[sizec3];
	float* class4 = new float[sizec4];
	float* class5 = new float[sizec5];
	float* class6 = new float[sizec6];
	float* class7 = new float[sizec7];

	int* randomDogru = new int[4];// dogrunun  noktalari
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Graphics ^ g;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::CheckBox^  checkBox3;







	public:
		Pen ^ pen;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		Pen^ pen1;
		Pen^pen2;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  operationToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->operationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->operationToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(827, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// operationToolStripMenuItem
			// 
			this->operationToolStripMenuItem->Name = L"operationToolStripMenuItem";
			this->operationToolStripMenuItem->Size = System::Drawing::Size(88, 24);
			this->operationToolStripMenuItem->Text = L"Operation";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(16, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(530, 490);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			//this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(283, 33);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(4, 490);
			this->label1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(16, 276);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(530, 4);
			this->label2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(587, 125);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Random Line";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(587, 161);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(587, 271);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Hesapla";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(587, 62);
			this->checkBox2->Margin = System::Windows::Forms::Padding(4);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(98, 21);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(587, 33);
			this->checkBox1->Margin = System::Windows::Forms::Padding(4);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 21);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(587, 317);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Delta Hesapla";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(587, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"normalize";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(587, 220);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Multi Random";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(587, 359);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 23);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Multi Hesapla";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(587, 91);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(98, 21);
			this->checkBox3->TabIndex = 14;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 522);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		//int x = System::Convert::ToInt32(e->X);
		//int y = System::Convert::ToInt32(e->Y);

		int x = (e->X);
		int y =  (e->Y);
		g = pictureBox1->CreateGraphics();
	
		

		//g = pictureBox1->CreateGraphics();


		if (checkBox1->Checked) {
			class1[sizec1] =x - 200;
			class1[sizec1 + 1] = 200 - y;
			class3[sizec3] = x - 200;
			class3[sizec3 + 1] = 200 - y;
			class3[sizec3 + 2] = -1;

			//class1[sizec1 + 2] = -1;
			sizec1 += 2;
			sizec3 += 3;
			pen = gcnew Pen(Color::Red, 2);
			g->DrawLine(pen, x - 5, y, x + 5, y);
			g->DrawLine(pen, x, y - 5, x, y + 5);

		}
		else if (checkBox2->Checked) {
			class2[sizec2] = x - 200;
			class2[sizec2 + 1] = 200 - y;
			class4[sizec4] = x - 200;
			class4[sizec4 + 1] = 200 - y;
			class4[sizec4 + 2] = -1;
			//class2[sizec2 + 2] = -1;
			sizec2 += 2;
			sizec4 += 3;
			pen = gcnew Pen(Color::Blue, 2);
			g->DrawLine(pen, x - 5, y, x + 5, y);
			g->DrawLine(pen, x, y - 5, x, y + 5);
		}
		else if (checkBox3->Checked) {
			class5[sizec5] = x - 200;
			class5[sizec5 + 1] = 200 - y;
			sizec5 += 2;
			pen = gcnew Pen(Color::Green, 2);
			g->DrawLine(pen, x - 5, y, x + 5, y);
			g->DrawLine(pen, x, y - 5, x, y + 5);
		}
			   
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		pen = gcnew Pen(Color::Black, 2);
		g = pictureBox1->CreateGraphics();
		srand(time(NULL));//random dogrunun farkli atamasýný saglar.
		float x1 = rand() % 50;
		float x2 = rand() % 50;
		float y1 = rand() % 50;
		float y2 = rand() % 50;
		randomDogru[0] = x1;
		randomDogru[1] = y1;
		randomDogru[2] = x2;
		randomDogru[3] = y2;
		//float egim;
		x1=x1 + 200;
		x2=x2 + 200;
		y1 = 200-y1;
		y2 = 200-y2;
		//egim = (y2 - y1) / (x2 - x1);
		/*if (x2 < x1)
		{
			if (y2 < y1)
			{
				y1 = (400 - x2)*egim + y2;
				x1 = 400;
				y2 = (200 + x1)*egim + y1;
				x2 = 0;

				
			}
			else
			{
				y2 = (200+x1)*egim+y1;
				x2 = 400;

			}
			
		}
		else
		{
			y2 = (400 - x1)*egim + y1;
			x2 = 400;
		}*/
		
		

		double a = randomDogru[3] - randomDogru[1];
		double b = -randomDogru[2] - randomDogru[0];
		double c = b * randomDogru[3] - a * randomDogru[2];


		x1 = 0;
		y1 = (((x1 - 400 / 2) * a / b) + (c / b) + 400 / 2);//random dogrunun cizilmesi
		x2 = (400 + 1);
		y2 = ((x2 - 400 / 2) * a / b + (c / b) + 400 / 2);
		g->DrawLine(pen, x1, y1, x2, y2);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		double net1;
		double net2;
		double* agirlik = new double[3];//agirlik dizisi 


		double xinKatsayisi = randomDogru[3] - randomDogru[1];
		double yinKatsayisi = -randomDogru[2] - randomDogru[0];
		double sabit = yinKatsayisi * randomDogru[3] - xinKatsayisi * randomDogru[2];

		
		agirlik[0] = xinKatsayisi;
		agirlik[1] = yinKatsayisi;
		agirlik[2] = sabit;

		double agirlik1 = .3;
		double agirlik2 = .1;
		double agirlik3 = .2;


		//int beklenti1 = -1;
		//int beklenti2 = 1;
		net1 = agirlik[0] * class1[0] + agirlik[1] * class1[1] + agirlik[2] * 1;
		net2 = agirlik[0] * class2[0] + agirlik[1] * class2[1] + agirlik[2] * 1;
		int sayac = 1;
		while (!(agirlik1 == agirlik[0] && agirlik2 == agirlik[1] && agirlik3 == agirlik[2])) {
			sayac += 1;
			agirlik1 = agirlik[0];
			agirlik2 = agirlik[1];
			agirlik3 = agirlik[2];
			for (int j = 0; j < sizec1; j += 2) {
				net1 = agirlik[0] * class1[j] + agirlik[1] * class1[j + 1] + agirlik[2] * 1;
				net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
				if (net1 > 0) {//beklentinin negatif olmasi
					agirlik[0] = agirlik[0] - class1[j];
					agirlik[1] = agirlik[1] - class1[j + 1];
					agirlik[2] = agirlik[2] - 1;
					
				}
				
			}
			for (int j = 0; j < sizec2; j += 2) {
				net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
				if (net2 < 0) {//beklentinin pozitif olmasi
					agirlik[0] = agirlik[0] + class2[j];
					agirlik[1] = agirlik[1] + class2[j + 1];
					agirlik[2] = agirlik[2] + 1;

				}

			}
			
		}
		textBox1->Text = System::Convert::ToString(sayac);
		int x1, y1, x2, y2, w1, w2, w3;

		w1 = agirlik[0];
		w2 = agirlik[1];
		w3 = agirlik[2];
		x1 = 0;
		y1 = (int)(((x1 - 400 / 2) * w1 / w2) + (w3 / w2) + 400 / 2);
		x2 = (int)(400 + 1);
		y2 = (int)((x2 - 400 / 2) * w1 / w2 + (w3 / w2) + 400 / 2);

		g->DrawLine(pen, x1, y1, x2, y2);
	}
	

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		double net3;
		double net4;
		double fnet1;
		double fnet2;
		double ftnet1;
		double ftnet2;
		float E;
		double* agirlik = new double[3];//agirlik dizisi
		double xinKatsayisi = 0.33;
		double yinKatsayisi = 0.38;
		double sabit = -0.51;
		
		agirlik[0] = xinKatsayisi; 
		agirlik[1] = yinKatsayisi;
		agirlik[2] = sabit;
		double c = 0.8;
		E = 0.5;
		int cycle = 0;
		while (E>0.2) {
			E = 0;
			cycle += 1;
			cout << "cycle" <<cycle << endl;
			
			//sayac = sayac + 1;
			for (int j = 0; j < sizec1; j += 3) {
				class5[j] = class3[j];
				class5[j + 1] = class3[j + 1];
				class3[j] = (class3[j] / sqrt(pow(class3[j], 2) + pow(class3[j + 1], 2)));
				class3[j + 1] = (class3[j + 1] / sqrt(pow(class5[j], 2) + pow(class5[j + 1], 2)));
				net3 = agirlik[0] * class3[j] + agirlik[1] * class3[j + 1]+agirlik[2]*-1 ;
				fnet1 = (2 / (1 + exp(-1*net3)) - 1);
				ftnet1= (0.5*(1 - pow(fnet1, 2)));
				double res1 = 1 - fnet1;
				E +=  0.5*(pow((res1), 2));
				agirlik[0] = agirlik[0] + c * (1 - fnet1)*ftnet1*class3[j];
				agirlik[1] = agirlik[1] + c * (1 - fnet1)*ftnet1*class3[j+1];
				agirlik[2] = agirlik[2] + c * (1 - fnet1)*ftnet1*-1;
	

				class6[j] = class4[j];
				class6[j + 1] = class4[j + 1];
				class4[j] = (class4[j] / sqrt(pow(class4[j], 2) + pow(class4[j + 1], 2)));
				class4[j + 1] = (class4[j + 1] / sqrt(pow(class6[j], 2) + pow(class6[j + 1], 2)));
				net4 = agirlik[0] * class4[j] + agirlik[1] * class4[j + 1]+agirlik[2]*-1 ;
				fnet2 = (2 / (1 + exp(-1*net4)) - 1);
				ftnet2 = (0.5*(1 - pow(fnet2, 2)));
				double res = -1 - fnet2;
				E += 0.5*(pow(res, 2));
				agirlik[0] = agirlik[0] + c * (-1 - fnet2)*ftnet2*class4[j];
				agirlik[1] = agirlik[1] + c * (-1 - fnet2)*ftnet2*class4[j+1];
				agirlik[2] = agirlik[2] + c * (-1 - fnet2)*ftnet2 *-1;
				
				
			}
			

		}
		
		
		float x1, y1, x2, y2, w1, w2, w3;
		w1 = agirlik[0];
		w2 = agirlik[1];
		w3 = agirlik[2];

		x1 = 0;
		y1 = (int)(((x1 - 400 / 2) * w1 / w2) + (w3 / w2) + 400 / 2);
		x2 = (int)(400 + 1);
		y2 = (int)((x2 - 400 / 2) * w1 / w2 + (w2 / w1) + 400 / 2);
		textBox1->Text = System::Convert::ToString(cycle);
		g->DrawLine(pen, x1, y1, x2, y2);
			
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	float* class5 = new float[sizec3];
	float* class6 = new float[sizec4];//diziler
	for (int j = 0;j< sizec1; j += 3)
	{
		class5[j] = class3[j];
		class5[j + 1] = class3[j + 1];
		class3[j] =((class3[j] / sqrt(pow(class3[j], 2) + pow(class3[j + 1], 2)))+200);
		class3[j + 1] = ((class3[j + 1] / sqrt(pow(class5[j], 2) + pow(class5[j + 1], 2))) + 200);
		
		pen = gcnew Pen(Color::Red, 2);
		g->DrawLine(pen, class3[j] - 5, class3[j+1], class3[j] + 5, class3[j+1]);
		g->DrawLine(pen, class3[j], class3[j + 1] - 5, class3[j], class3[j + 1] + 5);
		class6[j] = class4[j];
		class6[j + 1] = class4[j + 1];
		class4[j] = ((class4[j] / sqrt(pow(class4[j], 2) + pow(class4[j + 1], 2)))+200);
		class4[j + 1] = ((class4[j + 1] / sqrt(pow(class6[j], 2) + pow(class6[j + 1], 2)))+200);
		

		pen = gcnew Pen(Color::Blue, 2);
		g->DrawLine(pen, class4[j] - 5, class4[j + 1], class4[j] + 5, class4[j + 1]);
		g->DrawLine(pen, class4[j], class4[j + 1] - 5, class4[j], class4[j + 1] + 5);
		//pictureBox1->Refresh();
	}
	//pictureBox1->Refresh();

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	for (int i = 0;i < 3;i++) {
		srand(time(NULL));//random dogrunun farkli atamasýný saglar.
		float x1 = rand() % 50;
		float x2 = rand() % 50;
		float y1 = rand() % 50;
		float y2 = rand() % 50;
		pen = gcnew Pen(Color::Black, 2);
		g = pictureBox1->CreateGraphics();
		
		randomDogru[0] = x1;
		randomDogru[1] = y1;
		randomDogru[2] = x2;
		randomDogru[3] = y2;
		//float egim;
		x1 = x1 + 200;
		x2 = x2 + 200;
		y1 = 200 - y1;
		y2 = 200 - y2;
		x1 = 0;
		double a = randomDogru[3] - randomDogru[1];
		double b = -randomDogru[2] - randomDogru[0];
		double c = b * randomDogru[3] - a * randomDogru[2];
		y1 = (((x1 - 400 / 2) * a / b) + (c / b) + 400 / 2);//random dogrunun cizilmesi
		x2 = (400 + 1);
		y2 = ((x2 - 400 / 2) * a / b + (c / b) + 400 / 2);
		g->DrawLine(pen, x1, y1, x2, y2);
	}

	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	double net1;
	double net2;
	double net3;
	double* agirlik = new double[3];//agirlik dizisi 

	double xinKatsayisi = randomDogru[3] - randomDogru[1];
	double yinKatsayisi = -randomDogru[2] - randomDogru[0];
	double sabit = yinKatsayisi * randomDogru[3] - xinKatsayisi * randomDogru[2];


	agirlik[0] = xinKatsayisi;
	agirlik[1] = yinKatsayisi;
	agirlik[2] = sabit;

	net1 = agirlik[0] * class1[0] + agirlik[1] * class1[1] + agirlik[2] * 1;
	net2 = agirlik[0] * class2[0] + agirlik[1] * class2[1] + agirlik[2] * 1;
	net3 = agirlik[0] * class5[0] + agirlik[1] * class5[1] + agirlik[2] * 1;

	double agirlik1 = 1;
	double agirlik2 = 1;
	double agirlik3 = -1;
	int sayac = 0;
	while (!(agirlik1 == agirlik[0] && agirlik2 == agirlik[1] && agirlik3 == agirlik[2])) {
		sayac += 1;
		agirlik1 = agirlik[0];
		agirlik2 = agirlik[1];
		agirlik3 = agirlik[2];
		for (int j = 0; j < sizec1; j += 2) {
			net1 = agirlik[0] * class1[j] + agirlik[1] * class1[j + 1] + agirlik[2] * 1;
			net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
			net3 = agirlik[0] * class5[j] + agirlik[1] * class5[j + 1] + agirlik[2] * 1;
			if (net1 < 0) {
				agirlik[0] = agirlik[0] + class1[j];
				agirlik[1] = agirlik[1] + class1[j + 1];
				agirlik[2] = agirlik[2] + 1;

			}
		}
		for (int j = 0; j < sizec2; j += 2) {
			net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
			if (net2 > 0) {
				agirlik[0] = agirlik[0] - class2[j];
				agirlik[1] = agirlik[1] - class2[j + 1];
				agirlik[2] = agirlik[2] - 1;

			}

		}
		for (int j = 0; j < sizec2; j += 2) {
			net3 = agirlik[0] * class5[j] + agirlik[1] * class5[j + 1] + agirlik[2] * 1;
			if (net3 > 0) {
				agirlik[0] = agirlik[0] - class5[j];
				agirlik[1] = agirlik[1] - class5[j + 1];
				agirlik[2] = agirlik[2] - 1;

			}

		}

	}
	textBox1->Text = System::Convert::ToString(sayac);
	int x1, y1, x2, y2, w1, w2, w3;

	w1 = agirlik[0];
	w2 = agirlik[1];
	w3 = agirlik[2];
	x1 = 0;
	y1 = (int)(((x1 - 400 / 2) * w1 / w2) + (w3 / w2) + 400 / 2);
	x2 = (int)(400 + 1);
	y2 = (int)((x2 - 400 / 2) * w1 / w2 + (w3 / w2) + 400 / 2);
	pen = gcnew Pen(Color::Red, 2);
	g->DrawLine(pen, x1, y1, x2, y2);
	
	 xinKatsayisi = randomDogru[3] - randomDogru[1];
	 yinKatsayisi = -randomDogru[2] - randomDogru[0];
	 sabit = yinKatsayisi * randomDogru[3] - xinKatsayisi * randomDogru[2];


	agirlik[0] = xinKatsayisi;
	agirlik[1] = yinKatsayisi;
	agirlik[2] = sabit;

	net1 = agirlik[0] * class1[0] + agirlik[1] * class1[1] + agirlik[2] * 1;
	net2 = agirlik[0] * class2[0] + agirlik[1] * class2[1] + agirlik[2] * 1;
	net3 = agirlik[0] * class5[0] + agirlik[1] * class5[1] + agirlik[2] * 1;

	 agirlik1 = 1;
	 agirlik2 = 1;
	 agirlik3 = -1;
	
	
	while (!(agirlik1 == agirlik[0] && agirlik2 == agirlik[1] && agirlik3 == agirlik[2])) {
		sayac += 1;
		agirlik1 = agirlik[0];
		agirlik2 = agirlik[1];
		agirlik3 = agirlik[2];
		for (int j = 0; j < sizec1; j += 2) {
			net1 = agirlik[0] * class1[j] + agirlik[1] * class1[j + 1] + agirlik[2] * 1;
			net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
			net3 = agirlik[0] * class5[j] + agirlik[1] * class5[j + 1] + agirlik[2] * 1;
			if (net1 > 0) {
				agirlik[0] = agirlik[0] - class1[j];
				agirlik[1] = agirlik[1] - class1[j + 1];
				agirlik[2] = agirlik[2] - 1;

			}
		}
		for (int j = 0; j < sizec2; j += 2) {
			net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
			if (net2 < 0) {
				agirlik[0] = agirlik[0] + class2[j];
				agirlik[1] = agirlik[1] + class2[j + 1];
				agirlik[2] = agirlik[2] + 1;

			}

		}
		for (int j = 0; j < sizec2; j += 2) {
			net3 = agirlik[0] * class5[j] + agirlik[1] * class5[j + 1] + agirlik[2] * 1;
			if (net3 > 0) {
				agirlik[0] = agirlik[0] - class5[j];
				agirlik[1] = agirlik[1] - class5[j + 1];
				agirlik[2] = agirlik[2] - 1;

			}

		}

	}
	int x3, y3, x4, y4, w4, w5, w6;

	w4 = agirlik[0];
	w5 = agirlik[1];
	w6 = agirlik[2];
	x3 = 0;
	y3 = (int)(((x1 - 400 / 2) * w4 / w5) + (w6 / w5) + 400 / 2);
	x4 = (int)(400 + 1);
	y4 = (int)((x2 - 400 / 2) * w4 / w5 + (w6 / w5) + 400 / 2);
	pen1 = gcnew Pen(Color::Blue, 2);
	g->DrawLine(pen1, x3, y3, x4, y4);


	
	xinKatsayisi = randomDogru[3] - randomDogru[1];
	yinKatsayisi = -randomDogru[2] - randomDogru[0];
	sabit = yinKatsayisi * randomDogru[3] - xinKatsayisi * randomDogru[2];


	agirlik[0] = xinKatsayisi;
	agirlik[1] = yinKatsayisi;
	agirlik[2] = sabit;

	net1 = agirlik[0] * class1[0] + agirlik[1] * class1[1] + agirlik[2] * 1;
	net2 = agirlik[0] * class2[0] + agirlik[1] * class2[1] + agirlik[2] * 1;
	net3 = agirlik[0] * class5[0] + agirlik[1] * class5[1] + agirlik[2] * 1;

	agirlik1 = 1;
	agirlik2 = 1;
	agirlik3 = -1;


	while (!(agirlik1 == agirlik[0] && agirlik2 == agirlik[1] && agirlik3 == agirlik[2])) {
		sayac += 1;
		agirlik1 = agirlik[0];
		agirlik2 = agirlik[1];
		agirlik3 = agirlik[2];
		for (int j = 0; j < sizec1; j += 2) {
			net1 = agirlik[0] * class1[j] + agirlik[1] * class1[j + 1] + agirlik[2] * 1;
			net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
			net3 = agirlik[0] * class5[j] + agirlik[1] * class5[j + 1] + agirlik[2] * 1;
			if (net1 > 0) {
				agirlik[0] = agirlik[0] - class1[j];
				agirlik[1] = agirlik[1] - class1[j + 1];
				agirlik[2] = agirlik[2] - 1;

			}
		}
		for (int j = 0; j < sizec2; j += 2) {
			net2 = agirlik[0] * class2[j] + agirlik[1] * class2[j + 1] + agirlik[2] * 1;
			if (net2 > 0) {
				agirlik[0] = agirlik[0] - class2[j];
				agirlik[1] = agirlik[1] - class2[j + 1];
				agirlik[2] = agirlik[2] - 1;

			}

		}
		for (int j = 0; j < sizec2; j += 2) {
			net3 = agirlik[0] * class5[j] + agirlik[1] * class5[j + 1] + agirlik[2] * 1;
			if (net3 < 0) {
				agirlik[0] = agirlik[0] + class5[j];
				agirlik[1] = agirlik[1] + class5[j + 1];
				agirlik[2] = agirlik[2] + 1;

			}

		}

	}
	int x5, y5, x6, y6, w7, w8, w9;

	w7 = agirlik[0];
	w8 = agirlik[1];
	w9 = agirlik[2];
	x5 = 0;
	y5 = (int)(((x5 - 400 / 2) * w7 / w8) + (w9 / w8) + 400 / 2);
	x6 = (int)(400 + 1);
	y6 = (int)((x2 - 400 / 2) * w7 / w8 + (w9 / w8) + 400 / 2);
	pen2 = gcnew Pen(Color::Green, 2);
	g->DrawLine(pen2, x5, y5, x6, y6);

}

};
}