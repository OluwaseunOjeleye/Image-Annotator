#pragma once

#include <msclr/marshal.h>
#include <string>

struct Box {
	double x;
	double y;
	double width;
	double height;
	std::string label = "";
};

namespace Annotation_Tool {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		MyForm(void)
		{
			InitializeComponent();

			initialize_Data();
			//
			//TODO: Add the constructor code here
			//
		}

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
	private: System::Windows::Forms::Panel^  panelSideMenu;
	protected:
	private: System::Windows::Forms::Panel^  panelFileSubMenu;


	private: System::Windows::Forms::Button^  btnDir;

	private: System::Windows::Forms::Button^  btnOpen;

	private: System::Windows::Forms::Button^  btnFile;

	private: System::Windows::Forms::Panel^  panelLogo;
	private: System::Windows::Forms::Button^  btnNext;

	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnPrev;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Panel^  panel_Info;

	private: System::Windows::Forms::ListBox^  listBox_BB;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox_label;
	private: System::Windows::Forms::Label^  label_class;


	private: System::Windows::Forms::Panel^  panel_Picture_Box;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


	private: System::Windows::Forms::Button^  btnInfo;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Button^  btn_left_panel;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::ListBox^  listBox_FL;
	private: System::Windows::Forms::Label^  label_Filelist;
	private: System::Windows::Forms::ListBox^  listBox_classes;


	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  btn_Add_Class;



	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  txt_class;
	private: System::Windows::Forms::Button^  btn_Clear;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem1;
	private: System::Windows::Forms::Button^  btnRead;
	private: System::ComponentModel::IContainer^  components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panelSideMenu = (gcnew System::Windows::Forms::Panel());
			this->btn_Clear = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->panelFileSubMenu = (gcnew System::Windows::Forms::Panel());
			this->btnDir = (gcnew System::Windows::Forms::Button());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnFile = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_left_panel = (gcnew System::Windows::Forms::Button());
			this->btnInfo = (gcnew System::Windows::Forms::Button());
			this->panel_Info = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label_Filelist = (gcnew System::Windows::Forms::Label());
			this->listBox_FL = (gcnew System::Windows::Forms::ListBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txt_class = (gcnew System::Windows::Forms::TextBox());
			this->btn_Add_Class = (gcnew System::Windows::Forms::Button());
			this->listBox_label = (gcnew System::Windows::Forms::ListBox());
			this->label_class = (gcnew System::Windows::Forms::Label());
			this->listBox_BB = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel_Picture_Box = (gcnew System::Windows::Forms::Panel());
			this->listBox_classes = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->deleteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnRead = (gcnew System::Windows::Forms::Button());
			this->panelSideMenu->SuspendLayout();
			this->panelFileSubMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel_Info->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel_Picture_Box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelSideMenu
			// 
			this->panelSideMenu->AutoScroll = true;
			this->panelSideMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->panelSideMenu->Controls->Add(this->btn_Clear);
			this->panelSideMenu->Controls->Add(this->btnPrev);
			this->panelSideMenu->Controls->Add(this->btnNext);
			this->panelSideMenu->Controls->Add(this->btnSave);
			this->panelSideMenu->Controls->Add(this->panelFileSubMenu);
			this->panelSideMenu->Controls->Add(this->btnFile);
			this->panelSideMenu->Controls->Add(this->panelLogo);
			this->panelSideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelSideMenu->Location = System::Drawing::Point(0, 0);
			this->panelSideMenu->Name = L"panelSideMenu";
			this->panelSideMenu->Size = System::Drawing::Size(151, 672);
			this->panelSideMenu->TabIndex = 0;
			// 
			// btn_Clear
			// 
			this->btn_Clear->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Clear->FlatAppearance->BorderSize = 0;
			this->btn_Clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Clear->ForeColor = System::Drawing::Color::GhostWhite;
			this->btn_Clear->Location = System::Drawing::Point(0, 530);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btn_Clear->Size = System::Drawing::Size(151, 60);
			this->btn_Clear->TabIndex = 5;
			this->btn_Clear->Text = L"Clear";
			this->btn_Clear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &MyForm::btn_Clear_Click);
			// 
			// btnPrev
			// 
			this->btnPrev->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPrev->FlatAppearance->BorderSize = 0;
			this->btnPrev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrev->ForeColor = System::Drawing::Color::GhostWhite;
			this->btnPrev->Location = System::Drawing::Point(0, 470);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnPrev->Size = System::Drawing::Size(151, 60);
			this->btnPrev->TabIndex = 4;
			this->btnPrev->Text = L"Prev Image";
			this->btnPrev->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPrev->UseVisualStyleBackColor = true;
			this->btnPrev->Click += gcnew System::EventHandler(this, &MyForm::btnPrev_Click);
			// 
			// btnNext
			// 
			this->btnNext->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnNext->FlatAppearance->BorderSize = 0;
			this->btnNext->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNext->ForeColor = System::Drawing::Color::GhostWhite;
			this->btnNext->Location = System::Drawing::Point(0, 410);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnNext->Size = System::Drawing::Size(151, 60);
			this->btnNext->TabIndex = 3;
			this->btnNext->Text = L"Next Image";
			this->btnNext->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNext->UseVisualStyleBackColor = true;
			this->btnNext->Click += gcnew System::EventHandler(this, &MyForm::btnNext_Click);
			// 
			// btnSave
			// 
			this->btnSave->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->ForeColor = System::Drawing::Color::GhostWhite;
			this->btnSave->Location = System::Drawing::Point(0, 350);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnSave->Size = System::Drawing::Size(151, 60);
			this->btnSave->TabIndex = 2;
			this->btnSave->Text = L"Save Image";
			this->btnSave->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// panelFileSubMenu
			// 
			this->panelFileSubMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panelFileSubMenu->Controls->Add(this->btnRead);
			this->panelFileSubMenu->Controls->Add(this->btnDir);
			this->panelFileSubMenu->Controls->Add(this->btnOpen);
			this->panelFileSubMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelFileSubMenu->Location = System::Drawing::Point(0, 213);
			this->panelFileSubMenu->Name = L"panelFileSubMenu";
			this->panelFileSubMenu->Size = System::Drawing::Size(151, 137);
			this->panelFileSubMenu->TabIndex = 1;
			this->panelFileSubMenu->Visible = false;
			// 
			// btnDir
			// 
			this->btnDir->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDir->FlatAppearance->BorderSize = 0;
			this->btnDir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDir->ForeColor = System::Drawing::Color::Azure;
			this->btnDir->Location = System::Drawing::Point(0, 41);
			this->btnDir->Name = L"btnDir";
			this->btnDir->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnDir->Size = System::Drawing::Size(151, 41);
			this->btnDir->TabIndex = 1;
			this->btnDir->Text = L"Open Dir";
			this->btnDir->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDir->UseVisualStyleBackColor = true;
			this->btnDir->Click += gcnew System::EventHandler(this, &MyForm::btnDir_Click);
			// 
			// btnOpen
			// 
			this->btnOpen->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnOpen->FlatAppearance->BorderSize = 0;
			this->btnOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpen->ForeColor = System::Drawing::Color::Azure;
			this->btnOpen->Location = System::Drawing::Point(0, 0);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnOpen->Size = System::Drawing::Size(151, 41);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->Text = L"Open";
			this->btnOpen->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &MyForm::btnOpen_Click);
			// 
			// btnFile
			// 
			this->btnFile->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnFile->FlatAppearance->BorderSize = 0;
			this->btnFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFile->ForeColor = System::Drawing::Color::GhostWhite;
			this->btnFile->Location = System::Drawing::Point(0, 153);
			this->btnFile->Name = L"btnFile";
			this->btnFile->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnFile->Size = System::Drawing::Size(151, 60);
			this->btnFile->TabIndex = 0;
			this->btnFile->Text = L"File";
			this->btnFile->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnFile->UseVisualStyleBackColor = true;
			this->btnFile->Click += gcnew System::EventHandler(this, &MyForm::btnFile_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panelLogo.BackgroundImage")));
			this->panelLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(151, 153);
			this->panelLogo->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(146)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel_Info);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(802, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 672);
			this->panel1->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panel2->Controls->Add(this->btn_left_panel);
			this->panel2->Controls->Add(this->btnInfo);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(60, 672);
			this->panel2->TabIndex = 7;
			// 
			// btn_left_panel
			// 
			this->btn_left_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_left_panel->FlatAppearance->BorderSize = 0;
			this->btn_left_panel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_left_panel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_left_panel->ForeColor = System::Drawing::Color::GhostWhite;
			this->btn_left_panel->Location = System::Drawing::Point(0, 333);
			this->btn_left_panel->Name = L"btn_left_panel";
			this->btn_left_panel->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btn_left_panel->Size = System::Drawing::Size(60, 321);
			this->btn_left_panel->TabIndex = 8;
			this->btn_left_panel->Text = L"File";
			this->btn_left_panel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_left_panel->UseVisualStyleBackColor = true;
			this->btn_left_panel->Click += gcnew System::EventHandler(this, &MyForm::btn_left_panel_Click);
			// 
			// btnInfo
			// 
			this->btnInfo->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnInfo->FlatAppearance->BorderSize = 0;
			this->btnInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInfo->ForeColor = System::Drawing::Color::GhostWhite;
			this->btnInfo->Location = System::Drawing::Point(0, 0);
			this->btnInfo->Name = L"btnInfo";
			this->btnInfo->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnInfo->Size = System::Drawing::Size(60, 333);
			this->btnInfo->TabIndex = 5;
			this->btnInfo->Text = L"Info";
			this->btnInfo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnInfo->UseVisualStyleBackColor = true;
			this->btnInfo->Click += gcnew System::EventHandler(this, &MyForm::btnInfo_Click);
			// 
			// panel_Info
			// 
			this->panel_Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->panel_Info->Controls->Add(this->panel4);
			this->panel_Info->Controls->Add(this->panel3);
			this->panel_Info->Controls->Add(this->listBox_label);
			this->panel_Info->Controls->Add(this->label_class);
			this->panel_Info->Controls->Add(this->listBox_BB);
			this->panel_Info->Controls->Add(this->label1);
			this->panel_Info->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel_Info->Location = System::Drawing::Point(60, 0);
			this->panel_Info->Name = L"panel_Info";
			this->panel_Info->Size = System::Drawing::Size(235, 672);
			this->panel_Info->TabIndex = 6;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label_Filelist);
			this->panel4->Controls->Add(this->listBox_FL);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 412);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(235, 251);
			this->panel4->TabIndex = 21;
			// 
			// label_Filelist
			// 
			this->label_Filelist->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_Filelist->Location = System::Drawing::Point(0, 0);
			this->label_Filelist->Name = L"label_Filelist";
			this->label_Filelist->Size = System::Drawing::Size(235, 26);
			this->label_Filelist->TabIndex = 17;
			this->label_Filelist->Text = L"File List";
			this->label_Filelist->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox_FL
			// 
			this->listBox_FL->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox_FL->FormattingEnabled = true;
			this->listBox_FL->HorizontalScrollbar = true;
			this->listBox_FL->ItemHeight = 25;
			this->listBox_FL->Location = System::Drawing::Point(0, 22);
			this->listBox_FL->Name = L"listBox_FL";
			this->listBox_FL->Size = System::Drawing::Size(235, 229);
			this->listBox_FL->TabIndex = 18;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->txt_class);
			this->panel3->Controls->Add(this->btn_Add_Class);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 382);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(235, 30);
			this->panel3->TabIndex = 20;
			// 
			// txt_class
			// 
			this->txt_class->Dock = System::Windows::Forms::DockStyle::Left;
			this->txt_class->Location = System::Drawing::Point(0, 0);
			this->txt_class->Name = L"txt_class";
			this->txt_class->Size = System::Drawing::Size(142, 30);
			this->txt_class->TabIndex = 20;
			// 
			// btn_Add_Class
			// 
			this->btn_Add_Class->BackColor = System::Drawing::SystemColors::Control;
			this->btn_Add_Class->Dock = System::Windows::Forms::DockStyle::Right;
			this->btn_Add_Class->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Add_Class->Location = System::Drawing::Point(142, 0);
			this->btn_Add_Class->Name = L"btn_Add_Class";
			this->btn_Add_Class->Size = System::Drawing::Size(93, 30);
			this->btn_Add_Class->TabIndex = 19;
			this->btn_Add_Class->Text = L"Add Class";
			this->btn_Add_Class->UseVisualStyleBackColor = false;
			this->btn_Add_Class->Click += gcnew System::EventHandler(this, &MyForm::btn_Add_Class_Click);
			// 
			// listBox_label
			// 
			this->listBox_label->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox_label->FormattingEnabled = true;
			this->listBox_label->ItemHeight = 25;
			this->listBox_label->Location = System::Drawing::Point(0, 228);
			this->listBox_label->Name = L"listBox_label";
			this->listBox_label->Size = System::Drawing::Size(235, 154);
			this->listBox_label->TabIndex = 16;
			this->listBox_label->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_label_MouseUp);
			// 
			// label_class
			// 
			this->label_class->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_class->Location = System::Drawing::Point(0, 191);
			this->label_class->Name = L"label_class";
			this->label_class->Size = System::Drawing::Size(235, 37);
			this->label_class->TabIndex = 15;
			this->label_class->Text = L"Classes";
			this->label_class->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox_BB
			// 
			this->listBox_BB->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox_BB->FormattingEnabled = true;
			this->listBox_BB->ItemHeight = 25;
			this->listBox_BB->Location = System::Drawing::Point(0, 37);
			this->listBox_BB->Name = L"listBox_BB";
			this->listBox_BB->Size = System::Drawing::Size(235, 154);
			this->listBox_BB->TabIndex = 14;
			this->listBox_BB->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_BB_MouseClick);
			this->listBox_BB->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_BB_MouseUp);
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 37);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Bound Boxes";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_Picture_Box
			// 
			this->panel_Picture_Box->AutoScroll = true;
			this->panel_Picture_Box->AutoSize = true;
			this->panel_Picture_Box->BackColor = System::Drawing::Color::White;
			this->panel_Picture_Box->Controls->Add(this->listBox_classes);
			this->panel_Picture_Box->Controls->Add(this->pictureBox1);
			this->panel_Picture_Box->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_Picture_Box->Location = System::Drawing::Point(151, 0);
			this->panel_Picture_Box->Name = L"panel_Picture_Box";
			this->panel_Picture_Box->Size = System::Drawing::Size(651, 672);
			this->panel_Picture_Box->TabIndex = 3;
			// 
			// listBox_classes
			// 
			this->listBox_classes->FormattingEnabled = true;
			this->listBox_classes->ItemHeight = 25;
			this->listBox_classes->Location = System::Drawing::Point(352, 254);
			this->listBox_classes->Name = L"listBox_classes";
			this->listBox_classes->Size = System::Drawing::Size(120, 79);
			this->listBox_classes->TabIndex = 4;
			this->listBox_classes->Visible = false;
			this->listBox_classes->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox_classes_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(645, 651);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseEnter += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseEnter);
			this->pictureBox1->MouseLeave += gcnew System::EventHandler(this, &MyForm::pictureBox1_MouseLeave);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pictureBox1_MouseUp);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->deleteToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(133, 34);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(132, 30);
			this->deleteToolStripMenuItem->Text = L"delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->deleteToolStripMenuItem1 });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(133, 34);
			// 
			// deleteToolStripMenuItem1
			// 
			this->deleteToolStripMenuItem1->Name = L"deleteToolStripMenuItem1";
			this->deleteToolStripMenuItem1->Size = System::Drawing::Size(132, 30);
			this->deleteToolStripMenuItem1->Text = L"delete";
			this->deleteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem1_Click);
			// 
			// btnRead
			// 
			this->btnRead->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnRead->FlatAppearance->BorderSize = 0;
			this->btnRead->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRead->ForeColor = System::Drawing::Color::Azure;
			this->btnRead->Location = System::Drawing::Point(0, 82);
			this->btnRead->Name = L"btnRead";
			this->btnRead->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnRead->Size = System::Drawing::Size(151, 41);
			this->btnRead->TabIndex = 2;
			this->btnRead->Text = L"Read Files";
			this->btnRead->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRead->UseVisualStyleBackColor = true;
			this->btnRead->Click += gcnew System::EventHandler(this, &MyForm::btnRead_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1097, 672);
			this->Controls->Add(this->panel_Picture_Box);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelSideMenu);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->MinimumSize = System::Drawing::Size(942, 649);
			this->Name = L"MyForm";
			this->Text = L"Annotation Tool";
			this->panelSideMenu->ResumeLayout(false);
			this->panelFileSubMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel_Info->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel_Picture_Box->ResumeLayout(false);
			this->panel_Picture_Box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

