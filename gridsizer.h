#include <wx/wx.h>
#include <iostream>
using namespace std;

class GridSizer : public wxFrame
{
public:
  GridSizer(const wxString& title);

  wxBoxSizer *sizer;
  wxGridSizer *gs;
  wxTextCtrl *display;
  void onCls (wxCommandEvent&);
  void onUno (wxCommandEvent&);
  void onDos (wxCommandEvent&);
  void onTres (wxCommandEvent&);
  void onCuatro (wxCommandEvent&);
  void onCinco (wxCommandEvent&);
  void onSeis (wxCommandEvent&);
  void onSiete (wxCommandEvent&);
  void onOcho (wxCommandEvent&);
  void onNueve (wxCommandEvent&);
  void onCero (wxCommandEvent&);
  void onBtSum (wxCommandEvent&);
  void onBtMul (wxCommandEvent&);
  void onBtRest (wxCommandEvent&);
  void onBtDiv (wxCommandEvent&);
  void onBtClose (wxCommandEvent&);
  void onBtBack (wxCommandEvent&);


private:
  int valor1;
  int valor2;
  string operacion;
  int nClicks;
  	
  DECLARE_EVENT_TABLE()
};
