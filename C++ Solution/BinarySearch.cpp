#include <iostream>
using namespace std;

class BinarySearch {
public:
    int search(int arr[], int n, int target) {
        int left = 0;
        int right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    int arr[] = {1, 2, 3, 5, 9};
    int n = 5;
    BinarySearch s;
    cout << s.search(arr, n, 5);
    return 0;
}
