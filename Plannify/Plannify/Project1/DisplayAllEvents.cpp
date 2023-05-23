#include "DisplayAllEvents.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::DisplayAllEvents form;
	Application::Run(% form);
}