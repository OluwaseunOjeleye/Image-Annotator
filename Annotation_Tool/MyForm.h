#pragma once

#include <msclr/marshal.h>
#include <string>

struct Box {
	double x;
	double y;
	double width;
	double height;
	int label=-1;
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
	private: System::Windows::Forms::Button^  btn_Generate;

	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^  deleteToolStripMenuItem1;
	private: System::Windows::Forms::Button^  btnRead;
	private: System::Windows::Forms::Button^  btn_Class;
	private: System::Windows::Forms::Button^  btn_Clear;
	private: System::Windows::Forms::Panel^  panelGenerate;
	private: System::Windows::Forms::Button^  btnYOLO;
	private: System::Windows::Forms::Button^  double_YOLO_btn;
	private: System::Windows::Forms::Button^  btn_YOLO_Read;






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
			this->panelGenerate = (gcnew System::Windows::Forms::Panel());
			this->double_YOLO_btn = (gcnew System::Windows::Forms::Button());
			this->btnYOLO = (gcnew System::Windows::Forms::Button());
			this->btn_Generate = (gcnew System::Windows::Forms::Button());
			this->btnPrev = (gcnew System::Windows::Forms::Button());
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->panelFileSubMenu = (gcnew System::Windows::Forms::Panel());
			this->btn_YOLO_Read = (gcnew System::Windows::Forms::Button());
			this->btn_Class = (gcnew System::Windows::Forms::Button());
			this->btnRead = (gcnew System::Windows::Forms::Button());
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
			this->panelSideMenu->SuspendLayout();
			this->panelGenerate->SuspendLayout();
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
			this->panelSideMenu->Controls->Add(this->panelGenerate);
			this->panelSideMenu->Controls->Add(this->btn_Generate);
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
			this->btn_Clear->Location = System::Drawing::Point(0, 777);
			this->btn_Clear->Name = L"btn_Clear";
			this->btn_Clear->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btn_Clear->Size = System::Drawing::Size(130, 60);
			this->btn_Clear->TabIndex = 8;
			this->btn_Clear->Text = L"Clear";
			this->btn_Clear->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Clear->UseVisualStyleBackColor = true;
			this->btn_Clear->Click += gcnew System::EventHandler(this, &MyForm::btn_Clear_Click);
			// 
			// panelGenerate
			// 
			this->panelGenerate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(161)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->panelGenerate->Controls->Add(this->double_YOLO_btn);
			this->panelGenerate->Controls->Add(this->btnYOLO);
			this->panelGenerate->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelGenerate->Location = System::Drawing::Point(0, 684);
			this->panelGenerate->Name = L"panelGenerate";
			this->panelGenerate->Size = System::Drawing::Size(130, 93);
			this->panelGenerate->TabIndex = 7;
			this->panelGenerate->Visible = false;
			// 
			// double_YOLO_btn
			// 
			this->double_YOLO_btn->Dock = System::Windows::Forms::DockStyle::Top;
			this->double_YOLO_btn->FlatAppearance->BorderSize = 0;
			this->double_YOLO_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->double_YOLO_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->double_YOLO_btn->ForeColor = System::Drawing::Color::Azure;
			this->double_YOLO_btn->Location = System::Drawing::Point(0, 41);
			this->double_YOLO_btn->Name = L"double_YOLO_btn";
			this->double_YOLO_btn->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->double_YOLO_btn->Size = System::Drawing::Size(130, 41);
			this->double_YOLO_btn->TabIndex = 1;
			this->double_YOLO_btn->Text = L"Splitted YOLO";
			this->double_YOLO_btn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->double_YOLO_btn->UseVisualStyleBackColor = true;
			this->double_YOLO_btn->Click += gcnew System::EventHandler(this, &MyForm::double_YOLO_btn_Click);
			// 
			// btnYOLO
			// 
			this->btnYOLO->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnYOLO->FlatAppearance->BorderSize = 0;
			this->btnYOLO->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnYOLO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnYOLO->ForeColor = System::Drawing::Color::Azure;
			this->btnYOLO->Location = System::Drawing::Point(0, 0);
			this->btnYOLO->Name = L"btnYOLO";
			this->btnYOLO->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnYOLO->Size = System::Drawing::Size(130, 41);
			this->btnYOLO->TabIndex = 0;
			this->btnYOLO->Text = L"YOLO Files";
			this->btnYOLO->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnYOLO->UseVisualStyleBackColor = true;
			this->btnYOLO->Click += gcnew System::EventHandler(this, &MyForm::btnYOLO_Click);
			// 
			// btn_Generate
			// 
			this->btn_Generate->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Generate->FlatAppearance->BorderSize = 0;
			this->btn_Generate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Generate->ForeColor = System::Drawing::Color::GhostWhite;
			this->btn_Generate->Location = System::Drawing::Point(0, 624);
			this->btn_Generate->Name = L"btn_Generate";
			this->btn_Generate->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btn_Generate->Size = System::Drawing::Size(130, 60);
			this->btn_Generate->TabIndex = 5;
			this->btn_Generate->Text = L"Generate";
			this->btn_Generate->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Generate->UseVisualStyleBackColor = true;
			this->btn_Generate->Click += gcnew System::EventHandler(this, &MyForm::btn_Generate_Click);
			// 
			// btnPrev
			// 
			this->btnPrev->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnPrev->FlatAppearance->BorderSize = 0;
			this->btnPrev->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrev->ForeColor = System::Drawing::Color::GhostWhite;
			this->btnPrev->Location = System::Drawing::Point(0, 564);
			this->btnPrev->Name = L"btnPrev";
			this->btnPrev->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnPrev->Size = System::Drawing::Size(130, 60);
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
			this->btnNext->Location = System::Drawing::Point(0, 504);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnNext->Size = System::Drawing::Size(130, 60);
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
			this->btnSave->Location = System::Drawing::Point(0, 444);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Padding = System::Windows::Forms::Padding(10, 0, 0, 0);
			this->btnSave->Size = System::Drawing::Size(130, 60);
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
			this->panelFileSubMenu->Controls->Add(this->btn_YOLO_Read);
			this->panelFileSubMenu->Controls->Add(this->btn_Class);
			this->panelFileSubMenu->Controls->Add(this->btnRead);
			this->panelFileSubMenu->Controls->Add(this->btnDir);
			this->panelFileSubMenu->Controls->Add(this->btnOpen);
			this->panelFileSubMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelFileSubMenu->Location = System::Drawing::Point(0, 213);
			this->panelFileSubMenu->Name = L"panelFileSubMenu";
			this->panelFileSubMenu->Size = System::Drawing::Size(130, 231);
			this->panelFileSubMenu->TabIndex = 1;
			this->panelFileSubMenu->Visible = false;
			// 
			// btn_YOLO_Read
			// 
			this->btn_YOLO_Read->FlatAppearance->BorderSize = 0;
			this->btn_YOLO_Read->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_YOLO_Read->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_YOLO_Read->ForeColor = System::Drawing::Color::Azure;
			this->btn_YOLO_Read->Location = System::Drawing::Point(0, 120);
			this->btn_YOLO_Read->Name = L"btn_YOLO_Read";
			this->btn_YOLO_Read->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btn_YOLO_Read->Size = System::Drawing::Size(148, 41);
			this->btn_YOLO_Read->TabIndex = 4;
			this->btn_YOLO_Read->Text = L"Labelled Files (YOLO Format)";
			this->btn_YOLO_Read->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_YOLO_Read->UseVisualStyleBackColor = true;
			this->btn_YOLO_Read->Click += gcnew System::EventHandler(this, &MyForm::btn_YOLO_Read_Click);
			// 
			// btn_Class
			// 
			this->btn_Class->FlatAppearance->BorderSize = 0;
			this->btn_Class->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Class->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Class->ForeColor = System::Drawing::Color::Azure;
			this->btn_Class->Location = System::Drawing::Point(-3, 164);
			this->btn_Class->Name = L"btn_Class";
			this->btn_Class->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btn_Class->Size = System::Drawing::Size(151, 41);
			this->btn_Class->TabIndex = 3;
			this->btn_Class->Text = L"Class File";
			this->btn_Class->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Class->UseVisualStyleBackColor = true;
			this->btn_Class->Click += gcnew System::EventHandler(this, &MyForm::btn_Class_Click);
			// 
			// btnRead
			// 
			this->btnRead->FlatAppearance->BorderSize = 0;
			this->btnRead->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRead->ForeColor = System::Drawing::Color::Azure;
			this->btnRead->Location = System::Drawing::Point(0, 82);
			this->btnRead->Name = L"btnRead";
			this->btnRead->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnRead->Size = System::Drawing::Size(151, 41);
			this->btnRead->TabIndex = 2;
			this->btnRead->Text = L"Labelled Files    (AT Format)";
			this->btnRead->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRead->UseVisualStyleBackColor = true;
			this->btnRead->Click += gcnew System::EventHandler(this, &MyForm::btnRead_Click);
			// 
			// btnDir
			// 
			this->btnDir->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDir->FlatAppearance->BorderSize = 0;
			this->btnDir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDir->ForeColor = System::Drawing::Color::Azure;
			this->btnDir->Location = System::Drawing::Point(0, 41);
			this->btnDir->Name = L"btnDir";
			this->btnDir->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnDir->Size = System::Drawing::Size(130, 41);
			this->btnDir->TabIndex = 1;
			this->btnDir->Text = L"Image Dir";
			this->btnDir->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDir->UseVisualStyleBackColor = true;
			this->btnDir->Click += gcnew System::EventHandler(this, &MyForm::btnDir_Click);
			// 
			// btnOpen
			// 
			this->btnOpen->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnOpen->FlatAppearance->BorderSize = 0;
			this->btnOpen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpen->ForeColor = System::Drawing::Color::Azure;
			this->btnOpen->Location = System::Drawing::Point(0, 0);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Padding = System::Windows::Forms::Padding(35, 0, 0, 0);
			this->btnOpen->Size = System::Drawing::Size(130, 41);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->Text = L"Image";
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
			this->btnFile->Size = System::Drawing::Size(130, 60);
			this->btnFile->TabIndex = 0;
			this->btnFile->Text = L"Open";
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
			this->panelLogo->Size = System::Drawing::Size(130, 153);
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
			this->panel4->Location = System::Drawing::Point(0, 392);
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
			this->listBox_FL->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox_FL->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->listBox_FL->FormattingEnabled = true;
			this->listBox_FL->HorizontalScrollbar = true;
			this->listBox_FL->ItemHeight = 20;
			this->listBox_FL->Location = System::Drawing::Point(0, 27);
			this->listBox_FL->Name = L"listBox_FL";
			this->listBox_FL->Size = System::Drawing::Size(235, 224);
			this->listBox_FL->TabIndex = 18;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->txt_class);
			this->panel3->Controls->Add(this->btn_Add_Class);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 362);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(235, 30);
			this->panel3->TabIndex = 20;
			// 
			// txt_class
			// 
			this->txt_class->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txt_class->Dock = System::Windows::Forms::DockStyle::Left;
			this->txt_class->Location = System::Drawing::Point(0, 0);
			this->txt_class->Name = L"txt_class";
			this->txt_class->Size = System::Drawing::Size(142, 26);
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
			this->listBox_label->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox_label->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox_label->FormattingEnabled = true;
			this->listBox_label->ItemHeight = 20;
			this->listBox_label->Location = System::Drawing::Point(0, 218);
			this->listBox_label->Name = L"listBox_label";
			this->listBox_label->Size = System::Drawing::Size(235, 144);
			this->listBox_label->TabIndex = 16;
			this->listBox_label->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBox_label_MouseUp);
			// 
			// label_class
			// 
			this->label_class->Dock = System::Windows::Forms::DockStyle::Top;
			this->label_class->Location = System::Drawing::Point(0, 181);
			this->label_class->Name = L"label_class";
			this->label_class->Size = System::Drawing::Size(235, 37);
			this->label_class->TabIndex = 15;
			this->label_class->Text = L"Classes";
			this->label_class->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// listBox_BB
			// 
			this->listBox_BB->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox_BB->Dock = System::Windows::Forms::DockStyle::Top;
			this->listBox_BB->FormattingEnabled = true;
			this->listBox_BB->HorizontalScrollbar = true;
			this->listBox_BB->ItemHeight = 20;
			this->listBox_BB->Location = System::Drawing::Point(0, 37);
			this->listBox_BB->Name = L"listBox_BB";
			this->listBox_BB->Size = System::Drawing::Size(235, 144);
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
			this->listBox_classes->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox_classes->FormattingEnabled = true;
			this->listBox_classes->ItemHeight = 20;
			this->listBox_classes->Location = System::Drawing::Point(352, 254);
			this->listBox_classes->Name = L"listBox_classes";
			this->listBox_classes->Size = System::Drawing::Size(120, 64);
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
			this->contextMenuStrip1->Size = System::Drawing::Size(121, 28);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(120, 24);
			this->deleteToolStripMenuItem->Text = L"delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->deleteToolStripMenuItem1 });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(121, 28);
			// 
			// deleteToolStripMenuItem1
			// 
			this->deleteToolStripMenuItem1->Name = L"deleteToolStripMenuItem1";
			this->deleteToolStripMenuItem1->Size = System::Drawing::Size(120, 24);
			this->deleteToolStripMenuItem1->Text = L"delete";
			this->deleteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
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
			this->panelGenerate->ResumeLayout(false);
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

