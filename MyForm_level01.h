#pragma once
#include "controller.h"
#include "MyForm_creditos.h"
namespace trabajofinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm_level01
	/// </summary>
	public ref class MyForm_level01 : public System::Windows::Forms::Form
	{
	public:
		MyForm_level01(void)
		{
			srand(time(NULL));
			InitializeComponent();
			
			g = panel1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, panel1->ClientRectangle);
			imgCleaner = gcnew Bitmap("personaje.png");
			
			Mapa = gcnew Bitmap("mapa.jpeg");
			imgTacho = gcnew Bitmap("tacho.png");
			imgBa�o = gcnew Bitmap("ba�o.png");
			imgBasura = gcnew Bitmap("basura.png");
			imgEnemy = gcnew Bitmap("enemy.png");

			controller = new Controller(imgCleaner);
			controller->addEnemy(g, imgEnemy);
			controller->addTacho(imgTacho,50,buffer->Graphics->VisibleClipBounds.Height-100);
			controller->addBa�o(imgBa�o, 600, 555);

			contBa�os = 0; contTachos = 1;
			//final
			
		}
		void ColocaNombre(String^ s)
		{
			nombre = s ;
		}
	protected:
		/// <summary>
		Graphics^ g;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
		Bitmap^ imgCleaner;
		Bitmap^ Mapa;
		Bitmap^ imgTacho;
		Bitmap^ imgBa�o;
		Bitmap^ imgBasura;
		Bitmap^ imgEnemy;
		String ^nombre;
		int contBa�os;
		int contTachos;

	private: System::Windows::Forms::Timer^ timerEnemy;
	private: System::Windows::Forms::Timer^ timerBasura;
	private: System::Windows::Forms::Timer^ timerEntierro;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lbBuyTacho;


	private: System::Windows::Forms::Label^ lbBuyBa�o;



	private: System::Windows::Forms::Label^ lbVelocidad;

	private: System::Windows::Forms::Label^ lbBolsa;

	private: System::Windows::Forms::Label^ lbDinero;
	private: System::Windows::Forms::Label^ lbBuyBolsa;
	private: System::Windows::Forms::Label^ lbBasura;
	private: System::Windows::Forms::Label^ lbBa�os;
	private: System::Windows::Forms::Label^ lbMicrobiologico;
	private: System::Windows::Forms::Timer^ timerMicrobiologicoBa�os;
	private: System::Windows::Forms::Label^ lbCapacidadBolsa;
	private: System::Windows::Forms::Label^ label8;


	protected:
		Controller* controller;


	protected:


	protected:
		
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm_level01()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm_level01::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerEnemy = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerBasura = (gcnew System::Windows::Forms::Timer(this->components));
			this->timerEntierro = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->lbCapacidadBolsa = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbVelocidad = (gcnew System::Windows::Forms::Label());
			this->lbBolsa = (gcnew System::Windows::Forms::Label());
			this->lbDinero = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lbBuyBolsa = (gcnew System::Windows::Forms::Label());
			this->lbBuyTacho = (gcnew System::Windows::Forms::Label());
			this->lbBuyBa�o = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lbBasura = (gcnew System::Windows::Forms::Label());
			this->lbBa�os = (gcnew System::Windows::Forms::Label());
			this->lbMicrobiologico = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timerMicrobiologicoBa�os = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(-3, 1);
			this->panel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(933, 862);
			this->panel1->TabIndex = 0;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm_level01::timer1_Tick_1);
			// 
			// timerEnemy
			// 
			this->timerEnemy->Enabled = true;
			this->timerEnemy->Interval = 1000;
			this->timerEnemy->Tick += gcnew System::EventHandler(this, &MyForm_level01::timerEnemy_Tick);
			// 
			// timerBasura
			// 
			this->timerBasura->Enabled = true;
			this->timerBasura->Interval = 500;
			this->timerBasura->Tick += gcnew System::EventHandler(this, &MyForm_level01::timerBasura_Tick);
			// 
			// timerEntierro
			// 
			this->timerEntierro->Enabled = true;
			this->timerEntierro->Tick += gcnew System::EventHandler(this, &MyForm_level01::timerEntierro_Tick);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(939, 5);
			this->panel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(237, 858);
			this->panel2->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->lbCapacidadBolsa);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->lbVelocidad);
			this->groupBox3->Controls->Add(this->lbBolsa);
			this->groupBox3->Controls->Add(this->lbDinero);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(4, 682);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Size = System::Drawing::Size(219, 162);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"RECURSOS";
			// 
			// lbCapacidadBolsa
			// 
			this->lbCapacidadBolsa->AutoSize = true;
			this->lbCapacidadBolsa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbCapacidadBolsa->Location = System::Drawing::Point(147, 100);
			this->lbCapacidadBolsa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbCapacidadBolsa->Name = L"lbCapacidadBolsa";
			this->lbCapacidadBolsa->Size = System::Drawing::Size(21, 24);
			this->lbCapacidadBolsa->TabIndex = 7;
			this->lbCapacidadBolsa->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 100);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 17);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Capacidad de bolsa:";
			// 
			// lbVelocidad
			// 
			this->lbVelocidad->AutoSize = true;
			this->lbVelocidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbVelocidad->Location = System::Drawing::Point(93, 116);
			this->lbVelocidad->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbVelocidad->Name = L"lbVelocidad";
			this->lbVelocidad->Size = System::Drawing::Size(21, 24);
			this->lbVelocidad->TabIndex = 5;
			this->lbVelocidad->Text = L"5";
			// 
			// lbBolsa
			// 
			this->lbBolsa->AutoSize = true;
			this->lbBolsa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBolsa->Location = System::Drawing::Point(147, 70);
			this->lbBolsa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBolsa->Name = L"lbBolsa";
			this->lbBolsa->Size = System::Drawing::Size(21, 24);
			this->lbBolsa->TabIndex = 4;
			this->lbBolsa->Text = L"0";
			// 
			// lbDinero
			// 
			this->lbDinero->AutoSize = true;
			this->lbDinero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDinero->Location = System::Drawing::Point(72, 32);
			this->lbDinero->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbDinero->Name = L"lbDinero";
			this->lbDinero->Size = System::Drawing::Size(21, 24);
			this->lbDinero->TabIndex = 3;
			this->lbDinero->Text = L"0";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 121);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 17);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Velocidad:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 75);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 17);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Basura en la mano:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 37);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 17);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Dinero:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lbBuyBolsa);
			this->groupBox2->Controls->Add(this->lbBuyTacho);
			this->groupBox2->Controls->Add(this->lbBuyBa�o);
			this->groupBox2->Location = System::Drawing::Point(4, 287);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(219, 388);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"TIENDA (cerrado por covid :c)";
			// 
			// lbBuyBolsa
			// 
			this->lbBuyBolsa->AutoSize = true;
			this->lbBuyBolsa->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lbBuyBolsa->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBuyBolsa->Location = System::Drawing::Point(3, 134);
			this->lbBuyBolsa->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBuyBolsa->Name = L"lbBuyBolsa";
			this->lbBuyBolsa->Size = System::Drawing::Size(182, 18);
			this->lbBuyBolsa->TabIndex = 2;
			this->lbBuyBolsa->Text = L"Ampliar Bolsa (S/.750)";
			this->lbBuyBolsa->Click += gcnew System::EventHandler(this, &MyForm_level01::lbBuyBolsa_Click);
			// 
			// lbBuyTacho
			// 
			this->lbBuyTacho->AutoSize = true;
			this->lbBuyTacho->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lbBuyTacho->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBuyTacho->Location = System::Drawing::Point(4, 79);
			this->lbBuyTacho->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBuyTacho->Name = L"lbBuyTacho";
			this->lbBuyTacho->Size = System::Drawing::Size(191, 18);
			this->lbBuyTacho->TabIndex = 1;
			this->lbBuyTacho->Text = L"Comprar Tacho (S/.350)";
			this->lbBuyTacho->Click += gcnew System::EventHandler(this, &MyForm_level01::lbBuyTacho_Click);
			// 
			// lbBuyBa�o
			// 
			this->lbBuyBa�o->AutoSize = true;
			this->lbBuyBa�o->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->lbBuyBa�o->Font = (gcnew System::Drawing::Font(L"Stencil", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBuyBa�o->Location = System::Drawing::Point(4, 32);
			this->lbBuyBa�o->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBuyBa�o->Name = L"lbBuyBa�o";
			this->lbBuyBa�o->Size = System::Drawing::Size(182, 18);
			this->lbBuyBa�o->TabIndex = 0;
			this->lbBuyBa�o->Text = L"Comprar Ba�o (S/.650)";
			this->lbBuyBa�o->Click += gcnew System::EventHandler(this, &MyForm_level01::lbBuyBa�o_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lbBasura);
			this->groupBox1->Controls->Add(this->lbBa�os);
			this->groupBox1->Controls->Add(this->lbMicrobiologico);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(4, 98);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(219, 181);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Salubridad de la Playa";
			// 
			// lbBasura
			// 
			this->lbBasura->AutoSize = true;
			this->lbBasura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBasura->Location = System::Drawing::Point(127, 126);
			this->lbBasura->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBasura->Name = L"lbBasura";
			this->lbBasura->Size = System::Drawing::Size(21, 24);
			this->lbBasura->TabIndex = 8;
			this->lbBasura->Text = L"0";
			// 
			// lbBa�os
			// 
			this->lbBa�os->AutoSize = true;
			this->lbBa�os->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbBa�os->Location = System::Drawing::Point(127, 74);
			this->lbBa�os->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbBa�os->Name = L"lbBa�os";
			this->lbBa�os->Size = System::Drawing::Size(21, 24);
			this->lbBa�os->TabIndex = 7;
			this->lbBa�os->Text = L"0";
			// 
			// lbMicrobiologico
			// 
			this->lbMicrobiologico->AutoSize = true;
			this->lbMicrobiologico->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMicrobiologico->Location = System::Drawing::Point(99, 36);
			this->lbMicrobiologico->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbMicrobiologico->Name = L"lbMicrobiologico";
			this->lbMicrobiologico->Size = System::Drawing::Size(27, 29);
			this->lbMicrobiologico->TabIndex = 6;
			this->lbMicrobiologico->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 132);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Basura recogida:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(0, 79);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(126, 17);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Numero de Ba�os:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 20);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 17);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Nivel microbiologico del agua:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 17);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(27, 6, 27, 6);
			this->label1->Size = System::Drawing::Size(119, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MENU";
			// 
			// timerMicrobiologicoBa�os
			// 
			this->timerMicrobiologicoBa�os->Enabled = true;
			this->timerMicrobiologicoBa�os->Interval = 250;
			this->timerMicrobiologicoBa�os->Tick += gcnew System::EventHandler(this, &MyForm_level01::timerMicrobiologicoBa�os_Tick);
			// 
			// MyForm_level01
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 864);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MyForm_level01";
			this->Text = L"MyForm_level01";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm_level01::MyForm_level01_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm_level01::MyForm_level01_KeyUp);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		//clear
		buffer->Graphics->Clear(Color::White);
		//datos de menu
		this->lbBolsa->Text=Convert::ToString(controller->getCleaner()->getBolsa());
		this->lbCapacidadBolsa->Text=Convert::ToString(controller->getCleaner()->getCapacidadBolsa());
		this->lbDinero->Text = Convert::ToString(controller->getCleaner()->getDinero());
		this->lbMicrobiologico->Text = Convert::ToString(controller->getMicrobiologico());
		this->lbBa�os->Text = Convert::ToString(controller->cantBa�os());
		this->lbBasura->Text = Convert::ToString(controller->getLimpiezaPlaya());
		//collision
		controller->collision(buffer->Graphics);
		//move (enemigos)
		controller->moverTodo(buffer->Graphics);
		//draw
		buffer->Graphics->DrawImage(Mapa, 0, 0, panel1->Width, panel1->Height);
		buffer->Graphics->DrawString(nombre, gcnew Drawing::Font("Arial", 10, FontStyle::Bold), Brushes::Black, 120, 10);
		buffer->Graphics->DrawString("USUARIO : ", gcnew Drawing::Font("Arial", 10, FontStyle::Bold), Brushes::Black, 50, 10);
		//objmonigote->draw(buffer->Graphics, imgCleaner);
		controller->dibujarTodo(buffer->Graphics, imgCleaner, imgEnemy, imgBa�o, imgTacho, imgBasura);
		//render
		buffer->Render(g);
		//final
		if (controller->getMicrobiologico() >= 100 && controller->getLimpiezaPlaya() >= 100 && controller->cantBa�os() >= 1)
		{
			timer1->Enabled = false;
			timerBasura->Enabled = false;
			timerEnemy->Enabled = false;
			timerEntierro->Enabled = false;
			timerMicrobiologicoBa�os->Enabled = false;
			timerBasura->Enabled = false;

			MyForm_creditos^ Ii = gcnew MyForm_creditos();
			this->Hide();
			Ii->ShowDialog();
			this->Close();
		}
		
	}
	private: System::Void MyForm_level01_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		controller->MovimientoMonigote(true, e->KeyCode);
	}
	private: System::Void MyForm_level01_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		controller->MovimientoMonigote(false, e->KeyCode);
	}
	private: System::Void timerEnemy_Tick(System::Object^ sender, System::EventArgs^ e) {
		controller->addEnemy(g,imgEnemy);
		
	}
	private: System::Void timerBasura_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		int i=rand() % controller->cantEnem();
		controller->addbasura(imgBasura,controller->getEnemigo(i)->getPosicionX(), controller->getEnemigo(i)->getPosicionY()+(controller->getEnemigo(i)->getHeight())/2);
	}
	private: System::Void timerEntierro_Tick(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < controller->cantBasu(); i++)
		{
			controller->getBasura(i)->addTime();//a cada uno de las basuras en el campo le adiciono 100 milisegundos a su reloj interno
			controller->getBasura(i)->cambioEstado();
		}
	}
	 private: System::Void timerMicrobiologicoBa�os_Tick(System::Object^ sender, System::EventArgs^ e) {
		 controller->addNivelMicrobiologico();
	 }
	private: System::Void lbBuyBa�o_Click(System::Object^ sender, System::EventArgs^ e) {
		

		/*controller->addBa�o(imgBa�o, 600 ,555);*/ //no reconoce a la colision
		
		
		
		
	}
	private: System::Void lbBuyTacho_Click(System::Object^ sender, System::EventArgs^ e) {
		/*controller->addTacho(imgTacho, 100, buffer->Graphics->VisibleClipBounds.Height - 500);*/ //no reconoloce la colison y tpmko al vector al parecer (observacion)
		
	}
	private: System::Void lbBuyBolsa_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	

};
}


