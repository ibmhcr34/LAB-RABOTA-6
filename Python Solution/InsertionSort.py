class InsertionSort:
    def __init__(self, numbers):
        self.numbers = numbers

    def sort(self):
        n = len(self.numbers)
        for i in range(1, n):
            key = self.numbers[i]
            j = i - 1
            while j >= 0 and self.numbers[j] > key:
                self.numbers[j + 1] = self.numbers[j]
                j -= 1
            self.numbers[j + 1] = key
            print(self.numbers)
        print(self.numbers)
        return self.numbers


if name == "__main__":
    data = [12, 11, 13, 5, 6]
    sorter = InsertionSort(data)
    sorter.sort()