#pragma region left_menu
	private:
		//Left Menu Member data
		array<String^>^ files;
		int image_index=-1;
		bool is_read = false;

		//Method for hiding left Menu
		void hide_Left_Panels() {
			if (panelFileSubMenu->Visible) panelFileSubMenu->Visible = false;
		}

		//Method for displaying left Menu
		void show_left_Panel(Panel ^panel) {
			if (panel->Visible == false) {
				hide_Left_Panels();
				panel->Visible = true;
			}
			else {
				panel->Visible = false;
			}
		}
		
		//Method for displaying submenu- Openfile and Directory
		System::Void btnFile_Click(System::Object^  sender, System::EventArgs^  e) {
			show_left_Panel(panelFileSubMenu);
		}

		//Method for loading an image
		System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			}

			files = gcnew array<String^>{openFileDialog1->FileName};
			image_index = 0;
			is_read = false;

			listBox_FL->Items->Clear();
			listBox_FL->Items->Add(openFileDialog1->FileName);
			listBox_FL->SetSelected(image_index, true);
			hide_Left_Panels();
		}

		//Method for loading images in a directory
		System::Void btnDir_Click(System::Object^  sender, System::EventArgs^  e) {
			System::IO::DirectoryInfo^ info = gcnew System::IO::DirectoryInfo(System::IO::Directory::GetCurrentDirectory());
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				files = System::IO::Directory::GetFiles(folderBrowserDialog1->SelectedPath);
			}

			if (files->Length == 0) {
				MessageBox::Show("No file");
				return;
			}

			listBox_FL->Items->Clear();
			for (int i = 0; i < files->Length; i++) {
				listBox_FL->Items->Add(files[i]->ToString());
			}

			clear();
			image_index=0;
			is_read = false;
			pictureBox1->Image = Image::FromFile(files[image_index]);
			listBox_FL->SetSelected(image_index, true);
			
			hide_Left_Panels();
		}

		//Display Next Image
		System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
			if (image_index==-1) return;
			is_read? image_index+=2:image_index++;
			if (image_index >= files->Length) image_index = 0;

			clear();
			pictureBox1->Image = Image::FromFile(files[image_index]);
			listBox_FL->SetSelected(image_index, true);

			//if(is_read) this->Bound_Boxes = Load_Bound_Boxes(files[image_index + 1]);
		}

		//Display Previous Image
		System::Void btnPrev_Click(System::Object^  sender, System::EventArgs^  e) {
			if (image_index == -1) return;
			is_read ? image_index -= 2 : image_index--;
			if (image_index <= -1) image_index = is_read ? files->Length - 2 : files->Length - 1; ;

			clear();
			pictureBox1->Image = Image::FromFile(files[image_index]);
			listBox_FL->SetSelected(image_index, true);

			//if (is_read) this->Bound_Boxes = Load_Bound_Boxes(files[image_index + 1]);
		}

		//Clear Button
		System::Void btn_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
			clear();
		}

		//Clear Member Data Method
		void clear() {
			no_Bound_Boxes = 0;

			selectedBox = 0;
			selected_box_index = -1;

			listBox_BB->Items->Clear();
			pictureBox1->Invalidate();
		}

		//Save Method-Save Bound boxes data in file using YOLO Format
		System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ pics = "files/" + System::IO::Path::GetFileName(files[image_index]);
			System::IO::File::Copy(files[image_index], pics);

			String^ fname = System::IO::Path::GetFileNameWithoutExtension(files[image_index]);
			fname = "files/" + fname + ".txt";

			StreamWriter^ sw = gcnew StreamWriter(fname);
			sw->WriteLine(pictureBox1->Width + " " + pictureBox1->Height);

			int no_labels = labels->ToArray()->Length;
			for (int i = 0; i < no_Bound_Boxes; i++) {
				int label_id, j;
				for (j = 0; j < no_labels; j++) {
					if (labels[j] == gcnew String(Bound_Boxes[i].label.c_str())) {
						label_id = j;
						break;
					}
				}
				if (j == no_labels) label_id = -1; //if no label

				sw->WriteLine(Bound_Boxes[i].x.ToString() + " " +
					Bound_Boxes[i].y.ToString() + " " +
					Bound_Boxes[i].width.ToString() + " " +
					Bound_Boxes[i].height.ToString() + " " + label_id
				);
			}
			sw->Close();
			MessageBox::Show("Saved");
		}

		//Loading boundboxes from annotated file
		void Load_Bound_Boxes() {

		}

		//Reading Annotated Files
		System::Void btnRead_Click(System::Object^  sender, System::EventArgs^  e) {
			System::IO::DirectoryInfo^ info = gcnew System::IO::DirectoryInfo(System::IO::Directory::GetCurrentDirectory());
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				files = System::IO::Directory::GetFiles(folderBrowserDialog1->SelectedPath); //only txt
			}

			if (files->Length == 0) {
				MessageBox::Show("No file");
				return;
			}

			listBox_FL->Items->Clear();
			for (int i = 0; i < files->Length; i++) {
				listBox_FL->Items->Add(files[i]->ToString());
			}

			clear();
			image_index = 0;
			is_read = true;

			pictureBox1->Image = Image::FromFile(files[image_index]);
			listBox_FL->SetSelected(image_index, true);

			//this->Bound_Boxes = Load_Bound_Boxes(files[image_index + 1]);
		}


