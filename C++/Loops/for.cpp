#include <iostream>
using namespace std;
int main(){

    int n=00,sum=0;
    cout<<"please enter the n "<<endl;
    cin>>n;

    for(int i=1; i<=n; i+=2){       //odd ka sum 
        sum=sum+i;
    }
    cout<<"sum is : "<<sum<<endl;
};