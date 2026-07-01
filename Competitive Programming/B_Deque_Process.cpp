/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 20:38:49 27/07/2025
 **/
#include <bits/stdc++.h>
using namespace std;

// Approach 1: Simplified Greedy
void solve1() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    string result = "L"; // Always start with left
    int left = 1, right = n - 1;
    bool maximize = true; // Alternate between max and min strategy
    
    while (left <= right) {
        if (maximize) {
            // Choose the element that allows better future choices
            if (arr[left] <= arr[right]) {
                result += 'L';
                left++;
            } else {
                result += 'R';
                right--;
            }
        } else {
            // Choose the element that allows better future choices
            if (arr[left] >= arr[right]) {
                result += 'L';
                left++;
            } else {
                result += 'R';
                right--;
            }
        }
        maximize = !maximize;
    }
    
    cout << result << "\n";
}

// Approach 2: Recursive with Path Construction
string path;
vector<int> arr;

void buildPath(int left, int right, bool maximize, int lastVal) {
    if (left > right) return;
    
    int leftVal = arr[left];
    int rightVal = arr[right];
    
    bool chooseLeft;
    
    if (maximize) {
        bool canLeft = (leftVal > lastVal);
        bool canRight = (rightVal > lastVal);
        
        if (canLeft && canRight) {
            chooseLeft = (leftVal <= rightVal);
        } else if (canLeft) {
            chooseLeft = true;
        } else if (canRight) {
            chooseLeft = false;
        } else {
            chooseLeft = (leftVal >= rightVal);
        }
    } else {
        bool canLeft = (leftVal < lastVal);
        bool canRight = (rightVal < lastVal);
        
        if (canLeft && canRight) {
            chooseLeft = (leftVal >= rightVal);
        } else if (canLeft) {
            chooseLeft = true;
        } else if (canRight) {
            chooseLeft = false;
        } else {
            chooseLeft = (leftVal <= rightVal);
        }
    }
    
    if (chooseLeft) {
        path += 'L';
        buildPath(left + 1, right, !maximize, leftVal);
    } else {
        path += 'R';
        buildPath(left, right - 1, !maximize, rightVal);
    }
}

void solve() {
    int n;
    cin >> n;
    
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    path = "L"; // Start with left
    buildPath(1, n - 1, true, arr[0]);
    
    cout << path << "\n";
    path.clear();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}