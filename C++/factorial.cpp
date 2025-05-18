#include <iostream>
using namespace std;
int main(){
    int fact=0;
    cout<<"enter fact "<<endl;
    cin>>fact;
    int res=1;

    for(int i=fact; i>=1; i--)
    {
        res=res*i;
    }
     cout<<res<<endl;
}