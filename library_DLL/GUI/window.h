#pragma once
#include "HelperGUI.h"
#include "popUp.h"
#include "buildingText.h"
#include "loadIn.h"
#include <iostream>
#include <iostream>


namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	static buildingsArray bArray = buildingsArray();
	/// <summary>
	/// Summary for window
	/// </summary>
	public ref class window : public System::Windows::Forms::Form
	{
	public:
		
		window(void)
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
		~window()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ lectureIcons;
	private: System::Windows::Forms::PictureBox^ libraryIcons;
	private: System::Windows::Forms::PictureBox^ residenceIcons;
	private: System::Windows::Forms::RadioButton^ lectures;
	private: System::Windows::Forms::RadioButton^ sports;
	private: System::Windows::Forms::RadioButton^ residences;
	private: System::Windows::Forms::RadioButton^ libraries;
	private: System::Windows::Forms::PictureBox^ tindall;
	private: System::Windows::Forms::PictureBox^ victoria;
	private: System::Windows::Forms::PictureBox^ chernoff;
	private: System::Windows::Forms::PictureBox^ stirling;
	private: System::Windows::Forms::PictureBox^ pictureBox40;
	private: System::Windows::Forms::PictureBox^ watts;
	private: System::Windows::Forms::PictureBox^ mcneill;
	private: System::Windows::Forms::PictureBox^ leonard;
	private: System::Windows::Forms::PictureBox^ brant;
	private: System::Windows::Forms::PictureBox^ gordon_brockington;
	private: System::Windows::Forms::PictureBox^ morris;
	private: System::Windows::Forms::PictureBox^ smith;
	private: System::Windows::Forms::PictureBox^ leggett;
	private: System::Windows::Forms::PictureBox^ chown;
	private: System::Windows::Forms::PictureBox^ adelaide;
	private: System::Windows::Forms::PictureBox^ ban_righ;
	private: System::Windows::Forms::PictureBox^ nixon;
	private: System::Windows::Forms::PictureBox^ botterell;
	private: System::Windows::Forms::PictureBox^ agnes;
	private: System::Windows::Forms::PictureBox^ jeffrey;
	private: System::Windows::Forms::PictureBox^ kingston;
	private: System::Windows::Forms::PictureBox^ sportsIcons;
	private: System::Windows::Forms::PictureBox^ grant;
	private: System::Windows::Forms::PictureBox^ ellis;
	private: System::Windows::Forms::PictureBox^ mackintosh_corry;
	private: System::Windows::Forms::PictureBox^ biosciences_complex;
	private: System::Windows::Forms::PictureBox^ summerhill;
	private: System::Windows::Forms::PictureBox^ kathleen_ryan;
	private: System::Windows::Forms::PictureBox^ humphrey;
	private: System::Windows::Forms::PictureBox^ ontario;
	private: System::Windows::Forms::PictureBox^ richardson;
	private: System::Windows::Forms::PictureBox^ robert_sutherland;
	private: System::Windows::Forms::PictureBox^ dunning;
	private: System::Windows::Forms::PictureBox^ douglas;
	private: System::Windows::Forms::PictureBox^ goodes;
	private: System::Windows::Forms::PictureBox^ stauffer;
	private: System::Windows::Forms::PictureBox^ john_deutsch;
	private: System::Windows::Forms::PictureBox^ arc;
	private: System::Windows::Forms::PictureBox^ mitchell;
	private: System::Windows::Forms::PictureBox^ dupuis;
	private: System::Windows::Forms::PictureBox^ beamish_munroe;
	private: System::Windows::Forms::PictureBox^ goodwin;
	private: System::Windows::Forms::PictureBox^ walter_light;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(window::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lectureIcons = (gcnew System::Windows::Forms::PictureBox());
			this->libraryIcons = (gcnew System::Windows::Forms::PictureBox());
			this->residenceIcons = (gcnew System::Windows::Forms::PictureBox());
			this->lectures = (gcnew System::Windows::Forms::RadioButton());
			this->sports = (gcnew System::Windows::Forms::RadioButton());
			this->residences = (gcnew System::Windows::Forms::RadioButton());
			this->libraries = (gcnew System::Windows::Forms::RadioButton());
			this->tindall = (gcnew System::Windows::Forms::PictureBox());
			this->victoria = (gcnew System::Windows::Forms::PictureBox());
			this->chernoff = (gcnew System::Windows::Forms::PictureBox());
			this->stirling = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->watts = (gcnew System::Windows::Forms::PictureBox());
			this->mcneill = (gcnew System::Windows::Forms::PictureBox());
			this->leonard = (gcnew System::Windows::Forms::PictureBox());
			this->brant = (gcnew System::Windows::Forms::PictureBox());
			this->gordon_brockington = (gcnew System::Windows::Forms::PictureBox());
			this->morris = (gcnew System::Windows::Forms::PictureBox());
			this->smith = (gcnew System::Windows::Forms::PictureBox());
			this->leggett = (gcnew System::Windows::Forms::PictureBox());
			this->chown = (gcnew System::Windows::Forms::PictureBox());
			this->adelaide = (gcnew System::Windows::Forms::PictureBox());
			this->ban_righ = (gcnew System::Windows::Forms::PictureBox());
			this->nixon = (gcnew System::Windows::Forms::PictureBox());
			this->botterell = (gcnew System::Windows::Forms::PictureBox());
			this->agnes = (gcnew System::Windows::Forms::PictureBox());
			this->jeffrey = (gcnew System::Windows::Forms::PictureBox());
			this->kingston = (gcnew System::Windows::Forms::PictureBox());
			this->sportsIcons = (gcnew System::Windows::Forms::PictureBox());
			this->grant = (gcnew System::Windows::Forms::PictureBox());
			this->ellis = (gcnew System::Windows::Forms::PictureBox());
			this->mackintosh_corry = (gcnew System::Windows::Forms::PictureBox());
			this->biosciences_complex = (gcnew System::Windows::Forms::PictureBox());
			this->summerhill = (gcnew System::Windows::Forms::PictureBox());
			this->kathleen_ryan = (gcnew System::Windows::Forms::PictureBox());
			this->humphrey = (gcnew System::Windows::Forms::PictureBox());
			this->ontario = (gcnew System::Windows::Forms::PictureBox());
			this->richardson = (gcnew System::Windows::Forms::PictureBox());
			this->robert_sutherland = (gcnew System::Windows::Forms::PictureBox());
			this->dunning = (gcnew System::Windows::Forms::PictureBox());
			this->douglas = (gcnew System::Windows::Forms::PictureBox());
			this->goodes = (gcnew System::Windows::Forms::PictureBox());
			this->stauffer = (gcnew System::Windows::Forms::PictureBox());
			this->john_deutsch = (gcnew System::Windows::Forms::PictureBox());
			this->arc = (gcnew System::Windows::Forms::PictureBox());
			this->mitchell = (gcnew System::Windows::Forms::PictureBox());
			this->dupuis = (gcnew System::Windows::Forms::PictureBox());
			this->beamish_munroe = (gcnew System::Windows::Forms::PictureBox());
			this->goodwin = (gcnew System::Windows::Forms::PictureBox());
			this->walter_light = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lectureIcons))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->libraryIcons))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->residenceIcons))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tindall))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->victoria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chernoff))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stirling))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->watts))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mcneill))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leonard))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brant))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gordon_brockington))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->morris))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smith))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leggett))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adelaide))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ban_righ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nixon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->botterell))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->agnes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jeffrey))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kingston))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sportsIcons))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grant))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ellis))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mackintosh_corry))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->biosciences_complex))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->summerhill))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kathleen_ryan))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->humphrey))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ontario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->richardson))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->robert_sutherland))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dunning))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->douglas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goodes))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stauffer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->john_deutsch))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arc))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mitchell))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dupuis))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->beamish_munroe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goodwin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->walter_light))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(171, 64);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(750, 706);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(171, 64);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(750, 706);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 42;
			this->pictureBox2->TabStop = false;
			// 
			// lectureIcons
			// 
			this->lectureIcons->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lectureIcons.Image")));
			this->lectureIcons->Location = System::Drawing::Point(171, 64);
			this->lectureIcons->Name = L"lectureIcons";
			this->lectureIcons->Size = System::Drawing::Size(750, 706);
			this->lectureIcons->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->lectureIcons->TabIndex = 43;
			this->lectureIcons->TabStop = false;
			this->lectureIcons->Visible = false;
			// 
			// libraryIcons
			// 
			this->libraryIcons->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"libraryIcons.Image")));
			this->libraryIcons->Location = System::Drawing::Point(171, 64);
			this->libraryIcons->Name = L"libraryIcons";
			this->libraryIcons->Size = System::Drawing::Size(750, 706);
			this->libraryIcons->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->libraryIcons->TabIndex = 44;
			this->libraryIcons->TabStop = false;
			this->libraryIcons->Visible = false;
			// 
			// residenceIcons
			// 
			this->residenceIcons->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"residenceIcons.Image")));
			this->residenceIcons->Location = System::Drawing::Point(171, 64);
			this->residenceIcons->Name = L"residenceIcons";
			this->residenceIcons->Size = System::Drawing::Size(750, 706);
			this->residenceIcons->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->residenceIcons->TabIndex = 45;
			this->residenceIcons->TabStop = false;
			this->residenceIcons->Visible = false;
			// 
			// lectures
			// 
			this->lectures->AutoSize = true;
			this->lectures->Location = System::Drawing::Point(1000, 64);
			this->lectures->Name = L"lectures";
			this->lectures->Size = System::Drawing::Size(112, 21);
			this->lectures->TabIndex = 46;
			this->lectures->TabStop = true;
			this->lectures->Text = L"Lecture Halls";
			this->lectures->UseVisualStyleBackColor = true;
			this->lectures->CheckedChanged += gcnew System::EventHandler(this, &window::lectures_CheckedChanged_1);
			// 
			// sports
			// 
			this->sports->AutoSize = true;
			this->sports->Location = System::Drawing::Point(1000, 108);
			this->sports->Name = L"sports";
			this->sports->Size = System::Drawing::Size(70, 21);
			this->sports->TabIndex = 47;
			this->sports->TabStop = true;
			this->sports->Text = L"Sports";
			this->sports->UseVisualStyleBackColor = true;
			this->sports->CheckedChanged += gcnew System::EventHandler(this, &window::sports_CheckedChanged);
			// 
			// residences
			// 
			this->residences->AutoSize = true;
			this->residences->Location = System::Drawing::Point(1000, 153);
			this->residences->Name = L"residences";
			this->residences->Size = System::Drawing::Size(103, 21);
			this->residences->TabIndex = 48;
			this->residences->TabStop = true;
			this->residences->Text = L"Residences";
			this->residences->UseVisualStyleBackColor = true;
			this->residences->CheckedChanged += gcnew System::EventHandler(this, &window::residences_CheckedChanged);
			// 
			// libraries
			// 
			this->libraries->AutoSize = true;
			this->libraries->Location = System::Drawing::Point(1000, 195);
			this->libraries->Name = L"libraries";
			this->libraries->Size = System::Drawing::Size(84, 21);
			this->libraries->TabIndex = 49;
			this->libraries->TabStop = true;
			this->libraries->Text = L"Libraries";
			this->libraries->UseVisualStyleBackColor = true;
			this->libraries->CheckedChanged += gcnew System::EventHandler(this, &window::libraries_CheckedChanged);
			// 
			// tindall
			// 
			this->tindall->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tindall.Image")));
			this->tindall->Location = System::Drawing::Point(399, 323);
			this->tindall->Margin = System::Windows::Forms::Padding(0);
			this->tindall->Name = L"tindall";
			this->tindall->Size = System::Drawing::Size(10, 10);
			this->tindall->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->tindall->TabIndex = 39;
			this->tindall->TabStop = false;
			this->tindall->Click += gcnew System::EventHandler(this, &window::tindall_Click);
			// 
			// victoria
			// 
			this->victoria->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"victoria.Image")));
			this->victoria->Location = System::Drawing::Point(354, 440);
			this->victoria->Name = L"victoria";
			this->victoria->Size = System::Drawing::Size(10, 10);
			this->victoria->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->victoria->TabIndex = 35;
			this->victoria->TabStop = false;
			this->victoria->Click += gcnew System::EventHandler(this, &window::victoria_Click);
			// 
			// chernoff
			// 
			this->chernoff->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chernoff.Image")));
			this->chernoff->Location = System::Drawing::Point(399, 538);
			this->chernoff->Name = L"chernoff";
			this->chernoff->Size = System::Drawing::Size(10, 10);
			this->chernoff->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->chernoff->TabIndex = 5;
			this->chernoff->TabStop = false;
			this->chernoff->Click += gcnew System::EventHandler(this, &window::chernoff_Click);
			// 
			// stirling
			// 
			this->stirling->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stirling.Image")));
			this->stirling->Location = System::Drawing::Point(430, 490);
			this->stirling->Name = L"stirling";
			this->stirling->Size = System::Drawing::Size(10, 10);
			this->stirling->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->stirling->TabIndex = 18;
			this->stirling->TabStop = false;
			this->stirling->Click += gcnew System::EventHandler(this, &window::stirling_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(430, 430);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(10, 10);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 47;
			this->pictureBox40->TabStop = false;
			// 
			// watts
			// 
			this->watts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"watts.Image")));
			this->watts->Location = System::Drawing::Point(343, 559);
			this->watts->Name = L"watts";
			this->watts->Size = System::Drawing::Size(10, 10);
			this->watts->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->watts->TabIndex = 36;
			this->watts->TabStop = false;
			this->watts->Click += gcnew System::EventHandler(this, &window::watts_Click);
			// 
			// mcneill
			// 
			this->mcneill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mcneill.Image")));
			this->mcneill->Location = System::Drawing::Point(304, 585);
			this->mcneill->Name = L"mcneill";
			this->mcneill->Size = System::Drawing::Size(10, 10);
			this->mcneill->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mcneill->TabIndex = 33;
			this->mcneill->TabStop = false;
			this->mcneill->Click += gcnew System::EventHandler(this, &window::mcneill_Click);
			// 
			// leonard
			// 
			this->leonard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leonard.Image")));
			this->leonard->Location = System::Drawing::Point(257, 569);
			this->leonard->Name = L"leonard";
			this->leonard->Size = System::Drawing::Size(10, 10);
			this->leonard->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->leonard->TabIndex = 32;
			this->leonard->TabStop = false;
			this->leonard->Click += gcnew System::EventHandler(this, &window::leonard_Click);
			// 
			// brant
			// 
			this->brant->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"brant.Image")));
			this->brant->Location = System::Drawing::Point(304, 633);
			this->brant->Name = L"brant";
			this->brant->Size = System::Drawing::Size(10, 10);
			this->brant->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->brant->TabIndex = 27;
			this->brant->TabStop = false;
			this->brant->Click += gcnew System::EventHandler(this, &window::brant_Click);
			// 
			// gordon_brockington
			// 
			this->gordon_brockington->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gordon_brockington.Image")));
			this->gordon_brockington->Location = System::Drawing::Point(268, 646);
			this->gordon_brockington->Name = L"gordon_brockington";
			this->gordon_brockington->Size = System::Drawing::Size(10, 10);
			this->gordon_brockington->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->gordon_brockington->TabIndex = 30;
			this->gordon_brockington->TabStop = false;
			this->gordon_brockington->Click += gcnew System::EventHandler(this, &window::gordon_brockington_Click);
			// 
			// morris
			// 
			this->morris->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"morris.Image")));
			this->morris->Location = System::Drawing::Point(317, 669);
			this->morris->Name = L"morris";
			this->morris->Size = System::Drawing::Size(10, 10);
			this->morris->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->morris->TabIndex = 34;
			this->morris->TabStop = false;
			this->morris->Click += gcnew System::EventHandler(this, &window::morris_Click);
			// 
			// smith
			// 
			this->smith->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"smith.Image")));
			this->smith->Location = System::Drawing::Point(399, 619);
			this->smith->Name = L"smith";
			this->smith->Size = System::Drawing::Size(10, 10);
			this->smith->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->smith->TabIndex = 29;
			this->smith->TabStop = false;
			this->smith->Click += gcnew System::EventHandler(this, &window::smith_Click);
			// 
			// leggett
			// 
			this->leggett->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leggett.Image")));
			this->leggett->Location = System::Drawing::Point(440, 619);
			this->leggett->Name = L"leggett";
			this->leggett->Size = System::Drawing::Size(10, 10);
			this->leggett->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->leggett->TabIndex = 31;
			this->leggett->TabStop = false;
			this->leggett->Click += gcnew System::EventHandler(this, &window::leggett_Click);
			// 
			// chown
			// 
			this->chown->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"chown.Image")));
			this->chown->Location = System::Drawing::Point(468, 564);
			this->chown->Name = L"chown";
			this->chown->Size = System::Drawing::Size(10, 10);
			this->chown->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->chown->TabIndex = 28;
			this->chown->TabStop = false;
			this->chown->Click += gcnew System::EventHandler(this, &window::chown_Click);
			// 
			// adelaide
			// 
			this->adelaide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adelaide.Image")));
			this->adelaide->Location = System::Drawing::Point(524, 538);
			this->adelaide->Name = L"adelaide";
			this->adelaide->Size = System::Drawing::Size(10, 10);
			this->adelaide->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->adelaide->TabIndex = 25;
			this->adelaide->TabStop = false;
			this->adelaide->Click += gcnew System::EventHandler(this, &window::adelaide_Click);
			// 
			// ban_righ
			// 
			this->ban_righ->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ban_righ.Image")));
			this->ban_righ->Location = System::Drawing::Point(510, 490);
			this->ban_righ->Name = L"ban_righ";
			this->ban_righ->Size = System::Drawing::Size(10, 10);
			this->ban_righ->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ban_righ->TabIndex = 26;
			this->ban_righ->TabStop = false;
			this->ban_righ->Click += gcnew System::EventHandler(this, &window::ban_righ_Click);
			// 
			// nixon
			// 
			this->nixon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nixon.Image")));
			this->nixon->Location = System::Drawing::Point(604, 472);
			this->nixon->Name = L"nixon";
			this->nixon->Size = System::Drawing::Size(10, 10);
			this->nixon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->nixon->TabIndex = 38;
			this->nixon->TabStop = false;
			this->nixon->Click += gcnew System::EventHandler(this, &window::nixon_Click);
			// 
			// botterell
			// 
			this->botterell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"botterell.Image")));
			this->botterell->Location = System::Drawing::Point(718, 564);
			this->botterell->Name = L"botterell";
			this->botterell->Size = System::Drawing::Size(10, 10);
			this->botterell->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->botterell->TabIndex = 4;
			this->botterell->TabStop = false;
			this->botterell->Click += gcnew System::EventHandler(this, &window::botterell_Click);
			// 
			// agnes
			// 
			this->agnes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"agnes.Image")));
			this->agnes->Location = System::Drawing::Point(519, 430);
			this->agnes->Name = L"agnes";
			this->agnes->Size = System::Drawing::Size(10, 10);
			this->agnes->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->agnes->TabIndex = 1;
			this->agnes->TabStop = false;
			this->agnes->Click += gcnew System::EventHandler(this, &window::agnes_Click);
			// 
			// jeffrey
			// 
			this->jeffrey->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"jeffrey.Image")));
			this->jeffrey->Location = System::Drawing::Point(531, 398);
			this->jeffrey->Name = L"jeffrey";
			this->jeffrey->Size = System::Drawing::Size(10, 10);
			this->jeffrey->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->jeffrey->TabIndex = 13;
			this->jeffrey->TabStop = false;
			this->jeffrey->Click += gcnew System::EventHandler(this, &window::jeffrey_Click);
			// 
			// kingston
			// 
			this->kingston->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kingston.Image")));
			this->kingston->Location = System::Drawing::Point(609, 419);
			this->kingston->Name = L"kingston";
			this->kingston->Size = System::Drawing::Size(10, 10);
			this->kingston->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kingston->TabIndex = 14;
			this->kingston->TabStop = false;
			this->kingston->Click += gcnew System::EventHandler(this, &window::kingston_Click);
			// 
			// sportsIcons
			// 
			this->sportsIcons->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"sportsIcons.Image")));
			this->sportsIcons->Location = System::Drawing::Point(171, 64);
			this->sportsIcons->Name = L"sportsIcons";
			this->sportsIcons->Size = System::Drawing::Size(750, 706);
			this->sportsIcons->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->sportsIcons->TabIndex = 5;
			this->sportsIcons->TabStop = false;
			this->sportsIcons->Visible = false;
			// 
			// grant
			// 
			this->grant->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"grant.Image")));
			this->grant->Location = System::Drawing::Point(595, 403);
			this->grant->Name = L"grant";
			this->grant->Size = System::Drawing::Size(10, 10);
			this->grant->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->grant->TabIndex = 11;
			this->grant->TabStop = false;
			this->grant->Click += gcnew System::EventHandler(this, &window::grant_Click);
			// 
			// ellis
			// 
			this->ellis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ellis.Image")));
			this->ellis->Location = System::Drawing::Point(519, 353);
			this->ellis->Name = L"ellis";
			this->ellis->Size = System::Drawing::Size(10, 10);
			this->ellis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ellis->TabIndex = 8;
			this->ellis->TabStop = false;
			this->ellis->Click += gcnew System::EventHandler(this, &window::ellis_Click);
			// 
			// mackintosh_corry
			// 
			this->mackintosh_corry->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mackintosh_corry.Image")));
			this->mackintosh_corry->Location = System::Drawing::Point(488, 367);
			this->mackintosh_corry->Name = L"mackintosh_corry";
			this->mackintosh_corry->Size = System::Drawing::Size(10, 10);
			this->mackintosh_corry->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mackintosh_corry->TabIndex = 15;
			this->mackintosh_corry->TabStop = false;
			this->mackintosh_corry->Click += gcnew System::EventHandler(this, &window::mackintosh_corry_Click);
			// 
			// biosciences_complex
			// 
			this->biosciences_complex->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"biosciences_complex.Image")));
			this->biosciences_complex->Location = System::Drawing::Point(760, 387);
			this->biosciences_complex->Name = L"biosciences_complex";
			this->biosciences_complex->Size = System::Drawing::Size(10, 10);
			this->biosciences_complex->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->biosciences_complex->TabIndex = 3;
			this->biosciences_complex->TabStop = false;
			this->biosciences_complex->Click += gcnew System::EventHandler(this, &window::biosciences_complex_Click);
			// 
			// summerhill
			// 
			this->summerhill->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"summerhill.Image")));
			this->summerhill->Location = System::Drawing::Point(669, 403);
			this->summerhill->Name = L"summerhill";
			this->summerhill->Size = System::Drawing::Size(10, 10);
			this->summerhill->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->summerhill->TabIndex = 24;
			this->summerhill->TabStop = false;
			this->summerhill->Click += gcnew System::EventHandler(this, &window::summerhill_Click);
			// 
			// kathleen_ryan
			// 
			this->kathleen_ryan->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"kathleen_ryan.Image")));
			this->kathleen_ryan->Location = System::Drawing::Point(674, 353);
			this->kathleen_ryan->Name = L"kathleen_ryan";
			this->kathleen_ryan->Size = System::Drawing::Size(10, 10);
			this->kathleen_ryan->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->kathleen_ryan->TabIndex = 42;
			this->kathleen_ryan->TabStop = false;
			this->kathleen_ryan->Click += gcnew System::EventHandler(this, &window::kathleen_ryan_Click);
			// 
			// humphrey
			// 
			this->humphrey->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"humphrey.Image")));
			this->humphrey->Location = System::Drawing::Point(705, 339);
			this->humphrey->Name = L"humphrey";
			this->humphrey->Size = System::Drawing::Size(10, 10);
			this->humphrey->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->humphrey->TabIndex = 12;
			this->humphrey->TabStop = false;
			this->humphrey->Click += gcnew System::EventHandler(this, &window::humphrey_Click);
			// 
			// ontario
			// 
			this->ontario->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ontario.Image")));
			this->ontario->Location = System::Drawing::Point(595, 339);
			this->ontario->Name = L"ontario";
			this->ontario->Size = System::Drawing::Size(10, 10);
			this->ontario->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ontario->TabIndex = 23;
			this->ontario->TabStop = false;
			this->ontario->Click += gcnew System::EventHandler(this, &window::ontario_Click);
			// 
			// richardson
			// 
			this->richardson->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"richardson.Image")));
			this->richardson->Location = System::Drawing::Point(531, 323);
			this->richardson->Name = L"richardson";
			this->richardson->Size = System::Drawing::Size(10, 10);
			this->richardson->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->richardson->TabIndex = 16;
			this->richardson->TabStop = false;
			this->richardson->Click += gcnew System::EventHandler(this, &window::richardson_Click);
			// 
			// robert_sutherland
			// 
			this->robert_sutherland->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"robert_sutherland.Image")));
			this->robert_sutherland->Location = System::Drawing::Point(488, 286);
			this->robert_sutherland->Name = L"robert_sutherland";
			this->robert_sutherland->Size = System::Drawing::Size(10, 10);
			this->robert_sutherland->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->robert_sutherland->TabIndex = 17;
			this->robert_sutherland->TabStop = false;
			this->robert_sutherland->Click += gcnew System::EventHandler(this, &window::robert_sutherland_Click);
			// 
			// dunning
			// 
			this->dunning->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dunning.Image")));
			this->dunning->Location = System::Drawing::Point(531, 271);
			this->dunning->Name = L"dunning";
			this->dunning->Size = System::Drawing::Size(10, 10);
			this->dunning->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dunning->TabIndex = 6;
			this->dunning->TabStop = false;
			this->dunning->Click += gcnew System::EventHandler(this, &window::dunning_Click);
			// 
			// douglas
			// 
			this->douglas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"douglas.Image")));
			this->douglas->Location = System::Drawing::Point(609, 271);
			this->douglas->Name = L"douglas";
			this->douglas->Size = System::Drawing::Size(10, 10);
			this->douglas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->douglas->TabIndex = 40;
			this->douglas->TabStop = false;
			this->douglas->Click += gcnew System::EventHandler(this, &window::douglas_Click);
			// 
			// goodes
			// 
			this->goodes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"goodes.Image")));
			this->goodes->Location = System::Drawing::Point(454, 211);
			this->goodes->Name = L"goodes";
			this->goodes->Size = System::Drawing::Size(10, 10);
			this->goodes->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->goodes->TabIndex = 9;
			this->goodes->TabStop = false;
			this->goodes->Click += gcnew System::EventHandler(this, &window::goodes_Click);
			// 
			// stauffer
			// 
			this->stauffer->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"stauffer.Image")));
			this->stauffer->Location = System::Drawing::Point(547, 182);
			this->stauffer->Name = L"stauffer";
			this->stauffer->Size = System::Drawing::Size(10, 10);
			this->stauffer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->stauffer->TabIndex = 41;
			this->stauffer->TabStop = false;
			this->stauffer->Click += gcnew System::EventHandler(this, &window::stauffer_Click);
			// 
			// john_deutsch
			// 
			this->john_deutsch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"john_deutsch.Image")));
			this->john_deutsch->Location = System::Drawing::Point(604, 211);
			this->john_deutsch->Name = L"john_deutsch";
			this->john_deutsch->Size = System::Drawing::Size(10, 10);
			this->john_deutsch->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->john_deutsch->TabIndex = 21;
			this->john_deutsch->TabStop = false;
			this->john_deutsch->Click += gcnew System::EventHandler(this, &window::john_deutsch_Click);
			// 
			// arc
			// 
			this->arc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"arc.Image")));
			this->arc->Location = System::Drawing::Point(622, 131);
			this->arc->Name = L"arc";
			this->arc->Size = System::Drawing::Size(10, 10);
			this->arc->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->arc->TabIndex = 37;
			this->arc->TabStop = false;
			this->arc->Click += gcnew System::EventHandler(this, &window::arc_Click);
			// 
			// mitchell
			// 
			this->mitchell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mitchell.Image")));
			this->mitchell->Location = System::Drawing::Point(649, 191);
			this->mitchell->Name = L"mitchell";
			this->mitchell->Size = System::Drawing::Size(10, 10);
			this->mitchell->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mitchell->TabIndex = 22;
			this->mitchell->TabStop = false;
			this->mitchell->Click += gcnew System::EventHandler(this, &window::mitchell_Click);
			// 
			// dupuis
			// 
			this->dupuis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dupuis.Image")));
			this->dupuis->Location = System::Drawing::Point(713, 206);
			this->dupuis->Name = L"dupuis";
			this->dupuis->Size = System::Drawing::Size(10, 10);
			this->dupuis->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->dupuis->TabIndex = 7;
			this->dupuis->TabStop = false;
			this->dupuis->Click += gcnew System::EventHandler(this, &window::dupuis_Click);
			// 
			// beamish_munroe
			// 
			this->beamish_munroe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"beamish_munroe.Image")));
			this->beamish_munroe->Location = System::Drawing::Point(713, 222);
			this->beamish_munroe->Name = L"beamish_munroe";
			this->beamish_munroe->Size = System::Drawing::Size(10, 10);
			this->beamish_munroe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->beamish_munroe->TabIndex = 2;
			this->beamish_munroe->TabStop = false;
			this->beamish_munroe->Click += gcnew System::EventHandler(this, &window::beamish_munroe_Click);
			// 
			// goodwin
			// 
			this->goodwin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"goodwin.Image")));
			this->goodwin->Location = System::Drawing::Point(735, 234);
			this->goodwin->Name = L"goodwin";
			this->goodwin->Size = System::Drawing::Size(10, 10);
			this->goodwin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->goodwin->TabIndex = 10;
			this->goodwin->TabStop = false;
			this->goodwin->Click += gcnew System::EventHandler(this, &window::goodwin_Click);
			// 
			// walter_light
			// 
			this->walter_light->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"walter_light.Image")));
			this->walter_light->Location = System::Drawing::Point(760, 234);
			this->walter_light->Name = L"walter_light";
			this->walter_light->Size = System::Drawing::Size(10, 10);
			this->walter_light->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->walter_light->TabIndex = 19;
			this->walter_light->TabStop = false;
			this->walter_light->Click += gcnew System::EventHandler(this, &window::walter_light_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(78, 64);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 85);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 50;
			this->pictureBox3->TabStop = false;
			// 
			// window
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1141, 1055);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->walter_light);
			this->Controls->Add(this->goodwin);
			this->Controls->Add(this->beamish_munroe);
			this->Controls->Add(this->dupuis);
			this->Controls->Add(this->mitchell);
			this->Controls->Add(this->arc);
			this->Controls->Add(this->john_deutsch);
			this->Controls->Add(this->stauffer);
			this->Controls->Add(this->goodes);
			this->Controls->Add(this->douglas);
			this->Controls->Add(this->dunning);
			this->Controls->Add(this->robert_sutherland);
			this->Controls->Add(this->richardson);
			this->Controls->Add(this->ontario);
			this->Controls->Add(this->humphrey);
			this->Controls->Add(this->kathleen_ryan);
			this->Controls->Add(this->summerhill);
			this->Controls->Add(this->biosciences_complex);
			this->Controls->Add(this->mackintosh_corry);
			this->Controls->Add(this->ellis);
			this->Controls->Add(this->grant);
			this->Controls->Add(this->kingston);
			this->Controls->Add(this->jeffrey);
			this->Controls->Add(this->agnes);
			this->Controls->Add(this->botterell);
			this->Controls->Add(this->nixon);
			this->Controls->Add(this->ban_righ);
			this->Controls->Add(this->adelaide);
			this->Controls->Add(this->chown);
			this->Controls->Add(this->leggett);
			this->Controls->Add(this->smith);
			this->Controls->Add(this->morris);
			this->Controls->Add(this->gordon_brockington);
			this->Controls->Add(this->brant);
			this->Controls->Add(this->leonard);
			this->Controls->Add(this->mcneill);
			this->Controls->Add(this->watts);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->stirling);
			this->Controls->Add(this->chernoff);
			this->Controls->Add(this->victoria);
			this->Controls->Add(this->tindall);
			this->Controls->Add(this->libraries);
			this->Controls->Add(this->residences);
			this->Controls->Add(this->sports);
			this->Controls->Add(this->lectures);
			this->Controls->Add(this->sportsIcons);
			this->Controls->Add(this->residenceIcons);
			this->Controls->Add(this->libraryIcons);
			this->Controls->Add(this->lectureIcons);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"window";
			this->Text = L"window";
			this->Load += gcnew System::EventHandler(this, &window::window_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lectureIcons))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->libraryIcons))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->residenceIcons))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tindall))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->victoria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chernoff))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stirling))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->watts))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mcneill))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leonard))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->brant))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gordon_brockington))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->morris))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->smith))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leggett))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->adelaide))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ban_righ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nixon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->botterell))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->agnes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->jeffrey))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kingston))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sportsIcons))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->grant))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ellis))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mackintosh_corry))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->biosciences_complex))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->summerhill))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kathleen_ryan))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->humphrey))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ontario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->richardson))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->robert_sutherland))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dunning))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->douglas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goodes))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->stauffer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->john_deutsch))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arc))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mitchell))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dupuis))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->beamish_munroe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->goodwin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->walter_light))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void window_Load(System::Object^ sender, System::EventArgs^ e) {
		HelperName::Helper::BlendPics(this->pictureBox1, this->pictureBox2);
		bArray.initialize();
	}

