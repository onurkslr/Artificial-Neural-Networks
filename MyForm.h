#pragma once
#include "Coordinate.h"
#include "math.h"
#include "windows.h"
namespace Continuous1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// MyForm için özet
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Graphics ^ g;
		BYTE* picture = new byte[500 * 500];
		List<Coordinate^>^noktalar = gcnew List<Coordinate^>();
		List<Coordinate^>^noktalar1 = gcnew List<Coordinate^>();
		List<Coordinate^>^noktalar2 = gcnew List<Coordinate^>();
		List<Coordinate^>^noktalar3 = gcnew List<Coordinate^>();
		Coordinate ^W = gcnew Coordinate();
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	public:
		Pen ^ pen;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	
	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(0, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(501, 501);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseClick);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(250, 30);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(4, 500);
			this->label2->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(0, 280);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 4);
			this->label1->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(871, 85);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(98, 21);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(871, 112);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(98, 21);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(714, 85);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(91, 21);
			this->checkBox4->TabIndex = 9;
			this->checkBox4->Text = L"normalize";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(756, 280);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Delta Hesapla";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(548, 170);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"X : ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(584, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(548, 201);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Y : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(584, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(548, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Z : ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(587, 230);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"label8";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(871, 139);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(98, 21);
			this->checkBox3->TabIndex = 17;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(871, 166);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(98, 21);
			this->checkBox5->TabIndex = 18;
			this->checkBox5->Text = L"checkBox5";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(756, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 46);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Çok Nöronlu Delta Hesapla";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(714, 112);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(128, 21);
			this->checkBox6->TabIndex = 20;
			this->checkBox6->Text = L"çoklu normalize";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox6_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1000, 558);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private:void Line_Ciz(int W1, int W2, int W3)
	{
		int Width = 501;
		int Height = 501;

		Bitmap^ surface = gcnew Bitmap(501, 501);
		pictureBox1->Image = surface;

		Color c;
		for (int row = 0; row < 501; row++)
		{
			for (int column = 0; column < 501; column++)
			{
				if (picture[row * 501 + column] == 1)
				{
					c = Color::FromArgb(255, 0, 0);
					surface->SetPixel(column, row, c);
				}
				else if (picture[row * 501 + column] == 2)
				{
					c = Color::FromArgb(0, 255, 0);
					surface->SetPixel(column, row, c);
				}
				else if (picture[row * 501 + column] == 100)
				{
					c = Color::FromArgb(0, 0, 0);
					surface->SetPixel(column, row, c);
				}
				else
				{
					c = Color::FromArgb(picture[row * 501 + column], picture[row * 501 + column], picture[row * 501 + column]);
					surface->SetPixel(column, row, c);
				}
			}
		}
		Graphics^ g;
		g = Graphics::FromImage(surface);
		Pen^ color = gcnew Pen(Color::Blue);
		float y_denklem1, y_denklem2;
		float x_denklem1, x_denklem2;
		int x1, y1, x2, y2;
		if (W1 == 0 || W2 == 0)
		{
			if (W1 == 0)
			{
				y1 = (-W3) / W2;
				y2 = (-W3) / W2;
				x1 = 250;
				x2 = -250;
			}
			if (W2 == 0)
			{
				x1 = (-W3) / W1;
				x2 = (-W3) / W1;
				y1 = 250;
				y2 = -250;
			}
		}
		else
		{
			y_denklem1 = (-W3 - (W1 * (250))) / W2;
			y_denklem2 = (-W3 - (W1 * (-250))) / W2;
			x_denklem1 = (-W2 * (250) - W3) / W1;
			x_denklem2 = (-W2 * (-250) - W3) / W1;

			/*MessageBox::Show("Y denklem1 :  " + y_denklem1);
			MessageBox::Show("Y denklem2 :  " + y_denklem2);
			MessageBox::Show("X denklem1 :  " + x_denklem1);
			MessageBox::Show("X denklem2 :  " + y_denklem2);


			bool nokta1_bulundu = false;
			if (fabs(y_denklem1) <= 250)
			{
				//x1 = -250;
				x1 = 250;
				y1 = y_denklem1;
				nokta1_bulundu = true;
			}
			if (fabs(y_denklem2) <= 250)
			{
				if (nokta1_bulundu == true)
				{
					//x2 = 250;
					x2 = -250;
					y2 = y_denklem2;
				}
				else
				{
					x1 = -250;
					//x1 = 250;
					y1 = y_denklem2;
					nokta1_bulundu = true;
				}
			}
			if (fabs(x_denklem1) <= 250)
			{
				if (nokta1_bulundu == true)
				{
					x2 = x_denklem1;
					//y2 = -250;
					y2 = 250;
				}
				else
				{
					x1 = x_denklem1;
					y1 = 250;
					//y1 = -250;
					nokta1_bulundu = true;
				}
			}
			if (fabs(x_denklem2) <= 250)
			{
				if (nokta1_bulundu == true)
				{
					x2 = x_denklem2;
					//y2 = 250;
					y2 = -250;
				}
				else
				{
					x1 = x_denklem2;
					y1 = -250;
					//y1 = 250;
					nokta1_bulundu = true;
				}
			}
		}

		x1 = x1 + 251;
		y1 = 251 - y1;
		x2 = x2 + 251;
		y2 = 251 - y2;
		g->DrawLine(color, x1, y1, x2, y2);
	}*/

	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		int x = (e->X)-250;
		int y =250- (e->Y);

		label4->Text = x.ToString();
		label6->Text = y.ToString();
		label8->Text = Convert::ToString(-1);

		int changedClass;
		g = pictureBox1->CreateGraphics();
		if (checkBox1->Checked) {
			
			pen = gcnew Pen(Color::Red, 1);
			g->DrawLine(pen, (x+250) - 5, (250-y), (x+250) + 5,(250- y));
			g->DrawLine(pen, x+250, (250-y) - 5, x+250, (250-y) + 5);
			//x = x - 250;
			//y = 250 - y;
			//changedClass = 1;
			Coordinate^object = gcnew Coordinate();
			object->set_d(changedClass);
			object->coordinates(x, y, -1);
			noktalar->Add(object);
			
			

		}
		else if (checkBox2->Checked) {
			pen = gcnew Pen(Color::Blue, 1);
			g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
			g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);
			//changedClass = -1;
			Coordinate^object = gcnew Coordinate();
			object->set_d(changedClass);
			object->coordinates(x, y, -1);
			noktalar1->Add(object);
		}
		else if (checkBox3->Checked) {
			pen = gcnew Pen(Color::DarkTurquoise, 1);
			g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
			g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);
			//changedClass = -1;
			Coordinate^object = gcnew Coordinate();
			object->set_d(changedClass);
			object->coordinates(x, y, -1);
			noktalar2->Add(object);
		}
		else if (checkBox5->Checked) {
			pen = gcnew Pen(Color::Green, 1);
			g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
			g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);
			//changedClass = -1;
			Coordinate^object = gcnew Coordinate();
			object->set_d(changedClass);
			object->coordinates(x, y, -1);
			noktalar3->Add(object);
		}

	}
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	//Graphics ^ g;
	for each(Coordinate^ p in noktalar)
	{
		float x1 = p->getx();
		float y1 = p->gety();
		float norm = sqrt(x1*x1 + y1 * y1);
		x1 = (x1 / 250);
		y1 = (y1 / 250);
		p->setx(x1);
		p->sety(y1);
		int x = x1 * 50;
		int y = y1 * 50;

		pen = gcnew Pen(Color::Red, 1);
		g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
		g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);
		
	}
	for each(Coordinate^ p in noktalar1)
	{
		float x1 = p->getx();
		float y1 = p->gety();
		float norm = sqrt(x1*x1 + y1 * y1);
		x1 = (x1 / 250);
		y1 = (y1 / 250);
		p->setx(x1);
		p->sety(y1);
		int x = x1 * 50;
		int y = y1 * 50;
		pen = gcnew Pen(Color::Blue, 1);
		g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
		g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);


	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	float c = 0.1;
	float net1;
	float net2;
	float fnet1, fnet2;
	float ftnet1;
	float ftnet2;
	float E = 0.5;
	W ->coordinates (1, -1, 5);
	while (E > 0.001) {
		//MessageBox::Show("Yukarý");
		E = 0.0;
		
		for each (Coordinate^a in noktalar) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net1 = toplam;

		fnet1 = 2 / (1 + exp(-net1)) - 1;
		ftnet1 = 0.5*(1 - (fnet1*fnet1));
		E = E + 0.5*(pow((1 - fnet1), 2));
			
		W->setx(W->getx() + (c*(1 - fnet1)*ftnet1*(float)a->getx()));
		W->sety(W->gety() + (c*(1 - fnet1)*ftnet1*(float)a->gety()));
		W->setz(W->getz() + (c*(1 - fnet1)*ftnet1*(float)a->getz()));

		}

		for each (Coordinate^a in noktalar1) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net2 = toplam;
		    fnet2 = 2 / (1 + exp(-net2)) - 1;
		    ftnet2 = 0.5*(1 - (fnet2*fnet2));
		    E = E + 0.5*(pow((-1 - fnet2), 2));

			W->setx(W->getx() + (c*(-1 - fnet2)*ftnet2*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet2)*ftnet2*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet2)*ftnet2*(float)a->getz()));
		}
		//MessageBox::Show("E  " + E);
	}
	int x1, y1, x2, y2, w1, w2, w3;
	/*MessageBox::Show("W->X + " + W->getx());
	MessageBox::Show("W->y + " + W->gety());
	MessageBox::Show("W->z + " + W->getz());*/
	w1 = W->getx();
	w2 = W->gety();
	w3 = -50*W->getz();
	x1 = 0;
	y1 = (int)(((x1 - 500 / 2) * w1 / w2) + (w3 / w2) + 500 / 2);
	x2 = (int)(500 + 1);
	y2 = (int)((x2 - 500 / 2) * w1 / w2 + (w3 / w2) + 500 / 2);
	pen = gcnew Pen(Color::Black, 1);
	g->DrawLine(pen, x1, y1, x2, y2);
	//Line_Ciz((int)W->getx(), (int)W->gety(), -50 * (int)W->getz());
	
	
	


}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	float c = 0.1;
	float net1;
	float net2,net3,net4;
	float fnet1, fnet2,fnet3,fnet4;
	float ftnet1;
	float ftnet2,ftnet3,ftnet4;
	float E = 0.5;
	W->coordinates(1, -1, 5);
	while (E > 0.2) {
		//MessageBox::Show("Yukarý");
		E = 0.0;

		for each (Coordinate^a in noktalar) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net1 = toplam;

			fnet1 = 2 / (1 + exp(-net1)) - 1;
			ftnet1 = 0.5*(1 - (fnet1*fnet1));
			E = E + 0.5*(pow((1 - fnet1), 2));

			W->setx(W->getx() + (c*(1 - fnet1)*ftnet1*(float)a->getx()));
			W->sety(W->gety() + (c*(1 - fnet1)*ftnet1*(float)a->gety()));
			W->setz(W->getz() + (c*(1 - fnet1)*ftnet1*(float)a->getz()));

		}

		for each (Coordinate^a in noktalar1) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net2 = toplam;
			fnet2 = 2 / (1 + exp(-net2)) - 1;
			ftnet2 = 0.5*(1 - (fnet2*fnet2));
			E = E + 0.5*(pow((-1 - fnet2), 2));

			W->setx(W->getx() + (c*(-1 - fnet2)*ftnet2*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet2)*ftnet2*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet2)*ftnet2*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar2) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net3 = toplam;
			fnet3 = 2 / (1 + exp(-net3)) - 1;
			ftnet3 = 0.5*(1 - (fnet3*fnet3));
			E = E + 0.5*(pow((-1 - fnet3), 2));

			W->setx(W->getx() + (c*(-1 - fnet3)*ftnet3*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet3)*ftnet3*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet3)*ftnet3*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar3) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net4 = toplam;
			fnet4 = 2 / (1 + exp(-net4)) - 1;
			ftnet4 = 0.5*(1 - (fnet4*fnet4));
			E = E + 0.5*(pow((-1 - fnet4), 2));

			W->setx(W->getx() + (c*(-1 - fnet4)*ftnet4*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet4)*ftnet4*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet4)*ftnet4*(float)a->getz()));
		}
		//MessageBox::Show("E  " + E);
	}
	int x1, y1, x2, y2, w1, w2, w3;
	/*MessageBox::Show("W->X + " + W->getx());
	MessageBox::Show("W->y + " + W->gety());
	MessageBox::Show("W->z + " + W->getz());*/
	w1 = W->getx();
	w2 = W->gety();
	w3 = -50 * W->getz();
	x1 = 0;
	y1 = (int)(((x1 - 500 / 2) * w1 / w2) + (w3 / w2) + 500 / 2);
	x2 = (int)(500 + 1);
	y2 = (int)((x2 - 500 / 2) * w1 / w2 + (w3 / w2) + 500 / 2);
	pen = gcnew Pen(Color::Red, 1);
	g->DrawLine(pen, x1, y1, x2, y2);

	E = 0.5;
	while (E > 0.2) {
		//MessageBox::Show("Yukarý");
		E = 0.0;

		for each (Coordinate^a in noktalar) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net1 = toplam;

			fnet1 = 2 / (1 + exp(-net1)) - 1;
			ftnet1 = 0.5*(1 - (fnet1*fnet1));
			E = E + 0.5*(pow((-1 - fnet1), 2));

			W->setx(W->getx() + (c*(-1 - fnet1)*ftnet1*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet1)*ftnet1*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet1)*ftnet1*(float)a->getz()));

		}

		for each (Coordinate^a in noktalar1) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net2 = toplam;
			fnet2 = 2 / (1 + exp(-net2)) - 1;
			ftnet2 = 0.5*(1 - (fnet2*fnet2));
			E = E + 0.5*(pow((1 - fnet2), 2));

			W->setx(W->getx() + (c*(1 - fnet2)*ftnet2*(float)a->getx()));
			W->sety(W->gety() + (c*(1 - fnet2)*ftnet2*(float)a->gety()));
			W->setz(W->getz() + (c*(1 - fnet2)*ftnet2*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar2) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net3 = toplam;
			fnet3 = 2 / (1 + exp(-net3)) - 1;
			ftnet3 = 0.5*(1 - (fnet3*fnet3));
			E = E + 0.5*(pow((-1 - fnet3), 2));

			W->setx(W->getx() + (c*(-1 - fnet3)*ftnet3*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet3)*ftnet3*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet3)*ftnet3*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar3) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net4 = toplam;
			fnet4 = 2 / (1 + exp(-net4)) - 1;
			ftnet4 = 0.5*(1 - (fnet4*fnet4));
			E = E + 0.5*(pow((-1 - fnet4), 2));

			W->setx(W->getx() + (c*(-1 - fnet4)*ftnet4*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet4)*ftnet4*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet4)*ftnet4*(float)a->getz()));
		}

		//MessageBox::Show("E  " + E);
	}
