#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& boards, int n, int m, int maxTime) {
    int painters = 1;
    int time = 0;

    for (int i = 0; i < n; i++) {

        if (boards[i] > maxTime) {
            return false;
        }

        if (time + boards[i] <= maxTime) {
            time += boards[i];
        }
        else {
            painters++;
            time = boards[i];
        }
    }

    return painters <= m;
}

int painterPartition(vector<int>& boards, int n, int m) {

    if (m > n) {
        return -1;
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += boards[i];
    }

    int start = 0;
    int end = sum;
    int answer = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isValid(boards, n, m, mid)) {
            answer = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return answer;
}

int main() {

    vector<int> boards = {10, 20, 30, 40};

    int n = 4;
    int m = 2;

    cout << painterPartition(boards, n, m);

    return 0;
}