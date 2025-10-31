#include <iostream>
#include <vector>
using namespace std;

class ShellSort {
public:
    vector<int> numbers;

    ShellSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        int n = numbers.size();
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = numbers[i];
                int j = i;
                while (j >= gap && numbers[j - gap] > temp) {
                    numbers[j] = numbers[j - gap];
                    j -= gap;
                }
                numbers[j] = temp;
            }
            printArray();
        }
        printArray();
    }

    void printArray() {
        for (int num : numbers) cout << num << " ";
        cout << endl;
    }
};

int main() {
    vector<int> data = {23, 12, 1, 8, 34, 54, 2, 3};
    ShellSort sorter(data);
    sorter.sort();
    return 0;
}
