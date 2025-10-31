public class MergeSort {
    private int[] numbers;

    public MergeSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        numbers = mergeSort(numbers);
        printArray();
    }

    private int[] mergeSort(int[] arr) {
        if (arr.length <= 1) return arr;
        int mid = arr.length / 2;
        int[] left = new int[mid];
        int[] right = new int[arr.length - mid];
        System.arraycopy(arr, 0, left, 0, mid);
        System.arraycopy(arr, mid, right, 0, arr.length - mid);
        left = mergeSort(left);
        right = mergeSort(right);
        return merge(left, right);
    }

    private int[] merge(int[] left, int[] right) {
        int[] result = new int[left.length + right.length];
        int i = 0, j = 0, k = 0;
        while (i < left.length && j < right.length) {
            if (left[i] < right[j]) result[k++] = left[i++];
            else result[k++] = right[j++];
        }
        while (i < left.length) result[k++] = left[i++];
        while (j < right.length) result[k++] = right[j++];
        printArray(result);
        return result;
    }

    public void printArray() {
        for (int num : numbers) System.out.print(num + " ");
        System.out.println();
    }

    public void printArray(int[] arr) {
        for (int num : arr) System.out.print(num + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[] data = {38, 27, 43, 3, 9, 82, 10};
        MergeSort sorter = new MergeSort(data);
        sorter.sort();
    }
}
