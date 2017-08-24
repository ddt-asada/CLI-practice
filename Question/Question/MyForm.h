#pragma once

#include "QuestionManager.h"
#include "OptionForm.h"
#include "ScoreForm.h"

namespace Question {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
	private: System::Windows::Forms::Button^  buttonStart;
	protected:
	private: System::Windows::Forms::Label^  labelQuestion;
	private: System::Windows::Forms::TextBox^  textBoxQuestion1;
	private: System::Windows::Forms::Label^  labelJudge;
	private: System::Windows::Forms::Button^  buttonAnswer;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		int Cal1;
		int Cal2;
		int Count = 0;
	private: System::Windows::Forms::ListBox^  listBoxResult1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ToolStripMenuItemFile;
	private: System::Windows::Forms::ToolStripMenuItem^  OptionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ScoreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitToolStripMenuItem;




			 List<int>^ _historyCollestion;
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
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->textBoxQuestion1 = (gcnew System::Windows::Forms::TextBox());
			this->labelJudge = (gcnew System::Windows::Forms::Label());
			this->buttonAnswer = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBoxResult1 = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStripMenuItemFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ScoreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonStart->Location = System::Drawing::Point(493, 97);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(433, 145);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"�v�Z���X�^�[�g";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &MyForm::buttonStart_Click);
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelQuestion->Location = System::Drawing::Point(646, 225);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(0, 33);
			this->labelQuestion->TabIndex = 1;
			this->labelQuestion->Visible = false;
			this->labelQuestion->VisibleChanged += gcnew System::EventHandler(this, &MyForm::labelQuestion_VisibleChanged);
			// 
			// textBoxQuestion1
			// 
			this->textBoxQuestion1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxQuestion1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->textBoxQuestion1->Location = System::Drawing::Point(493, 277);
			this->textBoxQuestion1->Name = L"textBoxQuestion1";
			this->textBoxQuestion1->Size = System::Drawing::Size(439, 39);
			this->textBoxQuestion1->TabIndex = 2;
			this->textBoxQuestion1->Visible = false;
			this->textBoxQuestion1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxQuestion1_TextChanged);
			this->textBoxQuestion1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBoxQuestion1_KeyDown);
			// 
			// labelJudge
			// 
			this->labelJudge->AutoSize = true;
			this->labelJudge->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelJudge->Location = System::Drawing::Point(487, 466);
			this->labelJudge->Name = L"labelJudge";
			this->labelJudge->Size = System::Drawing::Size(0, 33);
			this->labelJudge->TabIndex = 3;
			this->labelJudge->Visible = false;
			this->labelJudge->VisibleChanged += gcnew System::EventHandler(this, &MyForm::labelJudge_VisibleChanged);
			// 
			// buttonAnswer
			// 
			this->buttonAnswer->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonAnswer->Location = System::Drawing::Point(606, 330);
			this->buttonAnswer->Name = L"buttonAnswer";
			this->buttonAnswer->Size = System::Drawing::Size(204, 51);
			this->buttonAnswer->TabIndex = 4;
			this->buttonAnswer->Text = L"�𓚂���";
			this->buttonAnswer->UseVisualStyleBackColor = true;
			this->buttonAnswer->Visible = false;
			this->buttonAnswer->Click += gcnew System::EventHandler(this, &MyForm::buttonAnswer_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 10000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBoxResult1
			// 
			this->listBoxResult1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->listBoxResult1->FormattingEnabled = true;
			this->listBoxResult1->ItemHeight = 29;
			this->listBoxResult1->Location = System::Drawing::Point(493, 404);
			this->listBoxResult1->Name = L"listBoxResult1";
			this->listBoxResult1->Size = System::Drawing::Size(433, 294);
			this->listBoxResult1->TabIndex = 10;
			this->listBoxResult1->Visible = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ToolStripMenuItemFile });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1457, 42);
			this->menuStrip1->TabIndex = 11;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ToolStripMenuItemFile
			// 
			this->ToolStripMenuItemFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->OptionToolStripMenuItem,
					this->ScoreToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->ToolStripMenuItemFile->Name = L"ToolStripMenuItemFile";
			this->ToolStripMenuItemFile->Size = System::Drawing::Size(121, 38);
			this->ToolStripMenuItemFile->Text = L"�t�@�C��(&F)";
			this->ToolStripMenuItemFile->Click += gcnew System::EventHandler(this, &MyForm::�t�@�C��ToolStripMenuItem_Click);
			// 
			// OptionToolStripMenuItem
			// 
			this->OptionToolStripMenuItem->Name = L"OptionToolStripMenuItem";
			this->OptionToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->OptionToolStripMenuItem->Text = L"���ݒ�(&O)";
			this->OptionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::OptionToolStripMenuItem_Click);
			// 
			// ScoreToolStripMenuItem
			// 
			this->ScoreToolStripMenuItem->Name = L"ScoreToolStripMenuItem";
			this->ScoreToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->ScoreToolStripMenuItem->Text = L"�n�C�X�R�A(&H)";
			this->ScoreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ScoreToolStripMenuItem_Click);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->ExitToolStripMenuItem->Text = L"�I��(&E)";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(100, 100);
			this->ClientSize = System::Drawing::Size(1457, 832);
			this->Controls->Add(this->listBoxResult1);
			this->Controls->Add(this->buttonAnswer);
			this->Controls->Add(this->labelJudge);
			this->Controls->Add(this->textBoxQuestion1);
			this->Controls->Add(this->labelQuestion);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//�����Ǘ�����N���X��ϐ��Ɋi�[�B
		private:
			QuestionManager^ QManager;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//�����������B
		//�����Ǘ�����N���X���C���X�^���X���B
		QManager = gcnew QuestionManager();
		//���̏������������Ăяo���B
		QManager->initQuestion();
		
		//���݂̃n�C�X�R�A
		int highScore = 0;
		try{
			//�X�R�A�L�^�p�̃t�@�C�����J���B
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Score.dat");
			//���g������ꍇ�ǂݍ��ށB
			if (!reader->EndOfStream) {
				highScore = Int32::Parse(reader->ReadToEnd());
			}
			//�t�@�C�������B
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//�t�@�C����V���ɐV�K�쐬����B
			System::IO::File::AppendAllText("./Score.dat", "0");
			highScore = 0;
		}
	}

	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) {
		//�J�n�������s���B
		this->StartOfProgram();
	}
