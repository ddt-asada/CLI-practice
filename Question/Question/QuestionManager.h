#pragma once

namespace Question {

	/*問題にかかわるものを管理するクラス*/
	ref class QuestionManager
	{
	private:
		int Cal1 = 0;	//計算に使う値
		int Cal2 = 0;	//計算に使う値
		int Count = 0;	//正解数をカウントする値。
		int Questions = 0;	//出題数をカウントする値。

	public:
		//デフォルトコンストラクタ。
		QuestionManager() {
			//全て初期化されているので何もしない。
		};

		/*関数名：initQuestion
		  概要：クラスの値を初期化する処理
		  引数：なし
		  戻り値：なし
		  作成日：2017.8.24
		  作成者：K.Asada
		*/
		System::Void initQuestion() {
			this->Cal1 = 0;
			this->Cal2 = 0;
			this->Count = 0;
			this->Questions = -1;
		}

		/*関数名：QuestionGenerate
		  概要：問題を1～99の乱数より生成する処理
		  引数：なし
		  戻り値：String:生成した計算問題
		  作成日：2017.8.24
		  作成者：K.Asada
		  */
		System::String^ QuestionGenerate() {
			//問題の生成に使う乱数クラスをインスタンス化。
			System::Random^ ran = gcnew System::Random();
			this->Cal1 = ran->Next(1, 100);     //計算値その1を1～99の乱数より生成。
			this->Cal2 = ran->Next(1, 100);		//計算値その2を1～99の乱数より生成。

			//出題数をカウント。
			this->Questions++;
			
			//生成した問題を返却する。
			return (Cal1.ToString() + "+" + Cal2.ToString() + "=");
		}

		/*関数名：AnswerCheck
		  概要：解答の正否を判定する処理
		  引数：String：入力された解答
		  戻り値：bool：解答の正否、正解ならtrueを、不正解ならfalseを返す
		  作成日：2017.8.34
		  作成者：K.Asada
		  */
		System::Boolean AnswerCheck(System::String^ Answer) {
			//問題と解答が一致しているかを判定。
			if (Answer == (Cal1 + Cal2).ToString()) {
				//正解数をカウント。
				this->Count++;
				//正解ならtrueを返す。
				return true;
			//不正解なら
			}
			else {
				//不正解ならfalseを返す。
				return false;
			}
		}

		/*関数名：outputResult
		  概要：計算問題の最終結果と初期化処理を同時に行う
		  引数：なし
		  戻り値：なし
		  作成日：2017.8.24
		  作成者：K.Asada
		  */
		System::Void outputResult() {
			//最終結果を表示する。
			System::Windows::Forms::MessageBox::Show(this->Questions.ToString() + "問中" + this->Count.ToString() + "問正解です。", "結果");
			//ハイスコアを更新した場合記録する。
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Score.dat");
			writer->Write(this->Count.ToString());
			//ファイルを閉じる。
			writer->Close();
			//クラスの値をすべて初期化する
			this->initQuestion();
		}
	};
}