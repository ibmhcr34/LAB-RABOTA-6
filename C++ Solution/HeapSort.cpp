#include <iostream>
#include <vector>
using namespace std;

class HeapSort {
public:
    vector<int> numbers;

    HeapSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        int n = numbers.size();
        for (int i = n / 2 - 1; i >= 0; i--) heapify(n, i);
        for (int i = n - 1; i > 0; i--) {
            swap(numbers[0], numbers[i]);
            heapify(i, 0);
            printArray();
        }
        printArray();
    }

private:
    void heapify(int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && numbers[left] > numbers[largest]) largest = left;
        if (right < n && numbers[right] > numbers[largest]) largest = right;
        if (largest != i) {
            swap(numbers[i], numbers[largest]);
            heapify(n, largest);
        }
    }

    void printArray() {
        for (int num : numbers) cout << num << " ";
        cout << endl;
    }
};

int main() {
    vector<int> data = {12, 11, 13, 5, 6, 7};
    HeapSort sorter(data);
    sorter.sort();
    return 0;
}