private: System::Void buttonAnswer_Click(System::Object^  sender, System::EventArgs^  e) {
	//���͂��ꂽ�𓚂�ǂݍ��ށB
	String^ inputAnswer = "";
	inputAnswer = textBoxQuestion1->Text;
	//�𓚂̐��ۂ𔻒肷��B
	if (QManager->AnswerCheck(inputAnswer) == true) {
		//����ɂ���Đ������s��������\���B
		this->listBoxResult1->Items->Add("�����ł��I�I�I�I");
	}
	else {
		//����ɂ���Đ������s��������\���B
		this->listBoxResult1->Items->Add("�s�����ł��I�I�I");
	}

	//�����ďo��B
	this->labelQuestion->Visible = false;
	this->labelQuestion->Visible = true;

	//���͂̃e�L�X�g�{�b�N�X���������B
	textBoxQuestion1->Text = "";
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//�I���������Ăяo���B
	this->EndOfProgram();
}
private: System::Void textBoxQuestion1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBoxQuestion1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	if (e->KeyCode == Keys::Enter) {
		//���͂��ꂽ�𓚂�ǂݍ��ށB
		String^ inputAnswer = "";
		inputAnswer = textBoxQuestion1->Text;
		//�𓚂̐��ۂ𔻒肷��B
		if (QManager->AnswerCheck(inputAnswer) == true) {
			//����ɂ���Đ������s��������\���B
			this->listBoxResult1->Items->Add("�����ł��I�I�I�I");
		}
		else {
			//����ɂ���Đ������s��������\���B
			this->listBoxResult1->Items->Add("�s�����ł��I�I�I");
		}
		//�����ďo��B
		this->labelQuestion->Visible = false;
		this->labelQuestion->Visible = true;
		//���͂̃e�L�X�g�{�b�N�X���������B
		textBoxQuestion1->Text = "";
	}
}

private: System::Void EndOfProgram() {
	//�^�C�}�[���I������B
	this->timer1->Enabled = false;
	//���ʂ�\���B
	QManager->outputResult();
	//�����B���B
	this->labelQuestion->Visible = false;
	//�𓚗p�̃e�L�X�g�{�b�N�X���B���B
	this->textBoxQuestion1->Visible = false;
	//�𓚃{�^�����B���B
	this->buttonAnswer->Visible = false;
	//���X�g�{�b�N�X���B���B
	this->listBoxResult1->Visible = false;
	//���X�g�{�b�N�X���������B
	this->listBoxResult1->Items->Clear();
	//�X�^�[�g�{�^����\���B
	this->buttonStart->Visible = true;
}
 private: System::Void StartOfProgram() {
	 //�v�Z����\���B
	 this->labelQuestion->Visible = true;
	 //�𓚗p�̃e�L�X�g�{�b�N�X��\���B
	 this->textBoxQuestion1->Visible = true;
	 //�𓚃{�^����\���B
	 this->buttonAnswer->Visible = true;
	 //�X�^�[�g�{�^�����B���B
	 this->buttonStart->Visible = false;
	 //���X�g��\������B
	 this->listBoxResult1->Visible = true;
	 this->labelJudge->Visible = false;
	 //�^�C�}�[���N���B
	 this->timer1->Enabled = true;
}
private: System::Void labelQuestion_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
	//���𐶐�����B
	if (this->labelQuestion->Visible) {
		this->labelQuestion->Text = QManager->QuestionGenerate();
	}
}
private: System::Void labelJudge_VisibleChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void �t�@�C��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	//�I�����邩���m�F���郁�b�Z�[�W�{�b�N�X��\������B
	if (System::Windows::Forms::DialogResult::Cancel == (MessageBox::Show("�I�����܂����H", "�m�F", MessageBoxButtons::OKCancel, MessageBoxIcon::Question))) {
		e->Cancel = true;
	}
}
private: System::Void ExitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//�t�H�[�������B
	this->Close();
}
private: System::Void OptionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//���ݒ�^�u�������ꂽ�Ƃ��ɐݒ��ʂ��C���X�^���X��
	OptionForm^ Opt = gcnew OptionForm();
	//�ݒ�t�H�[���ɓ��͂���Ă������Ԃ��^�C�}�[�ɐݒ肷��B
	Opt->timeLimit = this->timer1->Interval;
	//���[�_���\���B
	Opt->ShowDialog();
	//�v���p�e�B���^�C�}�[�ɐݒ�B
	this->timer1->Interval = Opt->timeLimit;
}
private: System::Void ScoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//�n�C�X�R�A�t�H�[�����J���B
	ScoreForm^ scr = gcnew ScoreForm();
	//�X�R�A�t�H�[�������[�_���\���B
	scr->ShowDialog();
}
};
}
