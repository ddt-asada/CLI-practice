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

		//�v���p�e�B
		property int Number
		{
			//�i���o�[�̃Q�b�^
			int get()
			{
				return _number;
			}
			//�i���o�[�̃Z�b�^
			void set(int newNumber) {
				if (newNumber >= 1 && newNumber <= 6) {
					//�����o�̃i���o�[�ɃZ�b�g�B
					_number = newNumber;
				}
			}
		}
	};

}