private: System::Void lectures_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	if (this->lectures->Checked == true) {
		HelperName::Helper::BlendPics(this->pictureBox2, this->lectureIcons);
		this->lectureIcons->Visible = true;
		this->sportsIcons->Visible = false;
		this->residenceIcons->Visible = false;
		this->libraryIcons->Visible = false;
		
	}
	else {
		HelperName::Helper::BlendPics(this->pictureBox1, this->pictureBox2);

		this->lectureIcons->Visible = false;
	}
}
private: System::Void sports_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->sports->Checked == true) {
		HelperName::Helper::BlendPics(this->pictureBox2, this->sportsIcons);
		this->sportsIcons->Visible = true;
		this->lectureIcons->Visible = false;
		this->residenceIcons->Visible = false;
		this->libraryIcons->Visible = false;
	}
	else {
		HelperName::Helper::BlendPics(this->pictureBox1, this->pictureBox2);

		this->sportsIcons->Visible = false;
	}
}
private: System::Void residences_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->residences->Checked == true) {
		HelperName::Helper::BlendPics(this->pictureBox2, this->residenceIcons);
		this->residenceIcons->Visible = true;
		this->lectureIcons->Visible = false;
		this->sportsIcons->Visible = false;
		this->libraryIcons->Visible = false;
	}
	else {
		HelperName::Helper::BlendPics(this->pictureBox1, this->pictureBox2);
		this->residenceIcons->Visible = false;
	}
}
private: System::Void libraries_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->libraries->Checked == true) {
		HelperName::Helper::BlendPics(this->pictureBox2, this->libraryIcons);
		this->libraryIcons->Visible = true;
		this->lectureIcons->Visible = false;
		this->sportsIcons->Visible = false;
		this->residenceIcons->Visible = false;
	}
	else {
		HelperName::Helper::BlendPics(this->pictureBox1, this->pictureBox2);
		this->libraryIcons->Visible = false;
	}
}
private: System::Void tindall_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->tindall);
}
private: System::Void victoria_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->victoria);

}
private: System::Void popUpInfo(PictureBox^ pb) {
	String^ name;
	if (pb->TabIndex >= 1 && pb->TabIndex <= 24) {
		name = gcnew String(bArray.LectureHallLoad((pb->TabIndex) - 1).getName().c_str()) + \
		"\nAddress: " + gcnew String(bArray.LectureHallLoad((pb->TabIndex) - 1).getAddress().c_str()) + "\nDepartment: " + \
			gcnew String(bArray.LectureHallLoad((pb->TabIndex) - 1).getDepartment().c_str()) + "\nDedication: " + \
			gcnew String(bArray.LectureHallLoad((pb->TabIndex) - 1).getDedication().c_str()) + "\nDate Established: " + gcnew Int32(bArray.LectureHallLoad((pb->TabIndex)-1).getDate());
	}
	
	if (pb->TabIndex >= 25 && pb->TabIndex <= 36) {
		name = gcnew String(bArray.ResidenceLoad((pb->TabIndex) - 25).getName().c_str()) +\
			"\nAddress: " + gcnew String(bArray.ResidenceLoad((pb->TabIndex) - 25).getAddress().c_str()) + "\nDedication: " + \
			gcnew String(bArray.ResidenceLoad((pb->TabIndex) - 25).getDedication().c_str()) + "\nDate Established: " + gcnew Int32(bArray.ResidenceLoad((pb->TabIndex) - 25).getDate()) +\
			"\nResidence Type: " + gcnew String(bArray.ResidenceLoad((pb->TabIndex)-24).getRoomType().c_str());
	}
	if (pb->TabIndex >= 37 && pb->TabIndex <= 39) {
		if (pb->TabIndex == 37){
			name = gcnew String("ARC");
		}
		else if (pb->TabIndex == 38) {
			name = gcnew String("Nixon");
		}
		else {
			name = gcnew String("Tindall");
		}
		
	}
	if (pb->TabIndex >= 40 && pb->TabIndex <= 42) {
		name = gcnew String(bArray.LibraryLoad((pb->TabIndex) - 40).getName().c_str()) + \
			"\nAddress: " + gcnew String(bArray.LibraryLoad((pb->TabIndex) - 40).getAddress().c_str()) + "\nDedication: " + \
			gcnew String(bArray.LibraryLoad((pb->TabIndex) - 40).getDedication().c_str()) + "\nDate Established: " + gcnew Int32(bArray.LibraryLoad((pb->TabIndex) - 40).getDate());
	}
	popUp^ popup = gcnew popUp();
	buildingText::setvalue(name);
	System::Windows::Forms::DialogResult dialogresult = popup->ShowDialog();
	popup->~popUp();
}

