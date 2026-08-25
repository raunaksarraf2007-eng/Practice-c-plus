#include<iostream>
using namespace std;
int main(){
    int n;
    int x;
    cout<<"enter the power ";
    cin>>n;
    cout<<"enter the number";
    cin>>x;    
    int ans=1;
    if(n>0){

    
     if(n%2==1){
        ans=ans*x;
        x=x*x;

     }
     else{
        x=x^2;
     }
    }
     cout<<ans;
    return 0;
}
