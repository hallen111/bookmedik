#ifndef INICIO_H_INCLUDED
#define INICIO_H_INCLUDED
#include "wx/wx.h"

class Inicio : public wxFrame
{
    public:
        wxPanel *panel;
        wxMenuBar *menubar;
        wxMenu *file;
        wxMenu *help;
        Inicio(const wxString& titulo);
        void OnQuit(wxCommandEvent& event);
        void AddCita(wxCommandEvent& event);
        void GetHelp(wxCommandEvent& event);
};

#endif // INICIO_H_INCLUDED
