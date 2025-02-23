#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>arr(n,0);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    long long sum = 0;
    long long maxsum = INT_MIN;
    for(int i=0; i<n; i++) {
        sum += (long long)arr[i];
        maxsum = max(maxsum,sum);
        if(sum < 0) sum = 0;
    }
    cout << maxsum << endl;
    return 0;
}