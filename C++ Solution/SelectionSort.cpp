#include <iostream>
#include <vector>
using namespace std;

class SelectionSort {
public:
    vector<int> numbers;

    SelectionSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        int n = numbers.size();
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (numbers[j] < numbers[min_index]) {
                    min_index = j;
                }
            }
            swap(numbers[i], numbers[min_index]);
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
    vector<int> data = {64, 25, 12, 22, 11};
    SelectionSort sorter(data);
    sorter.sort();
    return 0;
}
