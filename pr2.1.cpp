#include<iostream>
using namespace std;
int recursive_findtarget(int n, int arr[], int target){
    if (n < 0) return -1;  // Base case: not found
    if (arr[n] == target) {
        cout << "Found target at index: " << n << endl;
        
    }  
    return recursive_findtarget(n - 1, arr, target);  // Recur for the rest
}
int main(){
     int arr[7] = { 6 , 3, 8, 9 , 2 ,8 , 7};
     int target;
     cout<<"enter target number : ";
     cin>>target;
    // for (int i = 0; i < 7; i++)
    // {
    //     if (arr[i]==target)
    //     {
    //         cout<<i+1<<endl;
    //     }
        
    // }
    int result = recursive_findtarget(6, arr, target);
    if (result != -1) {
        cout << "Element found at position: " << result + 1 << endl;
    } 
    return 0;
    
}