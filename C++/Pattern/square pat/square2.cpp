#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the n "<<endl;
    cin>>n;

    int num=1;

    for(int i=0; i<n; i++){
    
        for(int g=0; g<n; g++){
            cout<<num<<" ";
            num+=1;
        }   cout<<endl;
        }
    

}