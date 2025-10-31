#include <iostream>
using namespace std;

class InterpolationSearch {
public:
    int search(int arr[], int n, int target) {
        int low = 0;
        int high = n - 1;
        while (low <= high && target >= arr[low] && target <= arr[high]) {
            if (low == high) {
                if (arr[low] == target) return low;
                return -1;
            }
            int pos = low + ((target - arr[low]) * (high - low)) / (arr[high] - arr[low]);
            if (arr[pos] == target) return pos;
            if (arr[pos] < target) low = pos + 1;
            else high = pos - 1;
        }
        return -1;
    }
};

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    InterpolationSearch s;
    cout << s.search(arr, n, 40);
    return 0;
}
