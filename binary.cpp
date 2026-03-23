#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,3,5,6,7,9,10};
    int i=0;
    int j=6;
int target;
cout<<"WHAT IS THE TARGET";
cin>>target;
int midpoint=(i+j)/2;
while (i<j)
{
    midpoint=(i+j)/2;
    if(arr[midpoint]==target){
        cout<<"the target is fount"<<midpoint;
    }
    if (arr[midpoint]>target)
    {
        j=midpoint-1;
    }
    else
    {
        i=midpoint+1;
    }
    
}



 
    return 0;
}