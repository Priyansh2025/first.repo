#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    for(int i=0; i<n; i++){
        int num=1;
    for(int g=0; g<i+1; g++){
        cout<<num<<" ";
        num++ ;
    } cout<<endl;
    }
}