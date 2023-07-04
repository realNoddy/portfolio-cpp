#include "LoginForm.h"
#include <Windows.h>
#include "iostream"

using namespace System;
using namespace System::Windows::Forms;

void SpawnConsoleWindow()
{
    // Allocate a new console for the calling process
    AllocConsole();

    // Redirect cout to the console
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    std::ios::sync_with_stdio();
}

void main() {
	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false);

    SpawnConsoleWindow();

	Dashboard::LoginForm form;
	Application::Run(% form);
}