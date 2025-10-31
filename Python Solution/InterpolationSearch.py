class InterpolationSearch:
    def search(self, arr, target):
        low = 0
        high = len(arr) - 1
        while low <= high and target >= arr[low] and target <= arr[high]:
            if low == high:
                if arr[low] == target:
                    return low
                return -1
            pos = low + ((target - arr[low]) * (high - low)) // (arr[high] - arr[low])
            if arr[pos] == target:
                return pos
            elif arr[pos] < target:
                low = pos + 1
            else:
                high = pos - 1
        return -1

nums = [10, 20, 30, 40, 50, 60]
s = InterpolationSearch()
print(s.search(nums, 40))
