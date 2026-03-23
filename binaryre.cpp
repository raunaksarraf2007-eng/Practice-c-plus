
#include<iostream>
using namespace std;

int bs(int arr[], int i, int j, int target) {
    // base case
    if (i > j)
        return -1;

    int midpoint = i + (j - i) / 2;

    if (arr[midpoint] == target)
        return midpoint;

    else if (arr[midpoint] > target)
        return bs(arr, i, midpoint - 1, target);

    else
        return bs(arr, midpoint + 1, j, target);
}

int main(){
    int arr[7] = {1,3,5,6,7,9,10};
    int i = 0, j = 6;
    int target;

    cout << "WHAT IS THE TARGET: ";
    cin >> target;

    int output = bs(arr, i, j, target);

    if (output != -1)
        cout << "Target found at index " << output;
    else
        cout << "Target not found";

    return 0;
}