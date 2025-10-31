#include <iostream>
using namespace std;

class FibonacciSearch {
public:
    int search(int nums[], int n, int key) {
        int a = 0;
        int b = 1;
        int c = a + b;
        while (c < n) {
            a = b;
            b = c;
            c = a + b;
        }
        int index = -1;
        while (c > 1) {
            int pos = min(index + a, n - 1);
            if (nums[pos] < key) {
                c = b;
                b = a;
                a = c - b;
                index = pos;
            } else if (nums[pos] > key) {
                c = a;
                b = b - a;
                a = c - b;
            } else {
                return pos;
            }
        }
        if (b == 1 && index + 1 < n && nums[index + 1] == key) return index + 1;
        return -1;
    }
};

int main() {
    int nums[] = {1, 3, 5, 8, 13, 21, 34};
    int n = 7;
    FibonacciSearch s;
    cout << s.search(nums, n, 13);
    return 0;
}
