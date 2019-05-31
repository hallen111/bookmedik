#ifndef LOGIN_H_INCLUDED
#define LOGIN_H_INCLUDED
#include "wx/wx.h"

class Login : public wxFrame
{
    public:
    Login(const wxString& titulo);

    // Destructor
    virtual ~Login();

private:
    wxStaticText* m_usernameLabel;
    wxStaticText* m_passwordLabel;
    wxTextCtrl* m_usernameEntry;
    wxTextCtrl* m_passwordEntry;
    wxButton* m_buttonLogin;
    wxButton* m_buttonQuit;
    wxMessageDialog *dlg;

private:
    void OnQuit(wxCommandEvent& event);
    void OnLogin(wxCommandEvent& event);

private:
    DECLARE_EVENT_TABLE()

    enum
    {
        BUTTON_Login = wxID_HIGHEST + 1
    };
};

#endif // LOGIN_H_INCLUDED
