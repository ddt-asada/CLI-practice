#pragma once

namespace Question {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// OptionForm の概要
	/// </summary>
	public ref class OptionForm : public System::Windows::Forms::Form
	{
	public:
		OptionForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
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
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
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
			this->labelTimeOption->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->labelTimeOption->Location = System::Drawing::Point(86, 87);
			this->labelTimeOption->Name = L"labelTimeOption";
			this->labelTimeOption->Size = System::Drawing::Size(207, 33);
			this->labelTimeOption->TabIndex = 0;
			this->labelTimeOption->Text = L"制限時間(秒)";
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
			this->buttonOption->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonOption->Location = System::Drawing::Point(92, 164);
			this->buttonOption->Name = L"buttonOption";
			this->buttonOption->Size = System::Drawing::Size(128, 56);
			this->buttonOption->TabIndex = 2;
			this->buttonOption->Text = L"設定";
			this->buttonOption->UseVisualStyleBackColor = true;
			this->buttonOption->Click += gcnew System::EventHandler(this, &OptionForm::button1_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->buttonCancel->Location = System::Drawing::Point(241, 164);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(225, 56);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"キャンセル";
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
					//制限時間のゲッタ。
					int get() {
						return TimeLimit;
					}

					//制限時間のセッタ
					void set(int newTimeLimit) {
						TimeLimit = newTimeLimit;
					}
				}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//設定ボタンが押されたら入力した時間を新たな制限時間として設定する。
		this->TimeLimit = Convert::ToInt32(this->textBox1->Text) * 1000;
		//環境設定フォームを閉じる。
		this->Close();
	}
	private: System::Void OptionForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//開かれたときにここのテキストボックスに制限時間の設定を読み込む。
		this->textBox1->Text = Convert::ToString(this->TimeLimit / 1000);
	}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	//キャンセルボタンが押されたらフォームを閉じる。
	this->Close();
}
};
}
