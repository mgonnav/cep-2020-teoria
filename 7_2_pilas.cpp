#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<string> corredores;
    string nombre;

    int cantidad = 0;

    cout<<"ORDEN DE LLEGADA: PRIMERO AL ULTIMO"<<endl;
    while(cantidad < 4 && cin>> nombre){
        corredores.push(nombre);
        cantidad++;
    }

    cout<<endl;

    cout<<"ORDEN DE LLEGADA: ULTIMO AL PRIMERO"<<endl;
    while(!corredores.empty()){
        cout<<corredores.top()<<"\n";
        corredores.pop();
    }

    return 0;
}