#pragma endregion

#pragma region right_menu
	private:
		//Method for Displaying Right Menu
		System::Void btnInfo_Click(System::Object^  sender, System::EventArgs^  e) {
			if (panel_Info->Visible == false) {
				panel_Info->Visible = true;
			}
			else {
				panel_Info->Visible = false;
			}
		}

		//Method for Displaying Left Menu
		System::Void btn_left_panel_Click(System::Object^  sender, System::EventArgs^  e) {
			if (panelSideMenu->Visible == false) {
				panelSideMenu->Visible = true;
			}
			else {
				panelSideMenu->Visible = false;
			}
		}

		//When Bound Box is selected in listbox
		System::Void listBox_BB_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			int i = listBox_BB->IndexFromPoint(e->Location);
			if (i != ListBox::NoMatches){
				if (i>=0 && i<no_Bound_Boxes) {
					selectedBox = &Bound_Boxes[i];
					pictureBox1->Invalidate();
				}
			}
		}

		//Context Menu Method for deleting bound box from boundbox_list
		System::Void deleteToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
			Delete_Box();
		}

		//When Bound Box list is rightt clicked, Select and Display Delete Context Menu
		System::Void listBox_BB_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) return;

			if (listBox_BB->IndexFromPoint(e->Location) >= 0) {
				listBox_BB->SelectedIndex = listBox_BB->IndexFromPoint(e->Location);
				selectedBox = &Bound_Boxes[listBox_BB->SelectedIndex];
				selected_box_index = listBox_BB->SelectedIndex;
				pictureBox1->Invalidate();

				contextMenuStrip2->Show(listBox_BB, e->Location);
			}
		}

		//When Add class button is clicked
		Void btn_Add_Class_Click(System::Object^  sender, System::EventArgs^  e) {
			if (txt_class->Text=="") return;
			labels->Add(txt_class->Text);
			listBox_label->Items->Add(txt_class->Text);
			txt_class->Text = "";
		}

		//Delete Class Context Menu Method
		System::Void deleteToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			labels->RemoveAt(listBox_label->SelectedIndex);
			listBox_label->Items->Clear();
			listBox_label->Items->AddRange(labels->ToArray());
		}

		//When a class is right clicked in listbox_label
		System::Void listBox_label_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) return;

			if (listBox_label->IndexFromPoint(e->Location) >= 0) {
				listBox_label->SelectedIndex = listBox_label->IndexFromPoint(e->Location);
				contextMenuStrip1->Show(listBox_label, e->Location);
			}
		}

