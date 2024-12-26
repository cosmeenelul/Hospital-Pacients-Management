#include <iostream>
#include "Patient.h"
#include "PriorityQueue.h"
#include<stdint.h>
using namespace std;
int main() {

    string Nume , Prenume;
    int Varsta;
    char gen;
    int Prioritate;
    char semn;
    PriorityQueue<Patient> *CoadaPrioritati=new PriorityQueue<Patient>(10);


    while(cin>>semn) {
        if(semn=='+') {
            cin>>ws>>Prenume;
            cin>>Nume>>Varsta;
            cin>>ws>>gen>>Prioritate;
            Patient Pacient;
            Pacient.firstName = Prenume;
            Pacient.lastName = Nume;
            Pacient.age = Varsta;
            Pacient.gender = gen;
            CoadaPrioritati->push(Pacient,Prioritate);
        }
        else if(semn=='-') {
            if(!CoadaPrioritati->empty()) {
                cout<<CoadaPrioritati->pop().firstName<<" "<<CoadaPrioritati->pop().lastName<<" "<<CoadaPrioritati->pop().age<<" "<<CoadaPrioritati->pop().gender<<endl;
                CoadaPrioritati->pop2();
            }
        }
        else if(semn=='*') {
            return 0;
        }
    }

}
