#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of the element ";
    cin>>n;
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    int max_sum=INT_MIN;
    for (int st = 0; st < n; st++){

    
    int current_sum=0;

      for (int end = st; end < n; end++)
        {
            current_sum+=arr[end];
            max_sum=max(current_sum,max_sum);
        }
        cout<<"\n";
        
        
    }
    cout<<max_sum;
    
    
    return 0;
}