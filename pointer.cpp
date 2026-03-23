// // pointer
// #include<iostream>
// using namespace std;
// int main(){
// int a=6;
// int *jk=&a;
// int**kl=&jk;

// cout<<"the address of the a is "<<&a<<"\n";
// cout<<jk;
// cout<<"\n"

// cout<<*jk;
// cout<<"\n"<<kl;
// return 0;
// }



#include<iostream>
using namespace std;
int changea(int*ptr){
    *ptr=98;
    return *ptr;
}
int main(){
    int a=90;
    cout<<"the previousvalue "<<a;
    int q=changea(&a);
    cout<<"the change value is "<<"\n"<<q;
    return 0;
}