#include <iostream>
using namespace std;

int main(){
    int sum = 0, d, r;
    cout<<"Enter the Digits : ";
    cin>>d;

    while(d>0){
        r = d % 10;
        sum = sum + r;
        d = d/10;

    }

    cout<<"Sum of the Digits are : "<<sum;

    return 0;
}