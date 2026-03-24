#include<iostream>
#include<climits>

using namespace std;
void peek(int arr[],int size){
    int low=0; int high=size-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if (arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        {
            cout<<"we got the peek value at index"<<mid;
            return;
        }
        if (arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        
        
    }
    
}
int main(){
    int n;
    cout<<"enter the number of the element ";
    cin>>n;
    int arr[n];
     for (int i = 0; i <= n-1; i++)
     {
       cin>>arr[i];
     }
     
    peek(arr,n);
    return 0;
}