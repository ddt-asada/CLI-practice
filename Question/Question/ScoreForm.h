#pragma once

namespace Question {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ScoreForm �̊T�v
	/// </summary>
	public ref class ScoreForm : public System::Windows::Forms::Form
	{
	public:
		ScoreForm(void)
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
		~ScoreForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  labelScore;
	private: System::Windows::Forms::Button^  buttonExit;


	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(62, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�n�C�X�R�A";
			this->label1->Click += gcnew System::EventHandler(this, &ScoreForm::label1_Click);
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelScore->Location = System::Drawing::Point(307, 57);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(65, 33);
			this->labelScore->TabIndex = 1;
			this->labelScore->Text = L"0��";
			// 
			// buttonExit
			// 
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonExit->Location = System::Drawing::Point(138, 154);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(137, 66);
			this->buttonExit->TabIndex = 2;
			this->buttonExit->Text = L"����";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &ScoreForm::buttonExit_Click);
			// 
			// ScoreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(421, 276);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->labelScore);
			this->Controls->Add(this->label1);
			this->Name = L"ScoreForm";
			this->Text = L"ScoreForm";
			this->Load += gcnew System::EventHandler(this, &ScoreForm::ScoreForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ScoreForm_Load(System::Object^  sender, System::EventArgs^  e) {
		try {
			//�X�R�A�L�^�p�̃t�@�C�����J���B
			System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Score.dat");
			//�t�@�C���ɒ��g���������ꍇ�B
			if (!reader->EndOfStream) {
				this->labelScore->Text = reader->ReadToEnd() + "�_";
			}
			//�t�@�C�������B
			reader->Close();
		}
		catch (System::IO::FileNotFoundException^ ex) {
			//�t�@�C������z�Ȃ����Ȃ��ꍇ�V���Ƀt�@�C�����쐬�B
			System::IO::File::AppendAllText("./Score.dat", "0");
		}
	}
	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
