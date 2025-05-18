#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the n "<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        for(int g=0; g<i+1; g++){
            cout<<"*"<<" ";
        }   cout<<endl;
    }

}