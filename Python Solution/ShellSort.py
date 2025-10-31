class ShellSort:
    def __init__(self, numbers):
        self.numbers = numbers

    def sort(self):
        n = len(self.numbers)
        gap = n // 2
        while gap > 0:
            for i in range(gap, n):
                temp = self.numbers[i]
                j = i
                while j >= gap and self.numbers[j - gap] > temp:
                    self.numbers[j] = self.numbers[j - gap]
                    j -= gap
                self.numbers[j] = temp
            print(self.numbers)
            gap //= 2
        print(self.numbers)
        return self.numbers


if name == "__main__":
    data = [23, 12, 1, 8, 34, 54, 2, 3]
    sorter = ShellSort(data)
    sorter.sort()
