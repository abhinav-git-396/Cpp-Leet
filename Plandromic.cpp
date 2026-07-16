#include <iostream>
using namespace std;
class solution{
    public: 

    bool isplandromic(int x){
        if(x<0){
            return false;
        }
        int original = x;
        long reverse = 0;

        while(x>0){
            int digit = x%10;
            reverse = reverse*digit;
            x = x/10;
        }
        return original == reverse;
    }
};