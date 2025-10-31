class QuickSort:
    def __init__(self, numbers):
        self.numbers = numbers

    def sort(self):
        self.quick_sort(0, len(self.numbers) - 1)
        print(self.numbers)
        return self.numbers

    def quick_sort(self, low, high):
        if low < high:
            p = self.partition(low, high)
            self.quick_sort(low, p - 1)
            self.quick_sort(p + 1, high)
            print(self.numbers)

    def partition(self, low, high):
        pivot = self.numbers[high]
        i = low - 1
        for j in range(low, high):
            if self.numbers[j] <= pivot:
                i += 1
                self.numbers[i], self.numbers[j] = self.numbers[j], self.numbers[i]
        self.numbers[i + 1], self.numbers[high] = self.numbers[high], self.numbers[i + 1]
        return i + 1


if name == "__main__":
    data = [10, 7, 8, 9, 1, 5]
    sorter = QuickSort(data)
    sorter.sort()
