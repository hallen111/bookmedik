#include "Login.h"

Login::Login(const wxString& titulo) : wxFrame(NULL, wxID_ANY, titulo)
{
    wxPanel *panel = new wxPanel(this, wxID_ANY);

    wxBoxSizer *vbox = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *hbox1 = new wxBoxSizer(wxHORIZONTAL);
    m_usernameLabel = new wxStaticText(panel, wxID_ANY, wxT("Correo electronico:   "), wxDefaultPosition, wxSize(160, -1));
    hbox1->Add(m_usernameLabel, 0);

    m_usernameEntry = new wxTextCtrl(panel, wxID_ANY);
    hbox1->Add(m_usernameEntry, 1);
    vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);

    wxBoxSizer *hbox2 = new wxBoxSizer(wxHORIZONTAL);
    m_passwordLabel = new wxStaticText(panel, wxID_ANY, wxT("Contraseña:   "), wxDefaultPosition, wxSize(160, -1));
    hbox2->Add(m_passwordLabel, 0);

    m_passwordEntry = new wxTextCtrl(panel, wxID_ANY, wxString(""),
        wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD);
    hbox2->Add(m_passwordEntry, 1);
    vbox->Add(hbox2, 0, wxEXPAND | wxLEFT | wxTOP | wxRIGHT, 10);

    wxBoxSizer *hbox3 = new wxBoxSizer(wxHORIZONTAL);
    m_buttonLogin = new wxButton(panel, BUTTON_Login, wxT("Entrar"));
    hbox3->Add(m_buttonLogin);

    m_buttonQuit = new wxButton(panel, wxID_EXIT, ("Salir"));
    hbox3->Add(m_buttonQuit);
    vbox->Add(hbox3, 0, wxALIGN_RIGHT | wxTOP | wxRIGHT | wxBOTTOM, 10);

    panel->SetSizer(vbox);
    Centre();
}

void Login::OnQuit(wxCommandEvent& event)
{
    Close(true);
}

void Login::OnLogin(wxCommandEvent& event)
{
    wxString username = m_usernameEntry->GetValue();
    wxString password = m_passwordEntry->GetValue();

    if (username.empty() || password.empty()) {
        wxMessageBox(wxT("Los datos estan vacios"), wxT("Alerta"), wxICON_WARNING);
    }
    else {
        wxMessageBox(wxT("Bienvenido a NoteMedic"), wxT("Usuario verificado"), wxICON_INFORMATION);
        //Controller(login);
    }
}

Login::~Login() {}

BEGIN_EVENT_TABLE(Login, wxFrame)
EVT_BUTTON(wxID_EXIT, Login::OnQuit)
EVT_BUTTON(BUTTON_Login, Login::OnLogin)
END_EVENT_TABLE()