#pragma endregion 

#pragma region center_PictureBox
	private:
		//Member Data
		//Bound Boxes
		Box *Bound_Boxes;
		int no_Bound_Boxes;

		//Selected Box
		Box *selectedBox=0;
		int selected_box_index;

		//Labels
		List<String^>^ labels;

		//Mouse
		Point MouseDown_point;
		Point current_point;
		bool leftMouseButtonIsDown;

		//initiializing member data
		void initialize_Data() {
			no_Bound_Boxes = 0;

			selectedBox = 0;
			selected_box_index = -1;

			labels= gcnew List<String^>();
		}

		//Method for adding a new box
		void Add_Box(Box newbox) {
			Box *temp;
			temp = Bound_Boxes;
			no_Bound_Boxes++;
			Bound_Boxes = new Box[no_Bound_Boxes];

			//adding old elements
			for (int i = 0; i < no_Bound_Boxes - 1; i++) {
				Bound_Boxes[i].x = temp[i].x;
				Bound_Boxes[i].y = temp[i].y;
				Bound_Boxes[i].width = temp[i].width;
				Bound_Boxes[i].height = temp[i].height;
				Bound_Boxes[i].label = temp[i].label;
			}

			//adding new box
			Bound_Boxes[no_Bound_Boxes - 1].x=newbox.x;
			Bound_Boxes[no_Bound_Boxes - 1].y = newbox.y;
			Bound_Boxes[no_Bound_Boxes - 1].width = newbox.width;
			Bound_Boxes[no_Bound_Boxes - 1].height = newbox.height;
			Bound_Boxes[no_Bound_Boxes - 1].label = newbox.label;

			selectedBox = 0;
			update_Listbox_BB();
		}

		//Method for deleting selected box
		void Delete_Box() {
			Box *temp;
			temp = Bound_Boxes;
			Bound_Boxes = new Box[no_Bound_Boxes-1];

			//adding old elements
			int c = 0;
			for (int i = 0; i < no_Bound_Boxes; i++) {
				if (i != selected_box_index) {
					Bound_Boxes[c].x = temp[i].x;
					Bound_Boxes[c].y = temp[i].y;
					Bound_Boxes[c].width = temp[i].width;
					Bound_Boxes[c].height = temp[i].height;
					Bound_Boxes[c].label = temp[i].label;
					c++;
				}
			}
			no_Bound_Boxes--;
			selectedBox = 0;
			update_Listbox_BB();
			pictureBox1->Invalidate();
		}

		//editing picture box right-click menu
		void view_option(Point p) {
			listBox_classes->Location = Point(pictureBox1->PointToScreen(p).X - 10, pictureBox1->PointToScreen(p).Y - 10);
			listBox_classes->Items->Clear();
			listBox_classes->Items->AddRange(labels->ToArray());
			listBox_classes->Items->Add("Delete Box");
			listBox_classes->Visible = true;
		}

		//updating bound boxes listbox
		void update_Listbox_BB() {
			listBox_BB->Items->Clear();
			for (int i = 0; i < no_Bound_Boxes; i++) {
				listBox_BB->Items->Add("(" + Bound_Boxes[i].x + ", " + Bound_Boxes[i].y + ", " + Bound_Boxes[i].width + ", " + Bound_Boxes[i].height + ")" + " - " + gcnew String(Bound_Boxes[i].label.c_str()));
			}
		}
		
		//Painting Picturebox Method
		System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			Graphics ^graphics = e->Graphics;

			//Draing cross x-y
			Pen ^pen = gcnew Pen(Color::Black);
			graphics->DrawLine(pen, current_point.X, 0, current_point.X, pictureBox1->Height);
			graphics->DrawLine(pen, 0, current_point.Y, pictureBox1->Width, current_point.Y);

			//Drawing Current Bound Box
			pen = gcnew Pen(Color::Red);
			if (leftMouseButtonIsDown) {
				graphics->DrawRectangle(pen, Math::Min(MouseDown_point.X, current_point.X),
										Math::Min(MouseDown_point.Y, current_point.Y),
										Math::Abs(MouseDown_point.X - current_point.X),
										Math::Abs(MouseDown_point.Y - current_point.Y));
			}

			//Drawing Bound Boxes
			for (int i = 0; i < no_Bound_Boxes; i++) {
				graphics->DrawRectangle(pen, (int)Bound_Boxes[i].x, (int)Bound_Boxes[i].y,
										Bound_Boxes[i].width, Bound_Boxes[i].height);
			}

			//Selecting Bound Box
			if (selectedBox != 0) {
				SolidBrush ^brush = gcnew SolidBrush(Color::FromArgb(30, 0, 255, 0));
				graphics->FillRectangle(brush, (int)selectedBox->x, (int)selectedBox->y, selectedBox->width, selectedBox->height);
			}
			
		}

		//On Mouse Down
		System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			if (e->Button != System::Windows::Forms::MouseButtons::Left) {	//On right-click, select box
				int i;
				for (i = 0; i < no_Bound_Boxes; i++) {
					if ((e->X >= Bound_Boxes[i].x && e->X <= Bound_Boxes[i].x + Bound_Boxes[i].width) &&
						(e->Y >= Bound_Boxes[i].y && e->Y <= Bound_Boxes[i].y + Bound_Boxes[i].height)) {
						break;
					}
				}

				if (i != no_Bound_Boxes) {	//when box is right clicked
					selectedBox = &Bound_Boxes[i];
					selected_box_index = i;
					pictureBox1->Invalidate();
					view_option(e->Location); //viewing class options
				}
				else { //when box not right clicked
					selectedBox = 0;
					selected_box_index = -1;
					listBox_classes->Visible = false;
				}
				
				return;
			}

			//On Left-Click
			leftMouseButtonIsDown = true;
			MouseDown_point =current_point = e->Location;
			pictureBox1->Invalidate();
		}

		//On Mouse Up
		System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			if (e->Button != System::Windows::Forms::MouseButtons::Left) return; //if not left-click

			//If left click
			//Bound box is drawn
			if (current_point != MouseDown_point) {
				int x = Math::Min(MouseDown_point.X, current_point.X);
				int y = Math::Min(MouseDown_point.Y, current_point.Y);

				//checking constraints x and y
				if (x < 0) x = 0;	
				if (y < 0) y = 0;

				double width = Math::Abs(MouseDown_point.X - current_point.X);
				double height = Math::Abs(MouseDown_point.Y - current_point.Y);

				//checking constraints width and height
				if (x + width > pictureBox1->Width) width = pictureBox1->Width - x;
				if (y + height > pictureBox1->Height) height = pictureBox1->Height - y;

				Box new_Box = {x, y, width, height, "no_class" };
				Add_Box(new_Box); //Adding new box
				selectedBox = &Bound_Boxes[no_Bound_Boxes-1];
				selected_box_index = no_Bound_Boxes - 1;
				view_option(MouseDown_point);
			}
			else {	//Boundbox is selected
				for (int i = 0; i < no_Bound_Boxes; i++) {
					if ((e->X >= Bound_Boxes[i].x && e->X <= Bound_Boxes[i].x + Bound_Boxes[i].width) &&
						(e->Y >= Bound_Boxes[i].y && e->Y <= Bound_Boxes[i].y + Bound_Boxes[i].height)) {
						selectedBox = &Bound_Boxes[i];
						selected_box_index = i;
						break;
					}
				}
			}

			leftMouseButtonIsDown = false;
			pictureBox1->Invalidate();
		}
		
		//When mouse is moved
		System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			current_point = e->Location;
			pictureBox1->Invalidate();
		}

		//When mouse enters picturebox
		System::Void pictureBox1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			pictureBox1->Cursor = Cursors::Cross;
		}

		//When mouse leaves picturebox
		System::Void pictureBox1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			pictureBox1->Cursor = Cursors::Default;
		}

		//Picture Box Right-click Menu for selecting class of bound box or for deleting a boundbox
		System::Void listBox_classes_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			if (listBox_classes->SelectedIndex != -1) {	//if a class is selected
				if (listBox_classes->SelectedIndex != listBox_classes->Items->Count-1) {	//if not delete
					msclr::interop::marshal_context ^ context = gcnew msclr::interop::marshal_context();
					Bound_Boxes[selected_box_index].label = context->marshal_as<const char*>(listBox_classes->SelectedItem->ToString());
				}
				else { //if delete box
					Delete_Box();
				}
				
			}
			update_Listbox_BB();
			listBox_classes->Visible = false;
		}
		
#pragma endregion 

};
}
