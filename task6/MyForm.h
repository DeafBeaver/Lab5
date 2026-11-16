#include <cmath>
#pragma once

namespace task6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèßêToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ âõ³äíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äíèéToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ fileText;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;




	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;




	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_R;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col_V;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âõ³äíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèßêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileText = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->col_R = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col_V = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->menuStrip1->BackColor = System::Drawing::Color::Gainsboro;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôàéëToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(67, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->â³äêğèòèToolStripMenuItem,
					this->çáåğåãòèToolStripMenuItem, this->çáåğåãòèßêToolStripMenuItem, this->âèõ³äToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->âõ³äíèéToolStripMenuItem,
					this->âèõ³äíèéToolStripMenuItem
			});
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
			// 
			// âõ³äíèéToolStripMenuItem
			// 
			this->âõ³äíèéToolStripMenuItem->Name = L"âõ³äíèéToolStripMenuItem";
			this->âõ³äíèéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::I));
			this->âõ³äíèéToolStripMenuItem->Size = System::Drawing::Size(267, 26);
			this->âõ³äíèéToolStripMenuItem->Text = L"Âõ³äíèé";
			this->âõ³äíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âõ³äíèéToolStripMenuItem_Click);
			// 
			// âèõ³äíèéToolStripMenuItem
			// 
			this->âèõ³äíèéToolStripMenuItem->Name = L"âèõ³äíèéToolStripMenuItem";
			this->âèõ³äíèéToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::O));
			this->âèõ³äíèéToolStripMenuItem->Size = System::Drawing::Size(267, 26);
			this->âèõ³äíèéToolStripMenuItem->Text = L"Âèõ³äíèé";
			this->âèõ³äíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äíèéToolStripMenuItem_Click);
			// 
			// çáåğåãòèToolStripMenuItem
			// 
			this->çáåğåãòèToolStripMenuItem->Name = L"çáåğåãòèToolStripMenuItem";
			this->çáåğåãòèToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->çáåğåãòèToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->çáåğåãòèToolStripMenuItem->Text = L"Çáåğåãòè";
			this->çáåğåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèßêToolStripMenuItem
			// 
			this->çáåğåãòèßêToolStripMenuItem->Name = L"çáåğåãòèßêToolStripMenuItem";
			this->çáåğåãòèßêToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->çáåğåãòèßêToolStripMenuItem->Text = L"Çáåğåãòè ÿê...";
			this->çáåğåãòèßêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèßêToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem_Click);
			// 
			// fileText
			// 
			this->fileText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->fileText->BackColor = System::Drawing::Color::DimGray;
			this->fileText->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->fileText->Location = System::Drawing::Point(0, 25);
			this->fileText->Multiline = true;
			this->fileText->Name = L"fileText";
			this->fileText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->fileText->Size = System::Drawing::Size(430, 318);
			this->fileText->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(430, 371);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->fileText);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(422, 342);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ôàéë";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->panel1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(422, 342);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Çîáğàæåííÿ";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 309);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Â³äêğèòè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Çáåğåãòè";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 303);
			this->panel1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(430, 303);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->dataGridView1);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label2);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->textBox2);
			this->tabPage3->Controls->Add(this->textBox1);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(422, 342);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Îäíîâèì³ğíèé ìàñèâ";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(136, 280);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 50);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Î÷èñòèòè";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->col_R,
					this->col_V
			});
			this->dataGridView1->Location = System::Drawing::Point(171, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(243, 181);
			this->dataGridView1->TabIndex = 6;
			// 
			// col_R
			// 
			this->col_R->HeaderText = L"R";
			this->col_R->MinimumWidth = 6;
			this->col_R->Name = L"col_R";
			this->col_R->Width = 30;
			// 
			// col_V
			// 
			this->col_V->HeaderText = L"V";
			this->col_V->MinimumWidth = 6;
			this->col_V->Name = L"col_V";
			this->col_V->Width = 148;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(136, 224);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 50);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Îá÷èñëèòè";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Ä³àìåòğ ê³íö.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ä³àìåòğ ïî÷.";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(110, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 22);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->textBox3);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(422, 342);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Ìàòğèöÿ";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(162, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 43);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Î÷èñòèòè";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ğîçì³ğ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(66, 7);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 22);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(159, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ïåğøà ìàòğèöÿ";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(162, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 43);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Äàë³";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(95, 62);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(240, 180);
			this->dataGridView2->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"R";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"V";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(430, 371);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Áóëêà Àíäğ³é ²ÏÇ-25";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->RowHeadersVisible = false;
	dataGridView2->RowHeadersVisible = false;
	dataGridView2->ColumnHeadersVisible = false;
}
private: void open() {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		content = System::IO::File::ReadAllText(openFileDialog->FileName);
		filePath = openFileDialog->FileName;
		fileText->Text = content;
	}

}
private: void save() {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		filePath = saveFileDialog->FileName;
		System::IO::File::WriteAllText(filePath, fileText->Text);
	}
}
		String^ filePath = nullptr;
		String^ content;
private: System::Void âõ³äíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	open();
}

