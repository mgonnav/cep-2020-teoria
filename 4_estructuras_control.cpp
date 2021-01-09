#include <iostream>
#include <string>

using namespace std;

int main()
{
    //ESTRUCTURAS DE CONTROL:

    //IF y ELSE


    /*int a;
    int b;
    int c;

    //cin >> a >> b >> c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a > b && a > c)
    {
        cout << "A es el mayor numero " << a << '\n';
    }

    if(b > a || c > a)
    {
        cout << "B o C son mayores que A " << '\n';
    }

    if(a == b && b != c)
    {
        cout << "A es igual a B y B es diferente de C " << '\n';
    }

    bool bol = false;

    if(!bol)
    {
        cout << "La variable bol es falsa " << '\n';
    }*/

    //--------------

    /*int edad;
    cin >> edad;

    if(edad >= 18)
    {

        cout << "ERES MAYOR DE EDAD" << '\n';
    }
    else
    {
        cout << "ERES MENOR DE EDAD" << '\n';
    }*/


    //WHILE y FOR

    int cont = 0;
    while(cont < 4)
    {
        bool opc;
        cin >> opc;

        if(opc == true)
        {
            cont = cont + 1;
        }
        else
        {
            cont = cont;
        }
    }
    cout << "El contador 1 es " << cont << '\n';

    int cont2 = 0;

    for(int i = 0; i < 30;i++)
    {
        cont2 = cont2 + 1;
    }
    cout << "El contador 2 es " << cont2 << '\n';

    return 0;
}
