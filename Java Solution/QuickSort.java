public class QuickSort {
    private int[] numbers;

    public QuickSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        quickSort(0, numbers.length - 1);
        printArray();
    }

    private void quickSort(int low, int high) {
        if (low < high) {
            int p = partition(low, high);
            quickSort(low, p - 1);
            quickSort(p + 1, high);
            printArray();
        }
    }

    private int partition(int low, int high) {
        int pivot = numbers[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (numbers[j] <= pivot) {
                i++;
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
        int temp = numbers[i + 1];
        numbers[i + 1] = numbers[high];
        numbers[high] = temp;
        return i + 1;
    }

    public void printArray() {
        for (int num : numbers) System.out.print(num + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[] data = {10, 7, 8, 9, 1, 5};
        QuickSort sorter = new QuickSort(data);
        sorter.sort();
    }
}
