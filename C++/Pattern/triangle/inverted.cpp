#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    
    // int num=1;

    // for(int i=n; i>=1; i--){
    //     for(int g=i; g>=1; g--){
    //         cout<<num<<" ";

    //     }num++  ;   cout<<endl;
    // }

    int n;
    cin>>n; int num=1;

    for(int i=0; i<n; i++){
        // spaces 
        for(int j=0; j<i; j++){
            cout<<" ";
        }

        //numbers
        for(int j=0; j<n-i; j++){
            cout<<num;

        }cout<<endl;    num++ ;

    }

    }