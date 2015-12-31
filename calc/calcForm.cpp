#include "calcForm.h"
#include "equation.h"
#include "addition.h"
#include "subtraction.h"
#using <mscorlib.dll>

calcForm::calcForm(){
	initForm();
}

void calcForm::initForm(){
	this->Text = S"Simple Calculator Example";
	this->Size = Drawing::Size(350, 300);
	this->MaximizeBox = false;
	this->MinimizeBox = false;
	this->StartPosition = FormStartPosition::CenterScreen;
	this->FormBorderStyle = FormBorderStyle::FixedDialog;

	this->box = new GroupBox;
	this->box->Location = Point(20, 10);
	this->box->Size = Drawing::Size(200, 150);
	this->box->Text = S"Calculate";

	this->lone = new Label;
	this->lone->Location = Point(20, 30);
	this->lone->AutoSize = true;
	this->lone->Text = S"Input One";
	this->box->Controls->Add(lone);

	this->tone = new TextBox;
	this->tone->Location = Point(100, 50);
	this->tone->Text = S"0";
	this->box->Controls->Add(tone);

	this->ltwo = new Label;
	this->ltwo->Location = Point(20, 60);
	this->ltwo->AutoSize = true;
	this->ltwo->Text = S"Input One";
	this->box->Controls->Add(ltwo);

	this->ttwo = new TextBox;
	this->ttwo->Location = Point(100, 100);
	this->ttwo->Text = S"0";
	this->box->Controls->Add(ttwo);

	this->lanswer = new Label;
	this->lanswer->Location = Point(20, 150);
	this->lanswer->AutoSize = true;
	this->lanswer->Text = S"Answer: ";
	this->box->Controls->Add(lanswer);

	this->tanswer = new TextBox;
	this->tanswer->Location = Point(100, 150);
	this->tanswer->Text = S"0";
	this->box->Controls->Add(tanswer);

	this->box->Controls->Add(box);

	this->btnClose = new Button;
	this->btnClose->Location = Point(240, 12);
	this->btnClose->Text = S"Close";
	this->btnClose->add_Click(new EventHandler(this, &calcForm::CloseClick));
	this->Controls->Add(btnClose);

	this->btnAdd = new Button;
	this->btnAdd->Location = Point(240, 40);
	this->btnAdd->Text = S"Add";
	this->btnAdd->add_Click(new EventHandler(this, &calcForm::AddClick));
	this->Controls->Add(btnAdd);

	this->btnSub = new Button;
	this->btnSub->Location = Point(240, 60);
	this->btnSub->Text = S"Subtract";
	this->btnSub->add_Click(new EventHandler(this, &calcForm::SubClick));
	this->Controls->Add(btnSub);
}

void calcForm::CloseClick(Object* Sender, EventArgs* Args){
	Close();
}

void calcForm::AddClick(Object* Sender, EventArgs* Args){
	int one = tone->Text->ToDouble(0);
	int two = ttwo->Text->ToDouble(0);

	equation* Eq = new addition;

	Eq->setNums(one, two);

	this->tanswer->Text = Eq->math().ToString();
}

void calcForm::SubClick(Object* Sender, EventArgs* Args){
	int one = tone->Text->ToDouble(0);
	int two = ttwo->Text->ToDouble(0);

	equation* Eq = new subtraction;

	Eq->setNums(one, two);

	this->tanswer->Text = Eq->math().ToString();
}