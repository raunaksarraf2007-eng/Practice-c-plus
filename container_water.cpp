#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[9]={1,8,6,2,5,4,8,3,7};
    int area=0;
    int count=0;
    int max_area=INT_MIN;
    int height=0;
    int lp,rp;
    lp=0;rp=8;
    int width;
    while(lp<rp){
width=rp-lp;
height=min(arr[lp],arr[rp]);
area=height*width;
max_area=max(max_area,area);
if (arr[lp]<arr[rp])
{
   lp++;
}
else
{
    rp--;
}

 }
        cout<<"max area is "<<"\n";
    cout<<max_area;
    return 0;
}