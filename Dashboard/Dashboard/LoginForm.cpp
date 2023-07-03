#include "LoginForm.h"
#include <Windows.h>
#include "iostream"
#include "wnetwrap.h"

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

    //Doesnt seem to work on localhost
    //wrap::Response r = wrap::HttpsRequest(wrap::Url{"https://localhost/"});
    //std::cout << r.url << std::endl;
    //std::cout << r.text << std::endl; // basic parser
    //std::cout << r.status_code << std::endl; // 200

	Dashboard::LoginForm form;
	Application::Run(% form);
}