#pragma once

namespace Question {

	/*���ɂ��������̂��Ǘ�����N���X*/
	ref class QuestionManager
	{
	private:
		int Cal1 = 0;	//�v�Z�Ɏg���l
		int Cal2 = 0;	//�v�Z�Ɏg���l
		int Count = 0;	//���𐔂��J�E���g����l�B
		int Questions = 0;	//�o�萔���J�E���g����l�B

	public:
		//�f�t�H���g�R���X�g���N�^�B
		QuestionManager() {
			//�S�ď���������Ă���̂ŉ������Ȃ��B
		};

		/*�֐����FinitQuestion
		  �T�v�F�N���X�̒l�����������鏈��
		  �����F�Ȃ�
		  �߂�l�F�Ȃ�
		  �쐬���F2017.8.24
		  �쐬�ҁFK.Asada
		*/
		System::Void initQuestion() {
			this->Cal1 = 0;
			this->Cal2 = 0;
			this->Count = 0;
			this->Questions = -1;
		}

		/*�֐����FQuestionGenerate
		  �T�v�F����1�`99�̗�����萶�����鏈��
		  �����F�Ȃ�
		  �߂�l�FString:���������v�Z���
		  �쐬���F2017.8.24
		  �쐬�ҁFK.Asada
		  */
		System::String^ QuestionGenerate() {
			//���̐����Ɏg�������N���X���C���X�^���X���B
			System::Random^ ran = gcnew System::Random();
			this->Cal1 = ran->Next(1, 100);     //�v�Z�l����1��1�`99�̗�����萶���B
			this->Cal2 = ran->Next(1, 100);		//�v�Z�l����2��1�`99�̗�����萶���B

			//�o�萔���J�E���g�B
			this->Questions++;
			
			//������������ԋp����B
			return (Cal1.ToString() + "+" + Cal2.ToString() + "=");
		}

		/*�֐����FAnswerCheck
		  �T�v�F�𓚂̐��ۂ𔻒肷�鏈��
		  �����FString�F���͂��ꂽ��
		  �߂�l�Fbool�F�𓚂̐��ہA�����Ȃ�true���A�s�����Ȃ�false��Ԃ�
		  �쐬���F2017.8.34
		  �쐬�ҁFK.Asada
		  */
		System::Boolean AnswerCheck(System::String^ Answer) {
			//���Ɖ𓚂���v���Ă��邩�𔻒�B
			if (Answer == (Cal1 + Cal2).ToString()) {
				//���𐔂��J�E���g�B
				this->Count++;
				//�����Ȃ�true��Ԃ��B
				return true;
			//�s�����Ȃ�
			}
			else {
				//�s�����Ȃ�false��Ԃ��B
				return false;
			}
		}

		/*�֐����FoutputResult
		  �T�v�F�v�Z���̍ŏI���ʂƏ����������𓯎��ɍs��
		  �����F�Ȃ�
		  �߂�l�F�Ȃ�
		  �쐬���F2017.8.24
		  �쐬�ҁFK.Asada
		  */
		System::Void outputResult() {
			//�ŏI���ʂ�\������B
			System::Windows::Forms::MessageBox::Show(this->Questions.ToString() + "�⒆" + this->Count.ToString() + "�␳���ł��B", "����");
			//�n�C�X�R�A���X�V�����ꍇ�L�^����B
			System::IO::StreamWriter^ writer = gcnew System::IO::StreamWriter("./Score.dat");
			writer->Write(this->Count.ToString());
			//�t�@�C�������B
			writer->Close();
			//�N���X�̒l�����ׂď���������
			this->initQuestion();
		}
	};
}