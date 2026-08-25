#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxallotment) {
    int stu = 1;
    int pages = 0;

    for (int i = 0; i < n; i++) {

        
        if (arr[i] > maxallotment) {
            return false;
        }

        if (pages + arr[i] <= maxallotment) {
            pages += arr[i];
        }
        else {
            stu++;
            pages = arr[i];
        }
    }

    return stu <= m;
}

int allocation(vector<int> &arr, int n, int m) {

    if (m > n) {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int su = -1;

    int st = 0;
    int end = sum;

    while (st <= end) {

        int mid = st + (end - st) / 2;

        if (isvalid(arr, n, m, mid)) {
            su = mid;
            end = mid - 1;
        }
        else {
            st = mid + 1;
        }
    }

    return su;
}

int main() {

    vector<int> arr = {2, 1, 3, 4};

    int n = 4;
    int m = 2;

    cout << allocation(arr, n, m);

    return 0;
}