#include <iostream>
#include <string>
using namespace std;

//TIPOS DE RETORNO DE UNA FUNCION:


//TIPO NOMBRE (PARAMETRO1, PARAMETRO2, ....){}


//INT FLOAT BOOL STRING, VOID


void impnom(string nom)
{
    cout << "Hola " << nom << " mucho gusto de conocerte " << '\n';
}

int suma(int a, int b)
{
    int c = a + b;
    return c;
}

int sumavarios(int a, int b, int c, int d, int e)
{
    int x = a + b + c + d + e;
    return x;
}

float pi()
{
    float c = 3.1416;
    //return c;
    return 3.1416;
}


//----------------

int sumatoriaV(int n, int ans)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res = res + (i + 1);
    }
    ans = res;
    return ans;
}

int sumatoriaR(int n, int &ans)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res = res + (i + 1);
    }
    ans = res;
    return ans;
}


int main()
{
    //DECLARACION DE FUNCIONES Y DE SUS PARAMETROS

    /*-------EJEMPLOS------*/

    /*string nom;
    cin >> nom;

    impnom(nom);*/



    //-----

    /*int a = 5;
    int b = 6;

    //int c = suma(a,b);
    //cout << suma(a,b) << '\n';

    //-----

    int c = 4;
    int d = 10;
    int e = 20;

    cout << sumavarios(a,b,c,d,e) << '\n';*/

    //-----

    //cout << "El valor de pi es: " << pi() << '\n';

    /*------PASO POR VALOR Y REFERENCIA-------*/

    int ans = 0;
    int n;
    cin >> n;

    int valor = sumatoriaV(n,ans);
    cout << "El valor de la operacion es: " << valor << '\n';
    cout << "El valor de ans por valor es: " << ans << '\n';

    valor = sumatoriaR(n,ans);
    cout << "El valor de la operacion es: " << valor << '\n';
    cout << "El valor de ans por valor es: " << ans << '\n';

    return 0;
}
