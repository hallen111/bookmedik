#include "Inicio.h"

Inicio::Inicio(const wxString& titulo)
    : wxFrame(NULL, wxID_ANY, titulo)
{
    panel = new wxPanel(this, -1);

    menubar = new wxMenuBar;
    file = new wxMenu;
    file->Append(wxID_EXIT, wxT("&Salir"));
    help = new wxMenu;
    help->Append(wxID_HELP, wxT("&Manual en linea"));
    menubar->Append(file, wxT("&Archivo"));
    menubar->Append(help, wxT("&Ayuda"));
    SetMenuBar(menubar);

    wxBitmap exit(wxT("assets/exit.png"), wxBITMAP_TYPE_PNG);
    wxBitmap add(wxT("assets/add.png"), wxBITMAP_TYPE_PNG);
    wxToolBar *toolbar = CreateToolBar();
    toolbar->AddTool(wxID_ADD, wxT("Añadir cita"), add);
    toolbar->AddTool(wxID_EXIT, wxT("Salir"), exit);
    toolbar->Realize();

    Connect(wxID_EXIT, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(Inicio::OnQuit));
    Connect(wxID_HELP, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(Inicio::GetHelp));
    Connect(wxID_ADD, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(Inicio::AddCita));
}

void Inicio::OnQuit(wxCommandEvent& WXUNUSED(event)) {
    Close(true);
}
void Inicio::AddCita(wxCommandEvent& WXUNUSED(event)) {

}
void Inicio::GetHelp(wxCommandEvent& WXUNUSED(event)) {
    system("start www.google.com");
}
