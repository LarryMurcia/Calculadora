#include "gridsizer.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1055, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1054 , wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1052, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1051, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1053, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1010, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

string setstring(int a){
	stringstream ss;
	ss<<a;
	string tot=ss.str();
	return tot;
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	display->Clear();
	valor1=0;
	valor2=0;
}


void GridSizer::onUno (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 1;
		display->Clear();
		display->SetValue(setstring(valor1));
	}
        else{
        
		if (nClicks==2){
	        	valor2 = 1;
			display->Clear();
			display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}
void GridSizer::onDos (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 2;
		display->Clear();
       		display->SetValue(setstring(valor1));
	}
	else{
		if (nClicks==2){
	        	valor2 = 2;
			display->Clear();
	        	display->SetValue(setstring(valor2));
	        }
		nClicks=0;
	}
}

void GridSizer::onTres (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 3;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 3;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}


void GridSizer::onCuatro (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 4;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 4;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}


void GridSizer::onCinco (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 5;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 5;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}


void GridSizer::onSeis (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 6;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 6;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;
	}
}


void GridSizer::onSiete (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 7;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 7;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}


void GridSizer::onOcho (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 8;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 8;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}


void GridSizer::onNueve (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 9;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 9;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}


void GridSizer::onCero (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	if (nClicks==1){
		valor1 = 0;
		display->Clear();
	        display->SetValue(setstring(valor1));
	}
	else{
			if (nClicks==2){
			valor2 = 0;
			display->Clear();
	        	display->SetValue(setstring(valor2));
		}
		nClicks=0;

	}
}



//operators

void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	int total = valor1 + valor2;
	display->Clear();
	display->SetValue(setstring(valor1)+" "+"+"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtMul (wxCommandEvent& WXUNUSED (event)) {
	int total= valor1*valor2;
	display->Clear();
	display->SetValue(setstring(valor1)+" "+"*"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)) {
	float  total= float(valor1) / valor2;
	display->Clear();
	display->SetValue(setstring(total));
	display->SetValue(setstring(valor1)+" "+"/"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtRest (wxCommandEvent& WXUNUSED (event)) {
	int total= valor1 - valor2;
	stringstream ss;
	display->Clear ();
	display->SetValue(setstring(valor1)+" "+"-"+" "+setstring(valor2)+" "+"="+" "+setstring(total));

}

void GridSizer::onBtClose (wxCommandEvent& WXUNUSED (event)) {
	Close(TRUE);
}
void GridSizer::onBtBack (wxCommandEvent& WXUNUSED (event)) {
	nClicks+=1;
	if (nClicks==1){
		valor2=0;
	}
	else{
		if (nClicks=2){
		valor1=0;
		}
		nClicks=0;

	}

}

BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1001,  GridSizer::onUno)
    EVT_BUTTON(1002,  GridSizer::onDos)
    EVT_BUTTON(1003,  GridSizer::onTres)
    EVT_BUTTON(1004,  GridSizer::onCuatro)
    EVT_BUTTON(1005,  GridSizer::onCinco)
    EVT_BUTTON(1006,  GridSizer::onSeis)
    EVT_BUTTON(1007,  GridSizer::onSiete)
    EVT_BUTTON(1008,  GridSizer::onOcho)
    EVT_BUTTON(1009,  GridSizer::onNueve)
    EVT_BUTTON(1010,  GridSizer::onCero)



    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1051,  GridSizer::onBtMul)
    EVT_BUTTON(1052,  GridSizer::onBtDiv)
    EVT_BUTTON(1053,  GridSizer::onBtRest)
    EVT_BUTTON(1054,  GridSizer::onBtClose)
    EVT_BUTTON(1055,  GridSizer::onBtBack)

END_EVENT_TABLE()
