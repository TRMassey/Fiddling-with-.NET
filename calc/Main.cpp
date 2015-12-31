#using <mscorlib.dll>
#include "calcForm.h"

int _stdcall WinMain()
{
		calcForm *form = new calcForm;
		Application::Run(form);

	return 0;
}