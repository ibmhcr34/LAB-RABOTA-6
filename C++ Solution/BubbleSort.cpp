#include <iostream>
#include <vector>
using namespace std;

class BubbleSort {
public:
    vector<int> numbers;

    BubbleSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        int n = numbers.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    swap(numbers[j], numbers[j + 1]);
                }
            }
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
    vector<int> data = {64, 34, 25, 12, 22, 11, 90};
    BubbleSort sorter(data);
    sorter.sort();
    return 0;
}
