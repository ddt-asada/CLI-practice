#include "MyForm.h"

using namespace Question;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}