private: System::Void stirling_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->stirling);
}
private: System::Void chernoff_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->chernoff);
}
private: System::Void watts_Click(System::Object ^ sender, System::EventArgs ^ e) {
	popUpInfo(this->watts);
}
private: System::Void mcneill_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->mcneill);
}
private: System::Void brant_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->brant);
}
private: System::Void morris_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->morris);
}
private: System::Void leonard_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->leonard);
}
private: System::Void gordon_brockington_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->gordon_brockington);
}
private: System::Void smith_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->smith);
}
private: System::Void leggett_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->leggett);
}
private: System::Void chown_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->chown);
}
private: System::Void adelaide_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->adelaide);
}
private: System::Void ban_righ_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->ban_righ);
}
private: System::Void botterell_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->botterell);
}
private: System::Void nixon_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->nixon);
}
private: System::Void agnes_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->agnes);
}
private: System::Void jeffrey_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->jeffrey);
}
private: System::Void kingston_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->kingston);
}
private: System::Void grant_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->grant);
}
private: System::Void ellis_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->ellis);
}
private: System::Void mackintosh_corry_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->mackintosh_corry);
}
private: System::Void richardson_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->richardson);
}
private: System::Void dunning_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->dunning);
}
private: System::Void robert_sutherland_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->robert_sutherland);
}
private: System::Void goodes_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->goodes);
}
private: System::Void stauffer_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->stauffer);
}
private: System::Void ontario_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->ontario);
}
private: System::Void douglas_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->douglas);
}
private: System::Void john_deutsch_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->john_deutsch);
}
private: System::Void mitchell_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->mitchell);
}
private: System::Void arc_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->arc);
}
private: System::Void biosciences_complex_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->biosciences_complex);
}
private: System::Void walter_light_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->walter_light);
}
private: System::Void goodwin_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->goodwin);

}
private: System::Void beamish_munroe_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->beamish_munroe);

}
private: System::Void dupuis_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->dupuis);

}
private: System::Void humphrey_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->humphrey);

}
private: System::Void summerhill_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->summerhill);

}
private: System::Void kathleen_ryan_Click(System::Object^ sender, System::EventArgs^ e) {
	popUpInfo(this->kathleen_ryan);

}

};
}
