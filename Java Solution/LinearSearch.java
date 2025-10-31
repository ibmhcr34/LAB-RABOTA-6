public class LinearSearch {
    public static int search(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int[] nums = {3, 5, 2, 9, 1};
        int result = search(nums, 9);
        System.out.println(result);
    }
}
