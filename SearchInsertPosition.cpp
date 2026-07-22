#include <iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter the Number of Elements in the Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements in the Array : ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the Target Value : ";
    cin>>target;
    for(int i = 0; i<n; i++){
       if(target == arr[i]){
        cout << "The Position is : "<<i<<endl;
        break;
       }else if(target < arr[i]){
        cout << "The Position is : "<<i<<endl;
        break;
       }else if(target > arr[n-1]){
        cout << "The Position is : "<<n<<endl;
        break;
       }
        
    }
    return 0;
}