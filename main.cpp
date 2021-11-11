#include <iostream>
#include "Colegio.h"
#include "string"
#include "Estudiante.h"

using namespace std;
Colegio* col;

int main() {
    int repeat;
    string name ;
    double id ;
    int opc ;
    do {
        //instancia del objeto gracias XD
        col = new Colegio();
        cout<<"ingrese el nombre del estudiante"<<endl;
        cin>>name;
        cout<<"ingrese el ID del estudiante"<<endl;
        cin>>id;
        cout<<"seleccione el genero del estudiante"<<endl<<"1. hombre / 2. mujer"<<endl;
        cin>>opc;

        if (opc == 1){
            col->agregarEstudiante(name,id,Genero::MASCULINO);
            col->agregarEstudiante("maria",9,Genero::FEMENINO);
        } else{
            col->agregarEstudiante(name,id,Genero::FEMENINO);
        }

        for (Estudiante* estudiante:col->getEstudiante()) {
            cout<<estudiante->toString()<<"-->";
        }

        cout<<endl<<"desea repetir el codigo"<<endl<<"1.si / 2. no";
        cin>>repeat;
    } while (repeat == 1);




    return 0;
}
