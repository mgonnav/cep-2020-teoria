#include <iostream>
#include <string>


using namespace std;

int main()
{
    //cout << "Intruccion cin: " << endl;

    /*cout << "Ingrese su nombre: ";

    string nom;
    cin >> nom;

    cout << "Su nombre es: " << nom << endl;*/

    cout << "---------" << endl;
    cout << endl;
    cout << '\n';


    /*OPERADORES ARITMETICOS: +, -, *, /, % */
    //cout << "Operadores Aritmeticos: " << endl;


    //+
    int a;
    int b;
    int c;

    a = 9;
    b = 10;
    c = 1;
    c = a + b + c;
    cout << "El valor de la suma de c es: " << c << endl;


    //-
    c = a - b;
    cout << "El valor de la resta de c es: " << c << endl;


    //*
    c = a * b * c;
    cout << "El valor de la multiplicacion de c es: " << c << endl;

    // /
    c = c / a;
    cout << "El valor de la division de c es: " << c << endl;


    // %
    //b / a = 10 / 9 = 1
    c = b % a;
    cout << "El valor del modulo de c es: " << c << endl;

    cout << "---------" << endl;
    cout << endl;
    cout << '\n';


    /*OPERADORES DE COMPARACIÓN: <, >, <=, >=, ==, !=*/
    //cout << "Operadores de comparación: " << endl;

    int d;
    int e;

    d = 10;
    e = 11;


    // <

    if(d < e)
    {
        cout << "D es menor que E" << '\n';
    }


    // >
    d = 12;
    if(d > e)
    {
        cout << "D es mayor que E" << '\n';
    }

    // <=
    d = e;
    if(d <= e)
    {
        cout << "D es menor o igual que E" << '\n';
    }

    // >=
    d = e + 1;
    if(d >= e)
    {
        cout << "D es mayor o igual que E" << '\n';
    }

    // ==
    d = e;
    if(d == e)
    {
        cout << "D es igual que E" << '\n';
    }

    // !=
    d = -889;
    if(d != e)
    {
        cout << "D es diferente que E" << '\n';
    }

    cout << "---------" << endl;
    cout << endl;
    cout << '\n';


    /*OPERADORES LÓGICOS: &&, ||, !*/
    //cout << "Operadores logicos: " << endl;

    a = 10;
    b = 10;
    c = 9;
    d = 15;

    // &&

    if(a == b && d > c)
    {
        cout << "A es igual a B y D es mayor que C" << '\n';
    }


    // ||
    //c = d;
    d = c;
    if(a == b || d < c)
    {
        cout << "A es igual a B o D es menor que C" << '\n';
    }

    // !
    bool isTrue = true;
    isTrue = false;
    if(!isTrue)
    {
        cout << "El valor negado de isTrue es verdad" << '\n';
    }

    return 0;
}
