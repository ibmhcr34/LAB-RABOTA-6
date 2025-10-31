#include <iostream>
#include <vector>
using namespace std;

class InsertionSort {
public:
    vector<int> numbers;

    InsertionSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        int n = numbers.size();
        for (int i = 1; i < n; i++) {
            int key = numbers[i];
            int j = i - 1;
            while (j >= 0 && numbers[j] > key) {
                numbers[j + 1] = numbers[j];
                j--;
            }
            numbers[j + 1] = key;
            printArray();
        }
        printArray();
    }

    void printArray() {
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> data = {12, 11, 13, 5, 6};
    InsertionSort sorter(data);
    sorter.sort();
    return 0;
}
