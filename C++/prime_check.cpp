#include <iostream>
using namespace std;
int main()
{
    int num=0;
    cout<<"enter the number "<<endl;
    cin>>num;
    
    bool isprime=true;

    for(int i=2; i*i<=num; i++) // root of number ke baad factors repeat karte h so chotti si optimisation hai yeh 
    {
        if(num%i == 0)
            {
               isprime =false;  break;
            }
        }

    if(isprime==true ){
        cout<<"Prime number it is "<<endl;
    }else{cout<<"non prime"<<endl;};
}   