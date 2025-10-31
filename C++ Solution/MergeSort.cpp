#include <iostream>
#include <vector>
using namespace std;

class MergeSort {
public:
    vector<int> numbers;

    MergeSort(vector<int> arr) {
        numbers = arr;
    }

    void sort() {
        numbers = mergeSort(numbers);
        printArray();
    }

    vector<int> mergeSort(vector<int> arr) {
        if (arr.size() <= 1) return arr;
        int mid = arr.size() / 2;
        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());
        left = mergeSort(left);
        right = mergeSort(right);
        return merge(left, right);
    }

    vector<int> merge(vector<int> left, vector<int> right) {
        vector<int> result;
        int i = 0, j = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) result.push_back(left[i++]);
            else result.push_back(right[j++]);
        }
        while (i < left.size()) result.push_back(left[i++]);
        while (j < right.size()) result.push_back(right[j++]);
        printArray(result);
        return result;
    }

    void printArray(vector<int> arr) {
        for (int num : arr) cout << num << " ";
        cout << endl;
    }

    void printArray() {
        for (int num : numbers) cout << num << " ";
        cout << endl;
    }
};

int main() {
    vector<int> data = {38, 27, 43, 3, 9, 82, 10};
    MergeSort sorter(data);
    sorter.sort();
    return 0;
}
