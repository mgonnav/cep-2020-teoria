#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numeros;
    numeros.push_back(4);
    numeros.push_back(6);
    numeros.push_back(2);
    numeros.push_back(1);
    numeros.push_back(3);
    numeros.push_back(7);

    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<numeros.size()<<endl;
    cout<<"Front: "<<numeros.front()<<endl;
    cout<<"Back: "<<numeros.back()<<endl;
    cout<<"Empty: "<<numeros.empty()<<endl;

    cout<<endl;

    numeros.push_back(12);
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<numeros.size()<<endl;
    cout<<"Back: "<<numeros.back()<<endl;

    cout<<endl;

    numeros.pop_back();
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<numeros.size()<<endl;
    cout<<"Back: "<<numeros.back()<<endl;

    cout<<endl;

    numeros.clear();
    for(int i=0;i<numeros.size();i++){
        cout<<numeros[i]<<" ";
    }
    cout<<endl;

    cout<<"Size: "<<numeros.size()<<endl;
    cout<<"Empty: "<<numeros.empty()<<endl;

    return 0;
}