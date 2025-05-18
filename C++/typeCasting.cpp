#include <iostream>
using namespace std;
int main()
{
    // char grade = 'A';           // char(1) has less memory than int(4) so this is implicit conversion automatic 
    // int age = grade;
    // cout << age << endl;        // we will get output as 65 because 65 is the ASCII value of A.


    double cost = 233.3632;
    int price = (int) cost;     // here double has bigger memory than int so we have explicitly converted it to int datatype....
    cout << price << endl;
}