//	int x1, y1, x2, y2, w1, w2, w3;
	/*MessageBox::Show("W->X + " + W->getx());
	MessageBox::Show("W->y + " + W->gety());
	MessageBox::Show("W->z + " + W->getz());*/
	w1 = W->getx();
	w2 = W->gety();
	w3 = -50 * W->getz();
	x1 = 0;
	y1 = (int)(((x1 - 500 / 2) * w1 / w2) + (w3 / w2) + 500 / 2);
	x2 = (int)(500 + 1);
	y2 = (int)((x2 - 500 / 2) * w1 / w2 + (w3 / w2) + 500 / 2);
	pen = gcnew Pen(Color::Blue, 1);
	g->DrawLine(pen, x1, y1, x2, y2);

	E = 0.5;
	while (E > 0.2) {
		//MessageBox::Show("Yukarý");
		E = 0.0;

		for each (Coordinate^a in noktalar) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net1 = toplam;

			fnet1 = 2 / (1 + exp(-net1)) - 1;
			ftnet1 = 0.5*(1 - (fnet1*fnet1));
			E = E + 0.5*(pow((-1 - fnet1), 2));

			W->setx(W->getx() + (c*(-1 - fnet1)*ftnet1*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet1)*ftnet1*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet1)*ftnet1*(float)a->getz()));

		}

		for each (Coordinate^a in noktalar1) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net2 = toplam;
			fnet2 = 2 / (1 + exp(-net2)) - 1;
			ftnet2 = 0.5*(1 - (fnet2*fnet2));
			E = E + 0.5*(pow((-1 - fnet2), 2));

			W->setx(W->getx() + (c*(-1 - fnet2)*ftnet2*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet2)*ftnet2*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet2)*ftnet2*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar2) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net3 = toplam;
			fnet3 = 2 / (1 + exp(-net3)) - 1;
			ftnet3 = 0.5*(1 - (fnet3*fnet3));
			E = E + 0.5*(pow((1 - fnet3), 2));

			W->setx(W->getx() + (c*(1 - fnet3)*ftnet3*(float)a->getx()));
			W->sety(W->gety() + (c*(1 - fnet3)*ftnet3*(float)a->gety()));
			W->setz(W->getz() + (c*(1 - fnet3)*ftnet3*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar3) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net4 = toplam;
			fnet4 = 2 / (1 + exp(-net4)) - 1;
			ftnet4 = 0.5*(1 - (fnet4*fnet4));
			E = E + 0.5*(pow((-1 - fnet4), 2));

			W->setx(W->getx() + (c*(-1 - fnet4)*ftnet4*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet4)*ftnet4*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet4)*ftnet4*(float)a->getz()));
		}

		//MessageBox::Show("E  " + E);
	}
	//	int x1, y1, x2, y2, w1, w2, w3;
		/*MessageBox::Show("W->X + " + W->getx());
		MessageBox::Show("W->y + " + W->gety());
		MessageBox::Show("W->z + " + W->getz());*/
	w1 = W->getx();
	w2 = W->gety();
	w3 = -40 * W->getz();
	x1 = 0;
	y1 = (int)(((x1 - 500 / 2) * w1 / w2) + (w3 / w2) + 500 / 2);
	x2 = (int)(500 + 1);
	y2 = (int)((x2 - 500 / 2) * w1 / w2 + (w3 / w2) + 500 / 2);
	pen = gcnew Pen(Color::DarkTurquoise, 1);
	g->DrawLine(pen, x1, y1, x2, y2);

	E = 0.5;
	while (E > 0.2) {
		//MessageBox::Show("Yukarý");
		E = 0.0;

		for each (Coordinate^a in noktalar) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net1 = toplam;

			fnet1 = 2 / (1 + exp(-net1)) - 1;
			ftnet1 = 0.5*(1 - (fnet1*fnet1));
			E = E + 0.5*(pow((-1 - fnet1), 2));

			W->setx(W->getx() + (c*(-1 - fnet1)*ftnet1*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet1)*ftnet1*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet1)*ftnet1*(float)a->getz()));

		}

		for each (Coordinate^a in noktalar1) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net2 = toplam;
			fnet2 = 2 / (1 + exp(-net2)) - 1;
			ftnet2 = 0.5*(1 - (fnet2*fnet2));
			E = E + 0.5*(pow((-1 - fnet2), 2));

			W->setx(W->getx() + (c*(-1 - fnet2)*ftnet2*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet2)*ftnet2*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet2)*ftnet2*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar2) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net3 = toplam;
			fnet3 = 2 / (1 + exp(-net3)) - 1;
			ftnet3 = 0.5*(1 - (fnet3*fnet3));
			E = E + 0.5*(pow((-1 - fnet3), 2));

			W->setx(W->getx() + (c*(-1 - fnet3)*ftnet3*(float)a->getx()));
			W->sety(W->gety() + (c*(-1 - fnet3)*ftnet3*(float)a->gety()));
			W->setz(W->getz() + (c*(-1 - fnet3)*ftnet3*(float)a->getz()));
		}
		for each (Coordinate^a in noktalar3) {
			float toplam = 0;
			toplam = toplam + W->getx()*a->getx();
			toplam = toplam + W->gety()*a->gety();
			toplam = toplam + W->getz()*a->getz();
			net4 = toplam;
			fnet4 = 2 / (1 + exp(-net4)) - 1;
			ftnet4 = 0.5*(1 - (fnet4*fnet4));
			E = E + 0.5*(pow((1 - fnet4), 2));

			W->setx(W->getx() + (c*(1 - fnet4)*ftnet4*(float)a->getx()));
			W->sety(W->gety() + (c*(1 - fnet4)*ftnet4*(float)a->gety()));
			W->setz(W->getz() + (c*(1 - fnet4)*ftnet4*(float)a->getz()));
		}

		//MessageBox::Show("E  " + E);
	}
	//	int x1, y1, x2, y2, w1, w2, w3;
		/*MessageBox::Show("W->X + " + W->getx());
		MessageBox::Show("W->y + " + W->gety());
		MessageBox::Show("W->z + " + W->getz());*/
	w1 = W->getx();
	w2 = W->gety();
	w3 = -40 * W->getz();
	x1 = 0;
	y1 = (int)(((x1 - 500 / 2) * w1 / w2) + (w3 / w2) + 500 / 2);
	x2 = (int)(500 + 1);
	y2 = (int)((x2 - 500 / 2) * w1 / w2 + (w3 / w2) + 500 / 2);
	pen = gcnew Pen(Color::Green, 1);
	g->DrawLine(pen, x1, y1, x2, y2);


}
private: System::Void checkBox6_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	for each(Coordinate^ p in noktalar)
	{
		float x1 = p->getx();
		float y1 = p->gety();
		float norm = sqrt(x1*x1 + y1 * y1);
		x1 = (x1 / 250);
		y1 = (y1 / 250);
		p->setx(x1);
		p->sety(y1);
		int x = x1 * 50;
		int y = y1 * 50;

		pen = gcnew Pen(Color::Red, 1);
		g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
		g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);

	}
	for each(Coordinate^ p in noktalar1)
	{
		float x1 = p->getx();
		float y1 = p->gety();
		float norm = sqrt(x1*x1 + y1 * y1);
		x1 = (x1 / 250);
		y1 = (y1 / 250);
		p->setx(x1);
		p->sety(y1);
		int x = x1 * 50;
		int y = y1 * 50;
		pen = gcnew Pen(Color::Blue, 1);
		g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
		g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);


	}

	for each(Coordinate^ p in noktalar2)
	{
		float x1 = p->getx();
		float y1 = p->gety();
		float norm = sqrt(x1*x1 + y1 * y1);
		x1 = (x1 / 250);
		y1 = (y1 / 250);
		p->setx(x1);
		p->sety(y1);
		int x = x1 * 50;
		int y = y1 * 50;
		pen = gcnew Pen(Color::DarkTurquoise, 1);
		g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
		g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);


	}
	for each(Coordinate^ p in noktalar3)
	{
		float x1 = p->getx();
		float y1 = p->gety();
		float norm = sqrt(x1*x1 + y1 * y1);
		x1 = (x1 / 250);
		y1 = (y1 / 250);
		p->setx(x1);
		p->sety(y1);
		int x = x1 * 50;
		int y = y1 * 50;
		pen = gcnew Pen(Color::Green, 1);
		g->DrawLine(pen, (x + 250) - 5, (250 - y), (x + 250) + 5, (250 - y));
		g->DrawLine(pen, x + 250, (250 - y) - 5, x + 250, (250 - y) + 5);


	}
}
};
}
