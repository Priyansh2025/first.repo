#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n "<<endl;
    cin>>n;

    for(int i=0; i<=n-1; i++){
        for(int g=i+1; g>0; g--){
            cout<<g<<" ";

        }cout<<endl;
    }
}