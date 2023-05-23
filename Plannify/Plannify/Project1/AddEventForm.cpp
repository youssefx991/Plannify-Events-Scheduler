#include "AddEventForm.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::AddEventForm form;
	Application::Run(% form);
}













