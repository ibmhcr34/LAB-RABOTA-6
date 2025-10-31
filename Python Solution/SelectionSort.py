class SelectionSort:
    def __init__(self, numbers):
        self.numbers = numbers

    def sort(self):
        n = len(self.numbers)
        print(self.numbers)
        for i in range(n - 1):
            min_index = i
            for j in range(i + 1, n):
                if self.numbers[j] < self.numbers[min_index]:
                    min_index = j
            self.numbers[i], self.numbers[min_index] = self.numbers[min_index], self.numbers[i]
            print(self.numbers)
        print(self.numbers)
        return self.numbers


if name == "__main__":
    data = [64, 25, 12, 22, 11]
    sorter = SelectionSort(data)
    sorter.sort()
