#include <iostream>
using namespace std;
#include <vector>
class solution {
public : 
int findGCD(vector<int>&nums){
int smallest = nums[0];
int largest = nums[0];

for(int i = 1; i < nums.size(); i++ ){
    
    if(smallest > nums[i])
        smallest = nums[i];
    if(largest < nums[i]){
        largest = nums[i];
    }
}
cout<<"Smallest number is : "<<smallest<<endl;
cout<<"Largest number is : "<<largest<<endl;
while(smallest != 0){
    int reminder = largest % smallest;
    largest = smallest;
    smallest = reminder;
    
}
return largest;
}
};
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    solution obj;
    cout << "GCD = " << obj.findGCD(nums);

    return 0;
}