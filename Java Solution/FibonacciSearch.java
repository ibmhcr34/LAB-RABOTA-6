public class FibonacciSearch {
    public static int search(int[] nums, int key) {
        int a = 0;
        int b = 1;
        int c = a + b;
        while (c < nums.length) {
            a = b;
            b = c;
            c = a + b;
        }
        int index = -1;
        while (c > 1) {
            int pos = Math.min(index + a, nums.length - 1);
            if (nums[pos] < key) {
                c = b;
                b = a;
                a = c - b;
                index = pos;
            } else if (nums[pos] > key) {
                c = a;
                b = b - a;
                a = c - b;
            } else {
                return pos;
            }
        }
        if (b == 1 && index + 1 < nums.length && nums[index + 1] == key) return index + 1;
        return -1;
    }
    public static void main(String[] args) {
        int[] nums = {1, 3, 5, 8, 13, 21, 34};
        int res = search(nums, 13);
        System.out.println(res);
    }
}
