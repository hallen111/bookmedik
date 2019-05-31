#include "main.h"
#include "Inicio.h"
#include "Login.h"
#include "BaseDatos.h"

DECLARE_APP(NoteMedic)
IMPLEMENT_APP(NoteMedic)

bool NoteMedic::OnInit()
{
    Login *login = new Login("Iniciar sesión en NoteMedic");
    login->SetBackgroundColour(wxColour(255,255,255));
    login->SetIcon(wxIcon(wxT("assets/logo.png")));
    login->SetSize(440, 150);
    login->Center();
    login->Show(true);

    /*Inicio *i = new Inicio(wxT("NoteMedic"));
    i->SetBackgroundColour(wxColour(255,255,255));
    i->SetIcon(wxIcon(wxT("assets/logo.png")));
    i->SetSize(1000, 563);
    i->Center();
    i->Show(true);*/

    return true;
}
