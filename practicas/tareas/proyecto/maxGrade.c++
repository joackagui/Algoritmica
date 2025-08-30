#include<bits/stdc++.h>

using namespace std;

#define input freopen("inks.txt", "r", stdin) 
#define output freopen("out.txt", "w", stdout) 

int knapsack(int capacity, const vector<int>& times, const vector<int>& points, vector<bool>& selectedItems) {
    int n = times.size();
    int dp[1000][1000];
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= capacity; ++w) {
            if (times[i - 1] <= w) {
                dp[i][w] = max(points[i - 1] + dp[i - 1][w - times[i - 1]], dp[i - 1][w]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    
    }    

    // Reconstruimos la selección de elementos
    int totalValue = dp[n][capacity];
    int remainingCapacity = capacity;
    for (int i = n; i > 0 && totalValue > 0; --i) {
        if (totalValue != dp[i - 1][remainingCapacity]) {
            selectedItems[i - 1] = true;
            totalValue -= points[i - 1];
            remainingCapacity -= times[i - 1];
        }
    }

    return dp[n][capacity];
}

int main() {
    input;
    output;
    vector<int> times;
    vector<int> points;
    int capacity;
    int nodes;
    cin>>nodes;
    
    for(int i = 0; i < nodes; i++){
        int time, point;
        cin>>time>>point;
        times.push_back(time);
        points.push_back(0-point);
    }

    cin>>capacity;
    vector<bool> selectedItems(times.size(), false);
    int maxValue = knapsack(capacity, times, points, selectedItems);
    
    cout << "Maximum point that can be obtained: " << maxValue << endl;
    cout << "Selected items: ";
    for (int i = 0; i < selectedItems.size(); ++i) {
        if (selectedItems[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;

}