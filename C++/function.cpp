#include <iostream>
using namespace std;

int sumDigit(int num){
    int sum=0;

    while(num>0){
        int last=num%10;
        sum+=last;
        num=num/10;

        
    }return sum;
}
int main(){
  //  sumDigit(234);
    cout<<sumDigit();

}