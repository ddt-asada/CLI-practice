#include "MyForm.h"

using namespace DiceGame2;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}