#pragma once
#include "Dice.h"
#include "MyForm1.h"
#include "FormScore.h"

namespace DiceGame2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Collections::Generic;

	/// <summary>
	/// MyForm �̊T�v
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::PictureBox^  pictureDice1;
	private: System::Windows::Forms::PictureBox^  pictureDice2;
	private: System::Windows::Forms::PictureBox^  pictureDice5;



	private: System::Windows::Forms::PictureBox^  pictureDice4;

	private: System::Windows::Forms::PictureBox^  pictureDice3;
	private: System::Windows::Forms::PictureBox^  pictureDice6;
	private: System::Windows::Forms::Label^  labelResult;
	private: System::Windows::Forms::PictureBox^  pictureWin;
	private: System::Windows::Forms::PictureBox^  pictureLose;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �Q�[��GToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ResetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���̑�OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  EnvToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ScoreToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;



	protected:

	private:

		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureDice1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureDice6 = (gcnew System::Windows::Forms::PictureBox());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->pictureWin = (gcnew System::Windows::Forms::PictureBox());
			this->pictureLose = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�Q�[��GToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ResetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���̑�OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->EnvToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ScoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LemonChiffon;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(71, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(658, 110);
			this->label1->TabIndex = 0;
			this->label1->Text = L"���Ə������悤�I\r\n�A�������œ_��2�{����I";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(311, 74);
			this->button1->TabIndex = 1;
			this->button1->Text = L"�X�^�[�g";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->radioButton1->Location = System::Drawing::Point(71, 278);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(118, 34);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"����I";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm::radio_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->radioButton3->Location = System::Drawing::Point(264, 278);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(118, 34);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"�������I";
			this->radioButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			this->radioButton3->Click += gcnew System::EventHandler(this, &MyForm::radio_Click);
			// 
			// pictureDice1
			// 
			this->pictureDice1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice1.Image")));
			this->pictureDice1->Location = System::Drawing::Point(990, 115);
			this->pictureDice1->Name = L"pictureDice1";
			this->pictureDice1->Size = System::Drawing::Size(132, 131);
			this->pictureDice1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice1->TabIndex = 4;
			this->pictureDice1->TabStop = false;
			this->pictureDice1->Visible = false;
			this->pictureDice1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureDice2
			// 
			this->pictureDice2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice2.Image")));
			this->pictureDice2->Location = System::Drawing::Point(990, 115);
			this->pictureDice2->Name = L"pictureDice2";
			this->pictureDice2->Size = System::Drawing::Size(132, 131);
			this->pictureDice2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice2->TabIndex = 5;
			this->pictureDice2->TabStop = false;
			this->pictureDice2->Visible = false;
			this->pictureDice2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureDice5
			// 
			this->pictureDice5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice5.Image")));
			this->pictureDice5->Location = System::Drawing::Point(990, 115);
			this->pictureDice5->Name = L"pictureDice5";
			this->pictureDice5->Size = System::Drawing::Size(132, 131);
			this->pictureDice5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice5->TabIndex = 6;
			this->pictureDice5->TabStop = false;
			this->pictureDice5->Visible = false;
			// 
			// pictureDice4
			// 
			this->pictureDice4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice4.Image")));
			this->pictureDice4->Location = System::Drawing::Point(990, 115);
			this->pictureDice4->Name = L"pictureDice4";
			this->pictureDice4->Size = System::Drawing::Size(132, 131);
			this->pictureDice4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice4->TabIndex = 7;
			this->pictureDice4->TabStop = false;
			this->pictureDice4->Visible = false;
			// 
			// pictureDice3
			// 
			this->pictureDice3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice3.Image")));
			this->pictureDice3->Location = System::Drawing::Point(990, 115);
			this->pictureDice3->Name = L"pictureDice3";
			this->pictureDice3->Size = System::Drawing::Size(132, 131);
			this->pictureDice3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice3->TabIndex = 8;
			this->pictureDice3->TabStop = false;
			this->pictureDice3->Visible = false;
			// 
			// pictureDice6
			// 
			this->pictureDice6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureDice6.Image")));
			this->pictureDice6->Location = System::Drawing::Point(990, 115);
			this->pictureDice6->Name = L"pictureDice6";
			this->pictureDice6->Size = System::Drawing::Size(132, 131);
			this->pictureDice6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureDice6->TabIndex = 9;
			this->pictureDice6->TabStop = false;
			this->pictureDice6->Visible = false;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"�l�r �o�S�V�b�N", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelResult->Location = System::Drawing::Point(671, 261);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 53);
			this->labelResult->TabIndex = 10;
			// 
			// pictureWin
			// 
			this->pictureWin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureWin.Image")));
			this->pictureWin->Location = System::Drawing::Point(415, 173);
			this->pictureWin->Name = L"pictureWin";
			this->pictureWin->Size = System::Drawing::Size(222, 141);
			this->pictureWin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureWin->TabIndex = 11;
			this->pictureWin->TabStop = false;
			this->pictureWin->Visible = false;
			this->pictureWin->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureLose
			// 
			this->pictureLose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureLose.Image")));
			this->pictureLose->Location = System::Drawing::Point(415, 171);
			this->pictureLose->Name = L"pictureLose";
			this->pictureLose->Size = System::Drawing::Size(222, 141);
			this->pictureLose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureLose->TabIndex = 12;
			this->pictureLose->TabStop = false;
			this->pictureLose->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LemonChiffon;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 27;
			this->listBox1->Location = System::Drawing::Point(207, 408);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(929, 382);
			this->listBox1->TabIndex = 13;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�Q�[��GToolStripMenuItem,
					this->���̑�OToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1448, 42);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �Q�[��GToolStripMenuItem
			// 
			this->�Q�[��GToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ResetToolStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->�Q�[��GToolStripMenuItem->Name = L"�Q�[��GToolStripMenuItem";
			this->�Q�[��GToolStripMenuItem->Size = System::Drawing::Size(110, 38);
			this->�Q�[��GToolStripMenuItem->Text = L"�Q�[��(&G)";
			// 
			// ResetToolStripMenuItem
			// 
			this->ResetToolStripMenuItem->Name = L"ResetToolStripMenuItem";
			this->ResetToolStripMenuItem->Size = System::Drawing::Size(283, 38);
			this->ResetToolStripMenuItem->Text = L"���Z�b�g(&R)";
			this->ResetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(283, 38);
			this->ExitToolStripMenuItem->Text = L"�I��(&X)";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// ���̑�OToolStripMenuItem
			// 
			this->���̑�OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->EnvToolStripMenuItem,
					this->ScoreToolStripMenuItem
			});
			this->���̑�OToolStripMenuItem->Name = L"���̑�OToolStripMenuItem";
			this->���̑�OToolStripMenuItem->Size = System::Drawing::Size(121, 38);
			this->���̑�OToolStripMenuItem->Text = L"���̑�(&O)";
			// 
			// EnvToolStripMenuItem
			// 
			this->EnvToolStripMenuItem->Name = L"EnvToolStripMenuItem";
			this->EnvToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->EnvToolStripMenuItem->Text = L"���ݒ�(&E)";
			this->EnvToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::EnvToolStripMenuItem_Click);
			// 
			// ScoreToolStripMenuItem
			// 
			this->ScoreToolStripMenuItem->Name = L"ScoreToolStripMenuItem";
			this->ScoreToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->ScoreToolStripMenuItem->Text = L"�n�C�X�R�A(&H)";
			this->ScoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ScoreToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1448, 873);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureLose);
			this->Controls->Add(this->pictureWin);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->pictureDice6);
			this->Controls->Add(this->pictureDice3);
			this->Controls->Add(this->pictureDice4);
			this->Controls->Add(this->pictureDice5);
			this->Controls->Add(this->pictureDice2);
			this->Controls->Add(this->pictureDice1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureDice6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureLose))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:Dice^ _dice;
				//�_���N�Z�p�̃R���N�V����
				List<int>^ _historyCollection;
				

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//�_�C�X�̃N���X���C���X�^���X���B
		_dice = gcnew Dice(6);
		//�������\������_�C�X��I���B
		ShowDice(_dice->Number);
		ChangeControlStatus(false);
		_historyCollection = gcnew List<int>;
		this->listBox1->Items->Clear();
		this->BackColor = Color::White;
		this->labelResult->Text = "";
		this->pictureWin->Visible = false;
		this->pictureLose->Visible = false;
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	/*	if (this->radioButton1->Checked == true) {
			MessageBox::Show("����I������܂���");
		}
		else if (this->radioButton3->Checked == true) {
			MessageBox::Show("�������I������܂���");
		}
		else {
			MessageBox::Show("����������I��ł�������", "���ӁI");
		}

		//�T�C�R���̖ڂ����肷�邽�߂̗����N���X���C���X�^���X���B
		Random^ randomDice;
		randomDice = gcnew Random();

		//���������T�C�R���̖ڂ��i�[����ϐ��B
		int diceNumber = 0;

		//�T�C�R���̖ڂ�1�ȏ�7��艺�Ő�������B
		diceNumber = randomDice->Next(1, 7);

		//���������T�C�R���̖ڂɉ������T�C�R����\������֐����Ăяo���B
		ShowDice(diceNumber);

		bool winFlag = IsWinGame(diceNumber);

		//���s�ɉ������摜��\���B
		ShowPicture(winFlag);*/
		ChangeControlStatus(true);

	}

			 private: System::Void ShowDice(int showDiceNumber) {
				 //�S�ẴT�C�R�����\���ɂ��鏉���������B
				 this->pictureDice1->Visible = false;
				 this->pictureDice2->Visible = false;
				 this->pictureDice3->Visible = false;
				 this->pictureDice4->Visible = false;
				 this->pictureDice5->Visible = false;
				 this->pictureDice6->Visible = false;

				 //�������ꂽ�����ɉ������T�C�R���̖ڂ�\������B
				 switch (showDiceNumber) {
				 case 1:
					 //1�̃T�C�R����\������B
					 this->pictureDice1->Visible = true;
					 break;

				 case 2:
					 //2�̃T�C�R����\������B
					 this->pictureDice2->Visible = true;
					 break;

				 case 3:
					 //3�̃T�C�R����\������B
					 this->pictureDice3->Visible = true;
					 break;

				 case 4:
					 //4�̃T�C�R����\������B
					 this->pictureDice4->Visible = true;
					 break;

				 case 5:
					 //3�̃T�C�R����\������B
					 this->pictureDice5->Visible = true;
					 break;

				 case 6:
					 //4�̃T�C�R����\������B
					 this->pictureDice6->Visible = true;
					 break;

				 default:
					 break;
				 }
			 }

					  //���s�̔�����s���֐��B
					  private: bool IsWinGame(int showDiceNumber) {
						  //��Ƌ����ǂ����I�񂾂���ۑ����镶����B
						  String^ selectedValue;
						  if (radioButton3->Checked == true) {
							  selectedValue = "����";
						  }
						  else if (radioButton1->Checked == true) {
							  selectedValue = "�";
						  }

						  //��Ƌ����ǂ����I�񂾂���ۑ����镶����
						  String^ resultValue;
						  if (showDiceNumber % 2 == 0) {
							  resultValue = "����";
						  }
						  else{
							  resultValue = "�";
						  }

						  //�\�z�ƌ��ʂ���v���邩�ŏ��s�𔻒�B
						  if (selectedValue == resultValue) {
							  return true;
						  }
						  else if(selectedValue != resultValue){
							  return false;
						  }
					  }

							   //���s�ɉ������摜��\������֐��B
							   private: System::Void ShowPicture(bool winGame) {
								   //���s�̔��肪�i�[����Ă�����B
								   if (winGame) {
									   //������\���B
									   this->labelResult->Text = "������I";
									   //�F��Ԃɐݒ肷��B
									   this->labelResult->ForeColor = Color::Red;
									   //�������̉摜��\���B
									   this->pictureWin->Visible = true;
									   //�����摜���\���ɂ���B
									   this->pictureLose->Visible = false;
									   //�w�i�𔒂ɐݒ肷��B
									   this->BackColor = Color::White;
								   }//�������Ƃ�
								   else {
									   //������\���B
									   this->labelResult->Text = "�͂���c";
									   //�F��Ԃɐݒ肷��B
									   this->labelResult->ForeColor = Color::Black;
									   //�������̉摜��\���B
									   this->pictureWin->Visible = false;
									   //�����摜���\���ɂ���B
									   this->pictureLose->Visible = true;
									   //�w�i�𔒂ɐݒ肷��B
									   this->BackColor = Color::LightGray;
								   }
							   }

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {	
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("�Q�[�����I�����܂����H", "�m�F", MessageBoxButtons::OKCancel, MessageBoxIcon::Error)) {
		e->Cancel = true;
	}
}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//�T�C�R����U��B
	_dice->Shake();
	//�\���𔽉f����B
	ShowDice(_dice->Number);
}

		 private: System::Void ChangeControlStatus(bool playing) {
			 //�T�C�R���p�̃^�C�}�[���N���B
			 timer1->Enabled = playing;
			 //�X�^�[�g�{�^�����ނ����ɂ���B
			 this->button1->Enabled = !playing;
			 //��E�����{�^��
			 this->radioButton3->Enabled = playing;
			 this->radioButton1->Enabled = playing;
			 if (playing) {
				 this->radioButton1->Checked = false;
				 this->radioButton3->Checked = false;
			 }
		 }

				  private: System::Void ManageHistory(bool winGame) {
					  //����̓��_�p�ϐ��B
					  int nowPoint = 0;
					  if (winGame) {
						  //���݂̃Q�[�������擾�B
						  int gameCount = _historyCollection->Count;
						  //�O��̓��T�p�ϐ����擾�B
						  int prePoint = 0;
						  if (gameCount > 0) {
							  //1��ȏ�Q�[�������Ă���ΑO��̓_����ݒ�B
							  prePoint = _historyCollection[gameCount - 1];
						  }
						  //����̓��T�v�Z
						  if (prePoint == 0) {
							  //�O�񕉂��Ă����1�_
							  nowPoint = 1;
						  }
						  else {
							  //������Ă����2�{
							  nowPoint = prePoint * 2;
						  }
					  }

					  //���X�g�{�b�N�X�ɒǉ�
					  if ((_dice->Number % 2) == 0) {
						  this->listBox1->Items->Add("�����ł��B" + labelResult->Text + ":" + nowPoint.ToString() + "�_");
					  }
					  else {
						  this->listBox1->Items->Add("��ł��B" + labelResult->Text + ":" + nowPoint.ToString() + "�_");
					  }
					//�R���N�V�����ɃQ�[���̗�����ǉ��B
					_historyCollection->Add(nowPoint);

					//10��Q�[��������΁A���ʂ��W�v����B
					if (_historyCollection->Count == 10) {
						//��������
						int winCount = 0;
						//���������B
						int loseCount = 0;
						//���v���_
						int sumPoint = 0;
						//�Y��
						int i = 0;
						while (i < _historyCollection->Count) {
							//�R���N�V�������痚���̎��o��
							int historyPoint = _historyCollection[i];
							//���v���_�����Z�B
							sumPoint = sumPoint + historyPoint;
							//���������ƕ��������̉��Z
							if (historyPoint == 0) {
								loseCount++;
							}
							else {
								winCount++;
							}
							i++;
						}
						MessageBox::Show("���v���_��" + sumPoint + "�_�ł���", winCount + "��" + loseCount + "�s");
						//�X�^�[�g�{�^�������b�N����B
						this->button1->Enabled = false;

						//���݂̃n�C�X�R�A
						int highScore = 0;
						try {
							//�X�R�A�L�^�p��Dice.dat���J���B
							System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Dice.dat");
							//Dice.dat�ɒ��g������ꍇ�A���̒l��ϐ��ɃZ�b�g
							if (!reader->EndOfStream) {
								highScore = Int32::Parse(reader->ReadToEnd());
							}
							//Dice.dat�����
							reader->Close();
						}
						catch (System::IO::FileNotFoundException^ ex) {
							//�t�@�C�������݂��Ȃ��ꍇ�A�����l0�ŐV���ȃe�L�X�g�t�@�C�����쐬
							System::IO::File::AppendAllText("./Dice.dat", "0");
							highScore = 0;
							System::Diagnostics::Debug::WriteLine("---�G���[���b�Z�[�W---\n" + ex->Message);
						}
						//�n�C�X�R�A��荡��̓��T�������ꍇ�ɁA�����Dice.dat�ɋL�^�B
						if (sumPoint > highScore) {
							System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
							writer->Write((gcnew Int32(sumPoint))->ToString());
							writer->Close();
						}
					}

				  }
private: System::Void radio_Click(System::Object^  sender, System::EventArgs^  e) {
	//�e�R���g���[�����Q�[���I���̏�ԂɕύX
	ChangeControlStatus(false);
	//���s�̔���B
	bool winflg = IsWinGame(_dice->Number);
	//���s�̉摜�̕\��
	ShowPicture(winflg);
	//�����̊Ǘ�
	ManageHistory(winflg);
}
private: System::Void ExitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void EnvToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//FormOption���C���X�^���X��
	MyForm1^ frm = gcnew MyForm1();
	//�^�C�}�[���o���v���p�e�B�ɐݒ�
	frm->DiceTimer = this->timer1->Interval;
	//���[�_����\��
	frm->ShowDialog();
	//�v���p�e�B���^�C�}�[���o�ɐݒ�B
	this->timer1->Interval = frm->DiceTimer;
}
private: System::Void ScoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	FormScore^ frm = gcnew FormScore();

	frm->ShowDialog();
}
};
}
