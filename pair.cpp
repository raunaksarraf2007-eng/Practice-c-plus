#include <iostream>
using namespace std;

int majorityelement(int arr[],int mj){
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        if(arr[i]==mj)
        {
            count++;
        }
    }
    return count;
}

int main(){
    
    int arr[5]={1,2,2,1,1};
    int i=1;
    int mj=arr[0];
    int majority=majorityelement(arr,mj);

    if(majority>5/2){
        cout<<"the majority element is "<<mj;
    }
    else if(majority<=5/2){
        mj=arr[i++];
        majority=majorityelement(arr,mj);

        if(majority>5/2){
            cout<<"the majority element is "<<mj;
        }
        else{
            cout<<"there is no majority element";
        }
    }
    else{
        cout<<"there is no majority element";
    }

    return 0;
}