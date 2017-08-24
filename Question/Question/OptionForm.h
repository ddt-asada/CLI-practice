#pragma once

namespace Question {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// OptionForm �̊T�v
	/// </summary>
	public ref class OptionForm : public System::Windows::Forms::Form
	{
	public:
		OptionForm(void)
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
		~OptionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelTimeOption;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonOption;
	private: System::Windows::Forms::Button^  buttonCancel;

	protected:

	protected:

	protected:

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
			this->labelTimeOption = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOption = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelTimeOption
			// 
			this->labelTimeOption->AutoSize = true;
			this->labelTimeOption->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelTimeOption->Location = System::Drawing::Point(86, 87);
			this->labelTimeOption->Name = L"labelTimeOption";
			this->labelTimeOption->Size = System::Drawing::Size(207, 33);
			this->labelTimeOption->TabIndex = 0;
			this->labelTimeOption->Text = L"��������(�b)";
			this->labelTimeOption->Click += gcnew System::EventHandler(this, &OptionForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(331, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 31);
			this->textBox1->TabIndex = 1;
			// 
			// buttonOption
			// 
			this->buttonOption->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonOption->Location = System::Drawing::Point(92, 164);
			this->buttonOption->Name = L"buttonOption";
			this->buttonOption->Size = System::Drawing::Size(128, 56);
			this->buttonOption->TabIndex = 2;
			this->buttonOption->Text = L"�ݒ�";
			this->buttonOption->UseVisualStyleBackColor = true;
			this->buttonOption->Click += gcnew System::EventHandler(this, &OptionForm::button1_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"�l�r �S�V�b�N", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonCancel->Location = System::Drawing::Point(241, 164);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(225, 56);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"�L�����Z��";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &OptionForm::buttonCancel_Click);
			// 
			// OptionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 362);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOption);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->labelTimeOption);
			this->Name = L"OptionForm";
			this->Text = L"OptionForm";
			this->Load += gcnew System::EventHandler(this, &OptionForm::OptionForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int TimeLimit;
			public:
				property int timeLimit {
					//�������Ԃ̃Q�b�^�B
					int get() {
						return TimeLimit;
					}

					//�������Ԃ̃Z�b�^
					void set(int newTimeLimit) {
						TimeLimit = newTimeLimit;
					}
				}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//�ݒ�{�^���������ꂽ����͂������Ԃ�V���Ȑ������ԂƂ��Đݒ肷��B
		this->TimeLimit = Convert::ToInt32(this->textBox1->Text) * 1000;
		//���ݒ�t�H�[�������B
		this->Close();
	}
	private: System::Void OptionForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//�J���ꂽ�Ƃ��ɂ����̃e�L�X�g�{�b�N�X�ɐ������Ԃ̐ݒ��ǂݍ��ށB
		this->textBox1->Text = Convert::ToString(this->TimeLimit / 1000);
	}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	//�L�����Z���{�^���������ꂽ��t�H�[�������B
	this->Close();
}
};
}
