#include <iostream>
#include <vector>
using namespace std;

class QuickSort {
public:
    vector<int> numbers;

    QuickSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        quickSort(0, numbers.size() - 1);
        printArray();
    }

private:
    void quickSort(int low, int high) {
        if (low < high) {
            int p = partition(low, high);
            quickSort(low, p - 1);
            quickSort(p + 1, high);
            printArray();
        }
    }

    int partition(int low, int high) {
        int pivot = numbers[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (numbers[j] <= pivot) {
                i++;
                swap(numbers[i], numbers[j]);
            }
        }
        swap(numbers[i + 1], numbers[high]);
        return i + 1;
    }

    void printArray() {
        for (int num : numbers) cout << num << " ";
        cout << endl;
    }
};

int main() {
    vector<int> data = {10, 7, 8, 9, 1, 5};
    QuickSort sorter(data);
    sorter.sort();
    return 0;
}
