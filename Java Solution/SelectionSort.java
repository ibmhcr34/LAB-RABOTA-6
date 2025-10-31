public class SelectionSort {
    private int[] numbers;

    public SelectionSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        int n = numbers.length;
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (numbers[j] < numbers[minIndex]) {
                    minIndex = j;
                }
            }
            int temp = numbers[i];
            numbers[i] = numbers[minIndex];
            numbers[minIndex] = temp;
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
        int[] data = {64, 25, 12, 22, 11};
        SelectionSort sorter = new SelectionSort(data);
        sorter.sort();
    }
}
