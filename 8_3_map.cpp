#include <iostream>
#include <map>

using namespace std;

int main(){

    map<char,int> diccionario = {{'a',3},{'f',9},{'d',4}};

    cout<<"Empty: "<<diccionario.empty()<<endl;
    cout<<"Count-f: "<<diccionario.count('f')<<endl;

    map<char,int>::iterator it;
    
    for(it = begin(diccionario); it != diccionario.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<" ";
    }
    cout<<endl;

    diccionario.insert(make_pair('b',3));
    diccionario.insert(pair<char,int>('v',15));

    diccionario['m'] = 17;
    diccionario['j'] = 12;

    cout<<diccionario['j']<<endl;

    diccionario.erase('f');

    for(auto new_it = begin(diccionario); new_it != diccionario.end(); new_it++){
        cout<<(*new_it).second<<" ";
    }
    cout<<endl;

    cout<<"Count-f: "<<diccionario.count(2)<<endl;

    it = diccionario.find('f');
    cout<<(*it).first<<endl;

    for(auto &val: diccionario){
        cout<<val.first<<" "<<val.second<<" ";
    }

    return 0;
}