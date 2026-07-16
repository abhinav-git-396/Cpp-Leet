// using nested loop 
// #include <iostream>
// using namespace std;

// int main(){
//     int d, target;
//     cin>>d;
//     cin>>target;
//     int arr[d];
//     for(int i = 0; i < d; i++){

//         cin>>arr[i];
//     }


// for(int i = 0; i < 4; i++ ){
//     for(int f = 1; f < 4; f++){
//        if(target == arr[i] + arr[f]){
//         cout <<"["<<i<<","<<f<<"]";
//          return 0;
//        }
        
//     }
// }

// }
#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:

    vector<int> twoSum(vector<int>& nums, int target)
    {
       for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){

            if(target == nums[i] + nums[j] ){
                return {i,j};
            }
        }
       }
       return{};
    }
};