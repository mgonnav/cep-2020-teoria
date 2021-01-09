#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<float> reales;
    float numero;

    int cantidad = 0;

    cout<<"INGRESE NUMEROS: "<<endl;
    while(cantidad < 4 && cin >> numero){
        reales.push(numero);
        cantidad++;
    }

    cout<<endl;

    cout<<"NUMEROS INGRESADOS"<<endl;
    while(!reales.empty()){
        cout<<"FRONT: "<<reales.front()<<" BACK: "<<reales.back()<<"\n";
        reales.pop();
    }

    return 0;
}