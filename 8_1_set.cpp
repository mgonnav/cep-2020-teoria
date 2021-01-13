#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> conjunto = {1,2,2,3};

    cout<<"Empty: "<<conjunto.empty()<<endl;
    cout<<"Count-2: "<<conjunto.count(2)<<endl;

    set<int>::iterator it;
    
    for(it = begin(conjunto); it != conjunto.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    conjunto.insert(4);

    int arr[] = {7,8,9,10,8};
    conjunto.insert(arr,arr+5);

    conjunto.erase(2);

    for(auto new_it = begin(conjunto); new_it != conjunto.end(); new_it++){
        cout<<*new_it<<" ";
    }
    cout<<endl;

    cout<<"Count-2: "<<conjunto.count(2)<<endl;

    it = conjunto.find(7);
    cout<<*it<<endl;

    for(auto &val: conjunto){
        cout<<val<<" ";
    }

    return 0;
}
