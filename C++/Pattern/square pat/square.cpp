#include <iostream>
using namespace std;
int main(){
    int n=0; cout<<"enter the n "<<endl; 
    cin>>n;

    for(int i=0; i<n; i++){        //outer loop
        char ch='A';
        for(int g=0; g<n; g++){    //inner loop
            cout<<ch<<" " ;
            ch=ch+1;            //char + int we are dealing with ASCII values
        }  cout<<endl;
    }
}