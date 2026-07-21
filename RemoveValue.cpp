#include<iostream>
using namespace std;
int main(){
    int n,val;
    cout<<"Enter the number of Elements of the Array : ";
    cin>>n;
    int arr[n];
    int count = 0;
    cout<<"Enter the Elements in the Array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value to Remove from the Array : ";
    cin>>val;
    if(n == 0){
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(arr[i]!= val){
            arr[count] = arr[i];
            count++;
        }
    }
    cout<<"The count is : "<<count<<endl;
    cout<<"Without any Dublicate Element the Array looks like : ";
    for(int i = 0; i < count; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}