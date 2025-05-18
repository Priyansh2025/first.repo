#include <iostream>
using namespace std;

class car{
    public:
    string color= "red";
    int speed =213;
    int wheels=23;
};

class maruti : public car{
        public:

    string model;

};

class ferrari : public car{
        public:

    string modell;
};

int main(){
    maruti AA;
    
    AA.model="rt210";
    AA.color;
    AA.speed;
    AA.wheels;

    cout<<AA.model<<endl;
    cout<<AA.speed<<endl;
}