#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


// Mod�le mono-thread cloisonn� pour WinForms
[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    // Enabling Windows XP visual effects before any controls are created
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    PROSIT5::MyForm monFormulaire;
    Application::Run(% monFormulaire);      // probl�me 10
    return 0;
}
