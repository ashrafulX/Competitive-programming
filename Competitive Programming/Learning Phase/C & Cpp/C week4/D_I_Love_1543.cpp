#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to extract a layer as a string in clockwise order
string getLayerClockwise(const vector<string>& carpet, int layer, int n, int m) {
    string result;
    int top = layer, bottom = n - layer - 1;
    int left = layer, right = m - layer - 1;

    // Traverse top row from left to right
    for (int j = left; j <= right; ++j) result += carpet[top][j];
    // Traverse right column from top to bottom
    for (int i = top + 1; i <= bottom; ++i) result += carpet[i][right];
    // Traverse bottom row from right to left (if different from top row)
    if (top < bottom) {
        for (int j = right - 1; j >= left; --j) result += carpet[bottom][j];
    }
    // Traverse left column from bottom to top (if different from right column)
    if (left < right) {
        for (int i = bottom - 1; i > top; --i) result += carpet[i][left];
    }
    
    return result;
}

// Function to count occurrences of "1543" in each layer
int countOccurrencesInLayers(const vector<string>& carpet, int n, int m) {
    int occurrences = 0;
    string target = "1543";
    int layers = min(n, m) / 2; // Number of layers

    for (int layer = 0; layer < layers; ++layer) {
        string layerString = getLayerClockwise(carpet, layer, n, m);
        size_t pos = layerString.find(target);
        while (pos != string::npos) {
            ++occurrences;
            pos = layerString.find(target, pos + 1); // Look for next occurrence
        }
    }
    
    return occurrences;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> carpet(n);
        for (int i = 0; i < n; ++i) {
            cin >> carpet[i];
        }
        cout << countOccurrencesInLayers(carpet, n, m) << endl;
    }
    return 0;
}
