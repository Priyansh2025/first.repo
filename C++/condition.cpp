#include <iostream>
using namespace std;
int main()
{
    int number; int sum=0;
    cout<<"enter number "<<endl;
    cin>>number;

    for(int i=0; i<=number; i++)
        {
            if(i%3==0){
                sum=sum+i;
            }
        }
        cout<<sum<<endl;   
   
}