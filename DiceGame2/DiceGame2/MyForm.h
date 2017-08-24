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
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^  ゲームGToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ResetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ExitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  その他OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  EnvToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ScoreToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;



	protected:

	private:

		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
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
			this->ゲームGToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ResetToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->その他OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->label1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 20, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::Brown;
			this->label1->Location = System::Drawing::Point(71, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(658, 110);
			this->label1->TabIndex = 0;
			this->label1->Text = L"私と勝負しよう！\r\n連続正解で点数2倍だよ！";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(311, 74);
			this->button1->TabIndex = 1;
			this->button1->Text = L"スタート";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->radioButton1->Location = System::Drawing::Point(71, 278);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(118, 34);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"奇数だ！";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			this->radioButton1->Click += gcnew System::EventHandler(this, &MyForm::radio_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->radioButton3->Location = System::Drawing::Point(264, 278);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(118, 34);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"偶数だ！";
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
			this->labelResult->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 19.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->listBox1->Font = (gcnew System::Drawing::Font(L"ＭＳ ゴシック", 10.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
				this->ゲームGToolStripMenuItem,
					this->その他OToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1448, 42);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ゲームGToolStripMenuItem
			// 
			this->ゲームGToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ResetToolStripMenuItem,
					this->ExitToolStripMenuItem
			});
			this->ゲームGToolStripMenuItem->Name = L"ゲームGToolStripMenuItem";
			this->ゲームGToolStripMenuItem->Size = System::Drawing::Size(110, 38);
			this->ゲームGToolStripMenuItem->Text = L"ゲーム(&G)";
			// 
			// ResetToolStripMenuItem
			// 
			this->ResetToolStripMenuItem->Name = L"ResetToolStripMenuItem";
			this->ResetToolStripMenuItem->Size = System::Drawing::Size(283, 38);
			this->ResetToolStripMenuItem->Text = L"リセット(&R)";
			this->ResetToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			// 
			// ExitToolStripMenuItem
			// 
			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F4));
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(283, 38);
			this->ExitToolStripMenuItem->Text = L"終了(&X)";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// その他OToolStripMenuItem
			// 
			this->その他OToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->EnvToolStripMenuItem,
					this->ScoreToolStripMenuItem
			});
			this->その他OToolStripMenuItem->Name = L"その他OToolStripMenuItem";
			this->その他OToolStripMenuItem->Size = System::Drawing::Size(121, 38);
			this->その他OToolStripMenuItem->Text = L"その他(&O)";
			// 
			// EnvToolStripMenuItem
			// 
			this->EnvToolStripMenuItem->Name = L"EnvToolStripMenuItem";
			this->EnvToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->EnvToolStripMenuItem->Text = L"環境設定(&E)";
			this->EnvToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::EnvToolStripMenuItem_Click);
			// 
			// ScoreToolStripMenuItem
			// 
			this->ScoreToolStripMenuItem->Name = L"ScoreToolStripMenuItem";
			this->ScoreToolStripMenuItem->Size = System::Drawing::Size(268, 38);
			this->ScoreToolStripMenuItem->Text = L"ハイスコア(&H)";
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
				//点数起算用のコレクション
				List<int>^ _historyCollection;
				

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//ダイスのクラスをインスタンス化。
		_dice = gcnew Dice(6);
		//乱数より表示するダイスを選択。
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
			MessageBox::Show("奇数が選択されました");
		}
		else if (this->radioButton3->Checked == true) {
			MessageBox::Show("偶数が選択されました");
		}
		else {
			MessageBox::Show("奇数か偶数か選んでください", "注意！");
		}

		//サイコロの目を決定するための乱数クラスをインスタンス化。
		Random^ randomDice;
		randomDice = gcnew Random();

		//生成したサイコロの目を格納する変数。
		int diceNumber = 0;

		//サイコロの目を1以上7より下で生成する。
		diceNumber = randomDice->Next(1, 7);

		//生成したサイコロの目に応じたサイコロを表示する関数を呼び出す。
		ShowDice(diceNumber);

		bool winFlag = IsWinGame(diceNumber);

		//勝敗に応じた画像を表示。
		ShowPicture(winFlag);*/
		ChangeControlStatus(true);

	}

			 private: System::Void ShowDice(int showDiceNumber) {
				 //全てのサイコロを非表示にする初期化処理。
				 this->pictureDice1->Visible = false;
				 this->pictureDice2->Visible = false;
				 this->pictureDice3->Visible = false;
				 this->pictureDice4->Visible = false;
				 this->pictureDice5->Visible = false;
				 this->pictureDice6->Visible = false;

				 //生成された乱数に応じたサイコロの目を表示する。
				 switch (showDiceNumber) {
				 case 1:
					 //1のサイコロを表示する。
					 this->pictureDice1->Visible = true;
					 break;

				 case 2:
					 //2のサイコロを表示する。
					 this->pictureDice2->Visible = true;
					 break;

				 case 3:
					 //3のサイコロを表示する。
					 this->pictureDice3->Visible = true;
					 break;

				 case 4:
					 //4のサイコロを表示する。
					 this->pictureDice4->Visible = true;
					 break;

				 case 5:
					 //3のサイコロを表示する。
					 this->pictureDice5->Visible = true;
					 break;

				 case 6:
					 //4のサイコロを表示する。
					 this->pictureDice6->Visible = true;
					 break;

				 default:
					 break;
				 }
			 }

					  //勝敗の判定を行う関数。
					  private: bool IsWinGame(int showDiceNumber) {
						  //奇数と偶数どちらを選んだかを保存する文字列。
						  String^ selectedValue;
						  if (radioButton3->Checked == true) {
							  selectedValue = "偶数";
						  }
						  else if (radioButton1->Checked == true) {
							  selectedValue = "奇数";
						  }

						  //奇数と偶数どちらを選んだかを保存する文字列
						  String^ resultValue;
						  if (showDiceNumber % 2 == 0) {
							  resultValue = "偶数";
						  }
						  else{
							  resultValue = "奇数";
						  }

						  //予想と結果が一致するかで勝敗を判定。
						  if (selectedValue == resultValue) {
							  return true;
						  }
						  else if(selectedValue != resultValue){
							  return false;
						  }
					  }

							   //勝敗に応じた画像を表示する関数。
							   private: System::Void ShowPicture(bool winGame) {
								   //勝敗の判定が格納されていたら。
								   if (winGame) {
									   //文字を表示。
									   this->labelResult->Text = "あたり！";
									   //色を赤に設定する。
									   this->labelResult->ForeColor = Color::Red;
									   //勝利時の画像を表示。
									   this->pictureWin->Visible = true;
									   //負け画像を非表示にする。
									   this->pictureLose->Visible = false;
									   //背景を白に設定する。
									   this->BackColor = Color::White;
								   }//負けたとき
								   else {
									   //文字を表示。
									   this->labelResult->Text = "はずれ…";
									   //色を赤に設定する。
									   this->labelResult->ForeColor = Color::Black;
									   //勝利時の画像を表示。
									   this->pictureWin->Visible = false;
									   //負け画像を非表示にする。
									   this->pictureLose->Visible = true;
									   //背景を白に設定する。
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
	if (System::Windows::Forms::DialogResult::Cancel == MessageBox::Show("ゲームを終了しますか？", "確認", MessageBoxButtons::OKCancel, MessageBoxIcon::Error)) {
		e->Cancel = true;
	}
}

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//サイコロを振る。
	_dice->Shake();
	//表示を反映する。
	ShowDice(_dice->Number);
}

		 private: System::Void ChangeControlStatus(bool playing) {
			 //サイコロ用のタイマーを起動。
			 timer1->Enabled = playing;
			 //スタートボタンをむこうにする。
			 this->button1->Enabled = !playing;
			 //奇数・偶数ボタン
			 this->radioButton3->Enabled = playing;
			 this->radioButton1->Enabled = playing;
			 if (playing) {
				 this->radioButton1->Checked = false;
				 this->radioButton3->Checked = false;
			 }
		 }

				  private: System::Void ManageHistory(bool winGame) {
					  //今回の得点用変数。
					  int nowPoint = 0;
					  if (winGame) {
						  //現在のゲーム数を取得。
						  int gameCount = _historyCollection->Count;
						  //前回の特典用変数を取得。
						  int prePoint = 0;
						  if (gameCount > 0) {
							  //1回以上ゲームをしていれば前回の点数を設定。
							  prePoint = _historyCollection[gameCount - 1];
						  }
						  //今回の特典計算
						  if (prePoint == 0) {
							  //前回負けていれば1点
							  nowPoint = 1;
						  }
						  else {
							  //宴会勝っていれば2倍
							  nowPoint = prePoint * 2;
						  }
					  }

					  //リストボックスに追加
					  if ((_dice->Number % 2) == 0) {
						  this->listBox1->Items->Add("偶数です。" + labelResult->Text + ":" + nowPoint.ToString() + "点");
					  }
					  else {
						  this->listBox1->Items->Add("奇数です。" + labelResult->Text + ":" + nowPoint.ToString() + "点");
					  }
					//コレクションにゲームの履歴を追加。
					_historyCollection->Add(nowPoint);

					//10回ゲームをすれば、結果を集計する。
					if (_historyCollection->Count == 10) {
						//勝ち総数
						int winCount = 0;
						//負け総数。
						int loseCount = 0;
						//合計得点
						int sumPoint = 0;
						//添字
						int i = 0;
						while (i < _historyCollection->Count) {
							//コレクションから履歴の取り出し
							int historyPoint = _historyCollection[i];
							//合計得点を加算。
							sumPoint = sumPoint + historyPoint;
							//勝ち総数と負け総数の加算
							if (historyPoint == 0) {
								loseCount++;
							}
							else {
								winCount++;
							}
							i++;
						}
						MessageBox::Show("合計得点は" + sumPoint + "点でした", winCount + "勝" + loseCount + "敗");
						//スタートボタンをロックする。
						this->button1->Enabled = false;

						//現在のハイスコア
						int highScore = 0;
						try {
							//スコア記録用のDice.datを開く。
							System::IO::StreamReader^ reader = gcnew System::IO::StreamReader("./Dice.dat");
							//Dice.datに中身がある場合、その値を変数にセット
							if (!reader->EndOfStream) {
								highScore = Int32::Parse(reader->ReadToEnd());
							}
							//Dice.datを閉じる
							reader->Close();
						}
						catch (System::IO::FileNotFoundException^ ex) {
							//ファイルが存在しない場合、初期値0で新たなテキストファイルを作成
							System::IO::File::AppendAllText("./Dice.dat", "0");
							highScore = 0;
							System::Diagnostics::Debug::WriteLine("---エラーメッセージ---\n" + ex->Message);
						}
						//ハイスコアより今回の特典が高い場合に、これをDice.datに記録。
						if (sumPoint > highScore) {
							System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Dice.dat", false);
							writer->Write((gcnew Int32(sumPoint))->ToString());
							writer->Close();
						}
					}

				  }
private: System::Void radio_Click(System::Object^  sender, System::EventArgs^  e) {
	//各コントロールをゲーム終了の状態に変更
	ChangeControlStatus(false);
	//勝敗の判定。
	bool winflg = IsWinGame(_dice->Number);
	//勝敗の画像の表示
	ShowPicture(winflg);
	//履歴の管理
	ManageHistory(winflg);
}
private: System::Void ExitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void EnvToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//FormOptionをインスタンス化
	MyForm1^ frm = gcnew MyForm1();
	//タイマー感覚をプロパティに設定
	frm->DiceTimer = this->timer1->Interval;
	//モーダルを表示
	frm->ShowDialog();
	//プロパティをタイマー感覚に設定。
	this->timer1->Interval = frm->DiceTimer;
}
private: System::Void ScoreToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	FormScore^ frm = gcnew FormScore();

	frm->ShowDialog();
}
};
}
