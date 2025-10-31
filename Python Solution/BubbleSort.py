class BubbleSort:
    def __init__(self, numbers):
        self.numbers = numbers

    def sort(self):
        n = len(self.numbers)
        for i in range(n - 1):
            for j in range(n - i - 1):
                if self.numbers[j] > self.numbers[j + 1]:
                    self.numbers[j], self.numbers[j + 1] = self.numbers[j + 1], self.numbers[j]
            print(self.numbers)
        print(self.numbers)
        return self.numbers


if name == "__main__":
    data = [64, 34, 25, 12, 22, 11, 90]
    sorter = BubbleSort(data)
    sorter.sort()
