#include "BaseDatos.h"

BaseDatos::BaseDatos() {
    this->bd = "";
}
BaseDatos::BaseDatos(string bd) {
    this->bd = bd;
}
string BaseDatos::getBD() {
    return this->bd;
}
void BaseDatos::setBD(string bd) {
    this->bd = bd;
}
string BaseDatosgetRow(int line) {
    ///Leer una linea especifica de un archivo
}
string BaseDatos::getRows() {
    ///Retornar todo un archivo
}
void BaseDatos::addRow(string bd, string texto) {
    ///Añadir al final del archivo
    ofstream archivo;
    archivo.open(bd.c_str(), ios::app);
    if (archivo.fail()) {
        cout << "\nNo se pudo guardar los datos";
    }
    ///Iniciando grabacion BD
    archivo << texto << "\n";
    ///Finalizando grabacion BD
    archivo.close();
}
void BaseDatos::cleanBD(string bd) {
    ///Borrar la base de datos
    ofstream archivo;
    archivo.open(bd.c_str(), ios::out);
    if (archivo.fail()) {
        cout << "\nNo se pudo guardar los datos";
    }
    archivo << "";
    archivo.close();
}
vector<string> BaseDatos::split(string str, char pattern) {
    int posInit = 0;
    int posFound = 0;
    string splitted;
    vector<string> resultados;

    while(posFound >= 0){
        posFound = str.find(pattern, posInit);
        splitted = str.substr(posInit, posFound - posInit);
        posInit = posFound + 1;
        resultados.push_back(splitted);
    }

    return resultados;
}
