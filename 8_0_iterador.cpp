#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> students;
    students.push_back("Paula");
    students.push_back("Mario");
    students.push_back("Carmen");
    students.push_back("Cristian");

    cout<<"Students: ";

    for(int id_student=0; id_student<students.size(); id_student++){
        cout<<students[id_student]<<" ";
    }
    cout<<endl;

    //Primera forma de usar iteradores

    vector<string>::iterator student_it;

    cout<<"Students iterador 01: ";

    for( student_it = begin(students);  student_it != students.end() ; student_it++){
        cout<< *student_it <<" ";
    }
    cout<<endl;

    //Segunda forma de usar iteradores

    auto student_auto_it = begin(students);

    cout<<"Students iterador 02: ";

    for( ; student_auto_it != students.end() ; student_auto_it++){
        cout<< *student_auto_it <<" ";
    }
    cout<<endl;

    //Tercera forma de usar iteradores

    cout<<"Students iterador 03: ";

    for( auto &val : students){
        cout<< val <<" ";
    }
    cout<<endl;


    return 0;
}
