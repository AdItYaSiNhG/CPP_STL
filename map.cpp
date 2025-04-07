#include <bits/stdc++.h>
using namespace std;

void CountFrequency(vector<int> arr) {
    unordered_map<int, int> mp;
    
    // Counting frequency
    for (int num : arr) {
        mp[num]++;
    }

    // Printing frequency
    for (auto &x : mp) {
        cout << x.first << " " << x.second << endl;
        if(x.second > 1) {
            cout << "Duplicate element: " << x.first << endl;
        }
    }
}

int main() {
    vector<int> arr = {10, 20, 20, 10, 10, 20, 5, 20, 25, 33,5 ,6}; 
    CountFrequency(arr); 
    return 0;
}