private: System::Void çáåğåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::IO::File::WriteAllText(filePath, fileText->Text);
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Ïîìèëêà ïğè çáåğåæåíí³ ôàéëó: " + ex->Message);
	}
}
private: System::Void çáåğåãòèßêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	save();
}
private: System::Void âèõ³äíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {

		String^ text = fileText->Text;
		String^ directoryPath;
		String^ outputFilePath;
		if (filePath != nullptr) {
			directoryPath = System::IO::Path::GetDirectoryName(filePath);
			outputFilePath = System::IO::Path::Combine(directoryPath, "output.txt");
		}

		array<wchar_t>^ separators = gcnew array<wchar_t> { ' ', '\n', '\r', '\t' };
		array<String^>^ stringNumbers = text->Split(separators, StringSplitOptions::RemoveEmptyEntries);

		if (stringNumbers->Length == 0) {
			MessageBox::Show("Ôàéë ïîğîæí³é àáî íå ì³ñòèòü ÷èñåë!");
			return;
		}

		double sum = 0;
		double lastNumber = 0;

		for (int i = 0; i < stringNumbers->Length; i++) {
			double num = Double::Parse(stringNumbers[i]->Replace('.', ','));
			sum += num;

			if (i == stringNumbers->Length - 1) {
				lastNumber = num;
			}
		}

		String^ resultText = text + "\r\n\r\n" +
			"--- ĞÅÇÓËÜÒÀÒÈ ĞÎÁÎÒÈ ---\r\n" +
			"Ñóìà êîìïîíåíò: " + sum.ToString() + "\r\n" +
			"Îñòàíí³é êîìïîíåíò: " + lastNumber.ToString();

		fileText->Text = resultText;
		if (outputFilePath != nullptr) {
			System::IO::File::WriteAllText(outputFilePath, resultText);
		}
		else {
			save();
		}
	}
	catch (System::Exception^ ex) {
		MessageBox::Show("Ïîìèëêà ïğè îá÷èñëåíí³ (ìîæëèâî, ó ôàéë³ º ë³òåğè, à íå ÷èñëà): " + ex->Message,
			"Ïîìèëêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Image files (*.jpg;*.jpeg;*.png;*.gif)|*.jpg;*.jpeg;*.png;*.gif|All files (*.*)|*.*";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		pictureBox1->Image = Image::FromFile(openFileDialog->FileName);
		panel1->AutoScroll = true;
		pictureBox1->SizeMode = PictureBoxSizeMode::AutoSize;
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
	saveFileDialog->Filter = "PNG Image|*.png|JPEG Image|*.jpg|Bitmap Image|*.bmp|GIF Image|*.gif";
	if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::Drawing::Imaging::ImageFormat^ format = nullptr;
		String^ extension = System::IO::Path::GetExtension(saveFileDialog->FileName)->ToLower();
		if (extension == ".png")
			format = System::Drawing::Imaging::ImageFormat::Png;
		else if (extension == ".jpg" || extension == ".jpeg")
			format = System::Drawing::Imaging::ImageFormat::Jpeg;
		else if (extension == ".gif")
			format = System::Drawing::Imaging::ImageFormat::Gif;
		if (format != nullptr && pictureBox1->Image != nullptr)
		{
			pictureBox1->Image->Save(saveFileDialog->FileName, format);
		}
	}
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double R = Convert::ToDouble(textBox1->Text);
	double R2 = Convert::ToDouble(textBox2->Text);
	if (R2 < R) {
		double temp = R;
		R = R2;
		R2 = temp;
	}
	double n = 0.0018;
	double dP = 0.02;
	double l = 2;

	array<double>^ V = gcnew array<double>((int)(R2 - R + 1));

	for (int i = 0; i < V->Length; i++)
	{
		double currentR = R + i;
		V[i] = (3.14159 * pow(currentR, 4)) / (double)(8 * n * l) * dP;
	}
	for (int i = 0; i < V->Length; i++) {
		dataGridView1->Rows->Add(R + i, V[i]);
	}
}

private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	   int size = 0;
	   array<int, 2>^ first;
	   array<int, 2>^ second;
	   array<int, 2>^ newArr;
	   int step = 0;

	   //öèêë³÷íå ñòâîğåííÿ ìàòğèöü
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (step == 0) {
		try {
			size = Convert::ToInt32(textBox3->Text);
			if (size <= 0) throw gcnew Exception("Ğîçì³ğ ìàº áóòè á³ëüøå 0");
		}
		catch (Exception^) {
			MessageBox::Show("Ââåä³òü êîğåêòíèé ö³ëèé ğîçì³ğ ìàòğèö³!", "Ïîìèëêà", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		first = gcnew array<int, 2>(size, size);
		second = gcnew array<int, 2>(size, size);
		newArr = gcnew array<int, 2>(size, size);

		Random^ rand = gcnew Random();

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				first[i, j] = rand->Next(-10, 10);
				second[i, j] = rand->Next(-10, 10);
				newArr[i, j] = first[i, j] * second[i, j];
			}
		}

		dataGridView2->RowCount = size;
		dataGridView2->ColumnCount = size;
		for (int i = 0; i < size; i++) {
			dataGridView2->Columns[i]->Width = 40;
		}

		step = 1;
	}
	if (step == 1) {
		label3->Text = "Ïåğøà ìàòğèöÿ";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = first[i, j];
			}
		}
		step = 2;
	}
	else if (step == 2) {
		label3->Text = "Äğóãà ìàòğèöÿ";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = second[i, j];
			}
		}
		step = 3;
	}
	else if (step == 3) {
		label3->Text = "Íîâà ìàòğèöÿ";
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				dataGridView2->Rows[i]->Cells[j]->Value = newArr[i, j];
			}
		}
		step = 1;
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Clear();
	dataGridView2->Rows->Clear();
	step = 0;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	dataGridView1->Rows->Clear();
}
};
}
