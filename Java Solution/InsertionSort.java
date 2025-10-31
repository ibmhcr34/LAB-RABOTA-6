public class InsertionSort {
    private int[] numbers;

    public InsertionSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        int n = numbers.length;
        for (int i = 1; i < n; i++) {
            int key = numbers[i];
            int j = i - 1;
            while (j >= 0 && numbers[j] > key) {
                numbers[j + 1] = numbers[j];
                j--;
            }
            numbers[j + 1] = key;
            printArray();
        }
        printArray();
    }

    public void printArray() {
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int[] data = {12, 11, 13, 5, 6};
        InsertionSort sorter = new InsertionSort(data);
        sorter.sort();
    }
}
