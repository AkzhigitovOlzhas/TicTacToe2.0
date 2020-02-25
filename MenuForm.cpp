#include "MenuForm.h"

using namespace TicTacToe;

[STAThreadAttribute]

int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);


	// Create the main window and run it
	Application::Run(gcnew MenuForm());

	return 0;
}

