#pragma once

namespace DiceGame2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm1 の概要
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(58, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"サイコロのころがる間隔（ミリ秒）";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(362, 59);
			this->textBox1->MaxLength = 4;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 31);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// buttonOK
			// 
			this->buttonOK->Location = System::Drawing::Point(62, 119);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(199, 56);
			this->buttonOK->TabIndex = 2;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &MyForm1::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->Location = System::Drawing::Point(343, 119);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(225, 56);
			this->buttonCancel->TabIndex = 3;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &MyForm1::buttonCancel_Click);
			// 
			// MyForm1
			// 
			this->AcceptButton = this->buttonOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(628, 205);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"環境設定";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			int _diceTimer;

			public:
				property int DiceTimer
				{
					int get() {
						return _diceTimer;
					}

					void set(int _newDiceTimer) {
						if (_newDiceTimer < 1) {
							throw gcnew Exception("Intervalは1以上を設定してください。");
						}
						_diceTimer = _newDiceTimer;
					}
				}
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		//タイマー設定のテキストボックスに表示
		this->textBox1->Text = Convert::ToString(this->DiceTimer);
		
	}
private: System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		//テキストを数値に変換してプロパティに設定
		this->DiceTimer = Convert::ToInt32(this->textBox1->Text);
		this->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("正しい数値を設定してください", "注意", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		System::Diagnostics::Debug::WriteLine("---エラーメッセージ---\n" + ex->Message);
	}
	finally{
		System::Diagnostics::Debug::WriteLine("-----");
	}
}
};
}
