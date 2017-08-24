#pragma once

namespace DiceGame2 {
	ref class Dice
	{
	private:
		int _number;

	public:
		Dice();

		Dice(int initNumber);

		void Shake();

		//プロパティ
		property int Number
		{
			//ナンバーのゲッタ
			int get()
			{
				return _number;
			}
			//ナンバーのセッタ
			void set(int newNumber) {
				if (newNumber >= 1 && newNumber <= 6) {
					//メンバのナンバーにセット。
					_number = newNumber;
				}
			}
		}
	};

}