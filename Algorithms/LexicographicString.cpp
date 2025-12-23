#include <bits/stdc++.h>
using namespace std;

// Pass a vector of strings by reference
void sortLexico(vector<string> &fruit) {
    int n = fruit.size();
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            // Lexicographical comparison (A-Z)
            if (fruit[j] < fruit[min_index]) {
                min_index = j;
            }
        }
        if (i != min_index) {
            swap(fruit[i], fruit[min_index]);
        }
    }
}

int main() {
    vector<string> fruit = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};
    
    sortLexico(fruit);

    cout << "Sorted Fruits: " << endl;
    for (const string &f : fruit) {
        cout << f << " ";
    }
    return 0;
}