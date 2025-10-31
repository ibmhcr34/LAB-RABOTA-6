class HeapSort:
    def __init__(self, numbers):
        self.numbers = numbers

    def sort(self):
        n = len(self.numbers)
        for i in range(n // 2 - 1, -1, -1):
            self.heapify(n, i)
        for i in range(n - 1, 0, -1):
            self.numbers[i], self.numbers[0] = self.numbers[0], self.numbers[i]
            self.heapify(i, 0)
            print(self.numbers)
        print(self.numbers)
        return self.numbers

    def heapify(self, n, i):
        largest = i
        left = 2 * i + 1
        right = 2 * i + 2
        if left < n and self.numbers[left] > self.numbers[largest]:
            largest = left
        if right < n and self.numbers[right] > self.numbers[largest]:
            largest = right
        if largest != i:
            self.numbers[i], self.numbers[largest] = self.numbers[largest], self.numbers[i]
            self.heapify(n, largest)


if name == "__main__":
    data = [12, 11, 13, 5, 6, 7]
    sorter = HeapSort(data)
    sorter.sort()
