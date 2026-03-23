// 
#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(87);
    vec.pop_back();
    
    vec.push_back(87);
    vec.push_back(87);
    vec.push_back(87);
    vec.push_back(87);
    vec.push_back(87);
    vec.push_back(87);

     int size=vec.size();
     cout<<size;
     int capacity=vec.capacity();
        cout<<"\n"<<capacity;
     cout<<"\n";
    for(int value:vec){
        cout<<value<<"\n"; 
    }
    return 0;
}