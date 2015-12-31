#using <mscorlib.dll>
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

__gc class calcForm : public Form{
public: 
	calcForm();
	void initForm();

private:
	GroupBox* box;
	Label* lone;
	Label* ltwo;
	TextBox* tone;
	TextBox* ttwo;
	Label* lanswer;
	TextBox* tanswer;
	Button* btnAdd;
	Button* btnSub;
	void AddClick(Object* Sender, EventArgs* Args);
	void SubClick(Object* Sender, EventArgs* Args);
	void CloseClick(Object* Sender, EventArgs* Args);
	Button* btnClose;
};