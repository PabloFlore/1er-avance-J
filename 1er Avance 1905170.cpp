#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>


using namespace std;




int main()
{


    int opc;
    float preciounitario, imptotal, preciototal;
    string nom_juego, fecha_lan, clasi, caracteristicas, desc, genero, consola, agregar;

    cout << "\t *** Menu ***\n"; // el menu
    cout << " 1.-Agregar articulo\n 2.-Modificar articulo\n 3.-Eliminar articulo\n 4.-Lista de articulos vigentes\n 5.-Limpiar pantalla\n 6.-Salir\n";
    cin >> opc;

    switch (opc)
    {
    case 1: //Para agregar articulo
        cout << "  \n";
        cout << "Ingrese el numero de su articulo\n";
        cin.ignore(); //ignora el espacio
        getline(cin, agregar); //no repetir 
        cout << "  \n";

        cout << "Ingrese el nombre de su articulo\n";
        getline(cin, nom_juego); //ejecuta los espacios en las variables
        cout << "  \n";

        cout << "Ingrese la fecha de lanzamiento\n";
        getline(cin, fecha_lan);
        cout << "  \n";

        cout << "Ingrese la clasificacion de su articulo\n";
        getline(cin, clasi);
        cout << "  \n";

        cout << "Ingrese las caracteristicas de su articulo\n";
        getline(cin, caracteristicas);
        cout << "  \n";

        cout << "Ingrese la descripcion de su articulo\n";
        getline(cin, desc);
        cout << "  \n";

        cout << "Ingrese el genero de su articulo\n";
        getline(cin, genero);
        cout << "  \n";

        cout << "Ingrese el nombre de la consola de su articulo\n";
        getline(cin, consola);
        cout << "  \n";

        cout << "Ingrese el precio unitario de su articulo\n";
        cin >> preciounitario;
        imptotal = preciounitario * .16;
        preciototal = preciounitario + imptotal;
        cout << "  \n";
        cout << "El impuesto para el precio unitario ingresado es de: $ " << imptotal << endl;
        cout << "  \n";
        cout << "El precio total es de: $ " << preciototal << endl;
        cout << "  \n";

        system("pause");
        return main();
        break;

    case 2:
        cout << "  \n";
        cout << "Opcion no disponible";
        cout << "  \n";
        system("pause");
        return main();
        break;

    case 3:
        cout << "  \n";
        cout << "Opcion no disponible";
        cout << "  \n";
        system("pause");
        return main();
        break;

    case 4:
        cout << "  \n";
        cout << "Opcion no disponible";
        cout << "  \n";
        system("pause");
        return main();
        break;

    case 5:
        cout << "  \n";
        system("cls");
        return main();
        break;

    case 6:
        cout << "  \n";
        cout << "Gracias, adios\n";
        cout << "  \n";
        system("pause");
        break;

    default: // Por si ingresan una opcion invalida 
        cout << "  \n";
        cout << "Ingrese una de las 6 opciones\n";
        cout << "  \n";
        system("pause");
        return main();
    }

}



