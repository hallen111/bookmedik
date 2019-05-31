#ifndef BASEDATOS_H_INCLUDED
#define BASEDATOS_H_INCLUDED
#include <stdlib.h>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class BaseDatos {
    private:
        string bd;
    public:
        BaseDatos();
        BaseDatos(string);
        string getBD();
        void setBD(string);
        string getRow(int);
        string getRows();
        void addRow(string, string);
        void cleanBD(string);
        vector<string> split(string str, char pattern);
};

#endif // BASEDATOS_H_INCLUDED
