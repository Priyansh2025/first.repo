 // 3 types mathemtical relational and logical.
#include <iostream>    
using namespace std;

int main()
{
    //  int a=88, b=22;
    //  cout<< "sum = "<< (a+b) << endl;
    //  cout<< "difference = " << (a-b) << endl;
    //  cout<< "product = " << (a*b) <<endl;
    //  cout <<"remainder = "<< (a%b) << endl;

   // cout << (5/(double)2)<<endl;    // type casted 2 to double otherwise we would have got 2 only....


    cout << (3>44) << endl; // 0 -> false 

    

    cout << !(3>44)<<endl;  //here we have used logical not operator true ka false and false ka true 

    cout << ( (3<22) || (55>32) ) << endl;      //logical or operator koi ek bhi true hogaya toh true aayega result...

    cout << ( (3>1)  &&  (3>2)  ) << endl;  // logical and operator jab sari true tabhi true hoga result ...
} 