#pragma region center_PictureBox
	private:
		//Member Data
		//All Files BoundBoxes Info
		Box **Images_Bound_Boxes;
		array<int>^ Images_BB_no;

		//Bound Boxes
		Box *Bound_Boxes;	//Current Image displayed Boundbox
		int no_Bound_Boxes;	//Current Image no of Boundboxes

		//Selected Box
		Box *selectedBox = 0;
		int selected_box_index;

		//Labels
		List<String^>^ labels;

		//Mouse
		Point MouseDown_point;
		Point current_point;
		bool leftMouseButtonIsDown;

		//colors
		array<Color> ^color;

		msclr::interop::marshal_context ^ context;

		//initializing member data
		void initialize_Data() {
			no_Bound_Boxes = 0;

			selectedBox = 0;
			selected_box_index = -1;

			labels = gcnew List<String^>();

			color = gcnew array<Color>(10);
			color[0] = Color::Red; color[1] = Color::Green; color[2] = Color::Blue; color[3] = Color::Brown; color[4] = Color::Cyan;
			color[5] = Color::Yellow; color[6] = Color::Indigo; color[7] = Color::Purple; color[8] = Color::Firebrick;

			context = gcnew msclr::interop::marshal_context();
		}

		//Method for adding a new box
		void Add_Box(Box newbox, bool is_update) {
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
			Bound_Boxes[no_Bound_Boxes - 1].x = newbox.x;
			Bound_Boxes[no_Bound_Boxes - 1].y = newbox.y;
			Bound_Boxes[no_Bound_Boxes - 1].width = newbox.width;
			Bound_Boxes[no_Bound_Boxes - 1].height = newbox.height;
			Bound_Boxes[no_Bound_Boxes - 1].label = newbox.label;

			if (image_index >= 0) {
				Images_Bound_Boxes[image_index] = Bound_Boxes;
				Images_BB_no[image_index] = no_Bound_Boxes;
				if(is_update) update_Listbox_BB();
			}
			
			selectedBox = 0;
			
		}

		//Method for deleting selected box
		void Delete_Box() {
			Box *temp;
			temp = Bound_Boxes;
			Bound_Boxes = new Box[no_Bound_Boxes - 1];

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

			if (image_index >= 0) {
				Images_Bound_Boxes[image_index] = Bound_Boxes;
				Images_BB_no[image_index] = no_Bound_Boxes;
				update_Listbox_BB();
			}

			selectedBox = 0;
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
			Bound_Boxes = Images_Bound_Boxes[image_index];
			no_Bound_Boxes=Images_BB_no[image_index];
			for (int i = 0; i < no_Bound_Boxes; i++) {
				String ^class_name;
				if (Bound_Boxes[i].label >= 0 && Bound_Boxes[i].label < labels->ToArray()->Length) class_name = gcnew String(labels[Bound_Boxes[i].label]);
				else class_name = Bound_Boxes[i].label.ToString();

				listBox_BB->Items->Add("(" + Bound_Boxes[i].x + ", " + Bound_Boxes[i].y + ", " + Bound_Boxes[i].width + ", " + Bound_Boxes[i].height + ")" + " - " + class_name);
			}
		}

		//Painting Picturebox Method
		System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			if (files == nullptr)	pictureBox1->Size = panel_Picture_Box->Size; //If no image

			Graphics ^graphics = e->Graphics;
			//Draing cross x-y
			Pen ^pen = gcnew Pen(Color::Black);
			graphics->DrawLine(pen, current_point.X, 0, current_point.X, pictureBox1->Height);
			graphics->DrawLine(pen, 0, current_point.Y, pictureBox1->Width, current_point.Y);

			//Drawing Bound Boxes
			if (image_index >= 0) {		//Current boundboxes to display
				Bound_Boxes = Images_Bound_Boxes[image_index];
				no_Bound_Boxes = Images_BB_no[image_index];
			}

			for (int i = 0; i < no_Bound_Boxes; i++) {
				if (Bound_Boxes[i].label>=0) pen = gcnew Pen(color[Bound_Boxes[i].label]);
				else pen = gcnew Pen(Color::Black);

				graphics->DrawRectangle(pen, (int)Bound_Boxes[i].x, (int)Bound_Boxes[i].y,
					Bound_Boxes[i].width, Bound_Boxes[i].height);
			}

			//Drawing Current Bound Box
			pen = gcnew Pen(Color::Black);
			if (leftMouseButtonIsDown) {
				graphics->DrawRectangle(pen, Math::Min(MouseDown_point.X, current_point.X),
					Math::Min(MouseDown_point.Y, current_point.Y),
					Math::Abs(MouseDown_point.X - current_point.X),
					Math::Abs(MouseDown_point.Y - current_point.Y));
			}

			
			//update_Listbox_BB();

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
			MouseDown_point = current_point = e->Location;
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

				Box new_Box = { x, y, width, height, -1};
				Add_Box(new_Box, true); //Adding new box
				selectedBox = &Bound_Boxes[no_Bound_Boxes - 1];
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
				if (listBox_classes->SelectedIndex != listBox_classes->Items->Count - 1) {	//if not delete
					Bound_Boxes[selected_box_index].label = listBox_classes->SelectedIndex;
				}
				else { //if delete box
					Delete_Box();
				}

			}
			if (image_index >= 0) update_Listbox_BB();
			listBox_classes->Visible = false;
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
			if (panelGenerate->Visible) panelGenerate->Visible = false;
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
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) {
				MessageBox::Show("No file selected");
				return;
			}

			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			files = gcnew array<String^>{openFileDialog1->FileName};

			Images_Bound_Boxes = new Box*[files->Length];
			Images_BB_no= gcnew array<int>(files->Length);

			clear();
			image_index = 0;
			is_read = false;

			listBox_FL->Items->Clear();
			listBox_FL->Items->Add(openFileDialog1->FileName);
			listBox_FL->SetSelected(image_index, true);
			hide_Left_Panels();
		}

		//Method for loading images in a directory
		System::Void btnDir_Click(System::Object^  sender, System::EventArgs^  e) {
			folderBrowserDialog1->SelectedPath = System::IO::Directory::GetCurrentDirectory();
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				files = System::IO::Directory::GetFiles(folderBrowserDialog1->SelectedPath);
			}

			if (files==nullptr) {
				MessageBox::Show("No directory selected");
				return;
			}
			
			Images_Bound_Boxes = new Box*[files->Length];
			Images_BB_no = gcnew array<int>(files->Length);

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

			save_current_image();	//Automatic save

			image_index++;
			if (image_index >= Images_BB_no->Length) image_index = 0;

			clear();
			
			if (!is_read) {
				listBox_FL->SetSelected(image_index, true);
				pictureBox1->Image = Image::FromFile(files[image_index]);
			}
			else {
				listBox_FL->SetSelected(image_index, true);
				pictureBox1->Image = Image::FromFile(files[(2 * image_index)]);
			}

			update_Listbox_BB();
		}

		//Display Previous Image
		System::Void btnPrev_Click(System::Object^  sender, System::EventArgs^  e) {
			if (image_index == -1) return;

			save_current_image();	//Automatic save

			image_index--;
			if (image_index <= -1) image_index = Images_BB_no->Length-1;

			clear();
			if (!is_read) {
				listBox_FL->SetSelected(image_index, true);
				pictureBox1->Image = Image::FromFile(files[image_index]);
			}
			else {
				listBox_FL->SetSelected(image_index, true);
				pictureBox1->Image = Image::FromFile(files[(2 * image_index)]);
			}

			update_Listbox_BB();
		}
		
		//Recheck/Cross Check Function
		void save_current_image() {	
			Images_Bound_Boxes[image_index] = Bound_Boxes;
			Images_BB_no[image_index] = no_Bound_Boxes;

			String^ filename;
			if (!is_read) filename = files[image_index];
			else filename = files[(2*image_index)];

			String^ pics = "files/" + System::IO::Path::GetFileName(filename);
			System::IO::File::Copy(filename, pics, true);

			String^ fname = System::IO::Path::GetFileNameWithoutExtension(filename);
			fname = "files/" + fname + ".txt";

			StreamWriter^ sw = gcnew StreamWriter(fname, false);
			sw->WriteLine(pictureBox1->Width + " " + pictureBox1->Height);

			int no_labels = labels->ToArray()->Length;

			for (int i = 0; i < no_Bound_Boxes; i++) {
				sw->WriteLine(Bound_Boxes[i].x.ToString() + " " +
							Bound_Boxes[i].y.ToString() + " " +
							Bound_Boxes[i].width.ToString() + " " +
							Bound_Boxes[i].height.ToString() + " " +
							Bound_Boxes[i].label.ToString()
				);
			}
			sw->Close();

		}

		//Save Method-Save Bound boxes data in file using YOLO Format
		System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
			if (files == nullptr) {
				MessageBox::Show("No Image");
				return;
			}
			save_current_image();
			MessageBox::Show("Saved");
		}

		//Loading boundboxes from annotation file (AT Format)
		void Load_Bound_Boxes(String ^filename) {
			FILE *file = fopen(context->marshal_as<const char*>(filename->ToString()), "r");
			if (!file) {
				MessageBox::Show("Boundbox file box doesnot exist");
				return;
			}
			int x, y, h, w, width, height, label_index;

			fscanf(file, "%d %d", &width, &height);
			if (Bound_Boxes != NULL) {
				Bound_Boxes=NULL;
				no_Bound_Boxes = 0;
			}
			while (fscanf(file, "%d %d %d %d %d", &x, &y, &w, &h, &label_index) == 5) {
				Box new_box = { x, y, w, h, label_index };
				Add_Box(new_box, false);
			}
			fclose(file);
		}

		//Loading boundboxes from YOLO Files (YOLO Format)
		void YOLO_2_AT_Format(String ^filename) {
			FILE *file = fopen(context->marshal_as<const char*>(filename->ToString()), "r");
			if (!file) {
				MessageBox::Show("Boundbox file box doesnot exist");
				return;
			}
			int label_index, img_width=pictureBox1->Width, img_height=pictureBox1->Height;
			float x, y, h, w;

			if (Bound_Boxes != NULL) {
				Bound_Boxes = NULL;
				no_Bound_Boxes = 0;
			}
			while (fscanf(file, "%d %f %f %f %f", &label_index, &x, &y, &w, &h) == 5) {
				w = w * img_width;
				h = h * img_height;
				x = (x * img_width) - w/2;
				y = (y * img_height) - h/2;

				x = (x < 0) ? 0 : x;
				y = (y < 0) ? 0 : y;

				Box new_box = { x, y, w, h, label_index };
				Add_Box(new_box, false);
			}
			fclose(file);
		}
		//Reading Annotated Files
		void load_Annotation_Files(bool is_AT_FORMAT) {
			folderBrowserDialog1->SelectedPath = System::IO::Directory::GetCurrentDirectory();
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				files = System::IO::Directory::GetFiles(folderBrowserDialog1->SelectedPath); //only txt
			}

			if (files == nullptr) {
				MessageBox::Show("No directory selected");
				return;
			}

			Images_Bound_Boxes = new Box*[files->Length / 2];
			Images_BB_no = gcnew array<int>(files->Length / 2);

			listBox_FL->Items->Clear();
			for (int i = 0; i < files->Length; i += 2) {
				listBox_FL->Items->Add(files[i]->ToString());
			}

			clear();
			image_index = 0;
			is_read = true;

			pictureBox1->Image = Image::FromFile(files[2 * image_index]);
			for (int i = 0; i < files->Length / 2; i++) {
				image_index = i;
				if(is_AT_FORMAT) Load_Bound_Boxes(files[(2*i)+1]);	//Using AT Format
				else YOLO_2_AT_Format(files[(2 * i) + 1]);	//Using YOLO Format
			}

			image_index = 0;
			listBox_FL->SetSelected(image_index, true);
			update_Listbox_BB();
		}

		//Read Annotations - AT FORMAT
		System::Void btnRead_Click(System::Object^  sender, System::EventArgs^  e) {
			load_Annotation_Files(true);
		}

		//Read Annotations - YOLO FORMAT
		private: System::Void btn_YOLO_Read_Click(System::Object^  sender, System::EventArgs^  e) {
			load_Annotation_Files(false);
		}

		//Read Classes
		System::Void btn_Class_Click(System::Object^  sender, System::EventArgs^  e) {
			if (openFileDialog1->ShowDialog() != System::Windows::Forms::DialogResult::OK) {
				return;
			}

			labels->Clear();
			String^ class_name;
			StreamReader^ din = File::OpenText(openFileDialog1->FileName);
			while ((class_name = din->ReadLine()) != nullptr)
			{
				labels->Add(class_name);
			}

			listBox_label->Items->Clear();
			listBox_label->Items->AddRange(labels->ToArray());
		}

		System::Void btn_Generate_Click(System::Object^  sender, System::EventArgs^  e) {
			show_left_Panel(panelGenerate);
		}

		//Generating Yolo Files
		void convert_to_YOLO_Format() {
			String^ filename;
			if (!is_read) filename = files[image_index];
			else filename = files[(2 * image_index)];

			String^ pics = "files_YOLO/" + System::IO::Path::GetFileName(filename);
			System::IO::File::Copy(filename, pics, true);

			String^ fname = System::IO::Path::GetFileNameWithoutExtension(filename);
			fname = "files_YOLO/" + fname + ".txt";

			StreamWriter^ sw = gcnew StreamWriter(fname, false);

			int no_labels = labels->ToArray()->Length;
			int img_width = pictureBox1->Width;
			int img_height = pictureBox1->Height;

			//Note: Annotation tool boundbox format is <x, y, w, h> where <x, y> is the upper-left corner coordinate
			for (int i = 0; i < Images_BB_no[image_index]; i++) {
				if (Images_Bound_Boxes[image_index][i].label < 0) continue;

				//finding boundbox center <x, y>
				double x = Images_Bound_Boxes[image_index][i].x + (Images_Bound_Boxes[image_index][i].width/2.0);
				double y = Images_Bound_Boxes[image_index][i].y + (Images_Bound_Boxes[image_index][i].height/ 2.0);

				x = (x <= 0) ? 0.1 : x;
				y = (y <= 0) ? 0.1 : y;
				//Images_Bound_Boxes[image_index][i].label.ToString() + " " +
				sw->WriteLine("0 " +
					(x / img_width).ToString() + " " +
					(y / img_height).ToString() + " " +
					(Images_Bound_Boxes[image_index][i].width / img_width).ToString() + " " +
					(Images_Bound_Boxes[image_index][i].height / img_height).ToString()
				);
			}
			sw->Close();
		}

		System::Void btnYOLO_Click(System::Object^  sender, System::EventArgs^  e) {
			int temp = image_index;
			for (image_index = 0; image_index < Images_BB_no->Length; image_index++) {
				convert_to_YOLO_Format();
			}
			image_index = temp;
			MessageBox::Show("Saved YOLO Format of all annotated files in file list");
		}

		/*
		int frame = 0;
		void Split_Annotation(String^ filename, int no, int new_width, int new_height) {

			String^ fname = System::IO::Path::GetFileNameWithoutExtension(filename);
			String^ txt_filename = "files_YOLO_double/" + fname + "_" + no.ToString() + ".txt";

			Bitmap^ bmp = gcnew Bitmap(Image::FromFile(filename));
			Bitmap^ img_bmp;

			int no_labels = labels->ToArray()->Length;
			int img_width = pictureBox1->Width;
			int img_height = pictureBox1->Height;

			//Same height different width
			if (no == 1) {
				img_bmp = bmp->Clone(System::Drawing::Rectangle(0, 0, new_width, new_height), bmp->PixelFormat);
				img_bmp->Save("1/" + "frame_" + frame.ToString()+ "_" + no.ToString() + ".jpg", System::Drawing::Imaging::ImageFormat::Jpeg);
			}
			else {
				img_bmp = bmp->Clone(System::Drawing::Rectangle(img_width - new_width, img_height - new_height, new_width, new_height), bmp->PixelFormat);
				img_bmp->Save("2/" + "frame_" + frame.ToString() + "_" + no.ToString() + ".jpg", System::Drawing::Imaging::ImageFormat::Jpeg);
				frame++;
			}


		}
		*/

		void Split_Annotation(String^ filename, int no, int new_width, int new_height) {

			String^ fname = System::IO::Path::GetFileNameWithoutExtension(filename);
			String^ txt_filename = "files_YOLO_double/" + fname + "_"+no.ToString()+".txt";

			Bitmap^ bmp = gcnew Bitmap(Image::FromFile(filename));
			Bitmap^ img_bmp;

			StreamWriter^ sw = gcnew StreamWriter(txt_filename, false);

			sw->WriteLine(new_width + " " + new_height);

			int no_labels = labels->ToArray()->Length;
			int img_width = pictureBox1->Width;
			int img_height = pictureBox1->Height;

			for (int i = 0; i < Images_BB_no[image_index]; i++) {
				int x = Images_Bound_Boxes[image_index][i].x;
				int y = Images_Bound_Boxes[image_index][i].y;
				int w = Images_Bound_Boxes[image_index][i].width;
				int h = Images_Bound_Boxes[image_index][i].height;

				//Same height different width
				if (no == 1) {
					if (!(x>= 0 && x + w <= new_width)) continue;
					if (!(y>= 0 && y + h <= new_height)) continue;

					img_bmp = bmp->Clone(System::Drawing::Rectangle(0, 0, new_width, new_height), bmp->PixelFormat);
				}
				else {
					if (!(x>= img_width-new_width &&  x + w <= img_width)) continue;
					if (!(y>= img_height - new_height && y + h <= img_height)) continue;

					img_bmp = bmp->Clone(System::Drawing::Rectangle(img_width - new_width, img_height - new_height, new_width, new_height), bmp->PixelFormat);
					x = x - (img_width - new_width);
					y = y - (img_height - new_height);
				}
				sw->WriteLine(x.ToString() + " " +
								y.ToString() + " " +
								w.ToString() + " " +
								h.ToString() + " " +
								Images_Bound_Boxes[image_index][i].label.ToString()
				);
			}
			img_bmp->Save("files_YOLO_double/" + fname + "_" + no.ToString() + ".jpg", System::Drawing::Imaging::ImageFormat::Jpeg);
			sw->Close();
		}

		System::Void double_YOLO_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			int temp = image_index;
			for (image_index = 0; image_index < Images_BB_no->Length; image_index++) {
				String^ filename;
				if (!is_read) filename = files[image_index];
				else filename = files[(2 * image_index)];


				Split_Annotation(filename, 1, 1080, 1080);
				Split_Annotation(filename, 2, 1080, 1080);
			}
			image_index = temp;
			MessageBox::Show("Splitted and Saved YOLO Format of all annotated files in file list");
		}

		//Clear Member Data Method
		void clear() {
			no_Bound_Boxes = 0;

			selectedBox = 0;
			selected_box_index = -1;

			listBox_BB->Items->Clear();
			pictureBox1->Invalidate();
		}

		//Clear Button
		System::Void btn_Clear_Click(System::Object^  sender, System::EventArgs^  e) {
			clear();
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
};
}
