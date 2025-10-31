class LinearSearch:
    def search(self, arr, target):
        for i in range(len(arr)):
            if arr[i] == target:
                return i
        return -1

nums = [3, 5, 2, 9, 1]
s = LinearSearch()
print(s.search(nums, 9))
