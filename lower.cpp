#include<iostream>
using namespace std;
int main(){
    char hp;
    cout<<"enter the character";
    cin>>hp;
    int jp=(int)hp;
    if(jp>=65 && jp<=90){
        cout<<"the charecter is uppercase";
    }
    else{
        cout<<"the characwter is lowercaswe";
    }
    return 0;

}