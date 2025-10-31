class FibonacciSearch:
    def search(self, nums, key):
        n = len(nums)
        a = 0
        b = 1
        c = a + b
        while c < n:
            a = b
            b = c
            c = a + b
        index = -1
        while c > 1:
            pos = min(index + a, n - 1)
            if nums[pos] < key:
                c = b
                b = a
                a = c - b
                index = pos
            elif nums[pos] > key:
                c = a
                b = b - a
                a = c - b
            else:
                return pos
        if b == 1 and index + 1 < n and nums[index + 1] == key:
            return index + 1
        return -1

nums = [1, 3, 5, 8, 13, 21, 34]
s = FibonacciSearch()
print(s.search(nums, 13))
