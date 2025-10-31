#include <iostream>
using namespace std;

class LinearSearch {
public:
    int search(int arr[], int n, int target) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    int arr[] = {3, 5, 2, 9, 1};
    int n = 5;
    LinearSearch s;
    cout << s.search(arr, n, 9);
    return 0;
}
