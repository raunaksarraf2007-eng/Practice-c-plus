// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n;
// //     cout<<"enter the number of line you want to print ";
// //     cin>>n;
    
// //     int i,j;
// //     for(i=1;i<=n;i++){
// //              int ch=65;
// //         for (int  j = 1; j <= 4; j++)
// //         {
// //            cout<<char(ch);
// //            ch++;
           
// //         }
// //         cout<<"\n";
        
// //     }

// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number you want to check is prime or not";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
             
//             }
            
//     }
    
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number you want to check is prime or not";
    cin>>n;
    for (int  i =0; i <= n-1; i++){
        for (int j = i+1; j <= n; j++)
        {
            cout<<j;

        }
        cout<<"\n";
        
    }

    
    return 0;
}