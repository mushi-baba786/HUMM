#include "MainPage.h"
#include "Inventory.h"

using namespace System;
using namespace System::Windows::Forms;

void OnFormClosed(System::Object ^sender, System::Windows::Forms::FormClosedEventArgs ^e) {
	Form^ form = safe_cast<Form^>(sender);
	form->FormClosed -= gcnew FormClosedEventHandler(&OnFormClosed);
	if (Application::OpenForms->Count == 0) Application::Exit();
	else Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(&OnFormClosed);
}

[STAThreadAttribute]
int main() {

	Inventory invent;
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HUMM::MainPage m_menu;
	Application::Run(%m_menu);

	return 0;
}