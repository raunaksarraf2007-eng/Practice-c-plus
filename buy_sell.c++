#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={7,1,5,3,6,4};
     int max_profit=INT_MIN;
     int profit;
   
    for (int buy = 0; buy < 6; buy++)
    {
        for (int sell = buy + 1; sell < 6; sell++)
        {
            profit=arr[sell]-arr[buy];
            if(profit>max_profit){
                max_profit=profit;
           
         }
        }
        
    }
    cout<<"max profit is "<<"\n";
    cout<<max_profit;
    
    return 0;
}