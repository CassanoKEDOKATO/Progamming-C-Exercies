#include <iostream>
using namespace std;
double Average_Array(int n, int arr[]){
    int sum = 0;
    if (n % 2== 0){
        for (int i = 0; i<= n; i++){
         sum = arr[i]+i;
    }
    }
    
    return sum/n;
}
int main() {
    int arr[100];
    int n;
    cout<<"Enter a n: ";
    cin>>n;
    cout<<"Enter element array: "<<" \n ";
     for (int i = 0; i< n; i++){
       cin>>arr[i];
    }
    cout<<Average_Array(n,arr)<<endl;
    
}