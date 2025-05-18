#include <iostream>
using namespace std;

class teacher {

    private:
    double salary;

    public : 
    
    teacher(string s, string d, string n,  int sal){
        name=n;
        subject=s;
        dept=d;
        salary=sal;
       }

    string name;
    string dept;
    string subject;
    
   

    };

int main(){
    teacher QQ ( "sanskrit","c++", "sushila" ,230000);  
      // object bante hi compiler automatic constructor ko call kar deta hai....we have our own contructor now (teacher) so it is called insted of compiler's.

    cout<<QQ.name<<endl;
    cout<<QQ.salary<<endl;
    cout<<QQ.dept<<endl;
    cout<<QQ.subject<<endl;



    return 0;
}   