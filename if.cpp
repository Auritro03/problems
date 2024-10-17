#include <iostream>
using namespace std;

class Solution {
public:
    string compareNM(int n, int m) {
        if (n < m) {
            cout << "lesser";
        } else if (n == m) {
            cout << "equal";
        } else {
            return "greater";
        }
    }
};

int main() {
    int n = 4;
    int m = 8;

    Solution solution;
    string result = solution.compareNM(n, m);
    cout << result << endl;

    return 0;
}