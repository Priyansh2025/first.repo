#include <iostream>
using namespace std;
int main()
{
    char alpha;
    cout<<"enter the alpha "<<endl;
    cin>> alpha ;

    if(alpha >= 'a' && alpha <= 'z' ){        // uppercase letter are from 65(A)-90(Z) as letters are stored in int form ASCII values
        cout<<" lower case  ";
    } else{
        cout<< "uppercase \n";
    }
}