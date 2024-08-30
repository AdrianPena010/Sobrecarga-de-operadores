#include <iostream>

using namespace std;

class Materia
{
private:
    int Clave;
    string Nombre;
    string ProfesorTit;
    string LibroTexto;
protected:

public:


    Materia(int c,string n,string p,string l)
    {
        Clave=c;
        Nombre=n;
        ProfesorTit=p;
        LibroTexto=l;
    }

    ///setters
    void setClave(int c)
    {
        Clave=c;
    }
    void setNombre(string n)
    {
        Nombre=n;
    }
    void setProfesorTit(string p)
    {
        ProfesorTit=p;
    }
    void setLibroTexto(string l)
    {
        LibroTexto=l;
    }
    ///getters
    int getClave()
    {
        return Clave;
    }
    string getNombre()
    {
        return Nombre;
    }
    string getProfesorTit()
    {
        return ProfesorTit;
    }
    string getLibroTexto()
    {
        return LibroTexto;
    }
    ///Sobrecarga de operadores
    friend ostream & operator <<(ostream& o,Materia& m)
    {
        o<<"Clave: "<<m.Clave<<endl;
        o<<"Materia: "<<m.Nombre<<endl;
        o<<"Profesor: "<<m.ProfesorTit<<endl;
        o<<"Libro de texto: "<<m.LibroTexto<<endl;

        return o;
    }
    friend istream & operator >>(istream& i,Materia& m)
    {
        cout<<"\nIngresa la Clave: ";
        i>>m.Clave;
        cout<<"\nIngresa la Materia: ";
        i>>m.Nombre;
        cout<<"\nIngresa el Profesor: ";
        i>>m.ProfesorTit;
        cout<<"\nIngresa el Libro de texto: ";
        i>>m.LibroTexto;

        return i;
    }

    bool operator == (Materia& m)
        {
            return (Clave==m.Clave);
        }
        bool operator != (Materia& m)
        {
            return (Clave!=m.Clave);
        }
        bool operator < (Materia& m)
        {
            return (Clave<m.Clave);
        }
        bool operator <= (Materia& m)
        {
            return (Clave<=e.Clave);
        }
        bool operator > (Materia& m)
        {
            return (Clave>m.Clave);
        }
        bool operator >= (Materia& m)
        {
            return (Clave>=e.Clave);
        }


    void Imprime()
    {
        cout<<"\n\tDATOS DE LA MATERIA BASES DE DATOS"<<endl;
        cout<<"Clave: "<<Clave<<endl;
        cout<<"Materia: "<<Nombre<<endl;
        cout<<"Profesor: "<<ProfesorTit<<endl;
        cout<<"Libro de texto: "<<LibroTexto<<endl;
    }
    void CambiaClave(int nClave)
    {
        cout<<"\n\tCAMBIAR CLAVE DE LA MATERIA PROGRAMACION"<<endl;
        cout<<"Clave original: "<<Clave<<endl;
        cout<<"Ingrese una nueva clave: ";
        cin>>nClave;
        Clave=nClave;
        cout<<"La nueva Clave es: "<<Clave;
    }
    void CambiaProfe(string nom)
    {
        cout<<"\n\tCAMBIAR EL NOMBRE DEL PROFESOR DE BASES DE DATOS"<<endl;
        cout<<"Profesor: "<<ProfesorTit<<endl;
        cout<<"Ingrese el nuevo nombre: ";
        cin>>nom;
        ProfesorTit=nom;
    }
};

int main()
{
    Materia Programacion(1458,"Programacion","Jaramillo","Pseudocodigo");
    Materia BasesDatos(15577,"Bases de Datos","Rigoberto","DATAFIND");
    int opc;
    int claveN;
    string profeNom;

    do{
    cout<<"\n\tMENU DE MATERIAS"<<endl;
    cout<<"1.Cambiar clave de la materia Programacion\n2.Cambiar nombre del profesor de Bases de Datos\n3.Imprimir datos de la materia Bases de Datos\n4.Salir";
    cout<<"\nIngrese una opcion: ";
    cin>>opc;

    switch(opc)
    {
    case 1:
        Programacion.CambiaClave(claveN);
        break;
    case 2:
        BasesDatos.CambiaProfe(profeNom);
        break;
    case 3:
        BasesDatos.Imprime();
        break;
    case 4:
        cout<<"\nSaliendo...";
        break;
    default:
        cout<<"Ingrese una opcion valida...";
    }
    }while(opc!=4);

    return 0;
}
