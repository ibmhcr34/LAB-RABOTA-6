public class HeapSort {
    private int[] numbers;

    public HeapSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        int n = numbers.length;
        for (int i = n / 2 - 1; i >= 0; i--) heapify(n, i);
        for (int i = n - 1; i > 0; i--) {
            int temp = numbers[0];
            numbers[0] = numbers[i];
            numbers[i] = temp;
            heapify(i, 0);
            printArray();
        }
        printArray();
    }

    private void heapify(int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && numbers[left] > numbers[largest]) largest = left;
        if (right < n && numbers[right] > numbers[largest]) largest = right;
        if (largest != i) {
            int swap = numbers[i];
            numbers[i] = numbers[largest];
            numbers[largest] = swap;
            heapify(n, largest);
        }
    }

    public void printArray() {
        for (int num : numbers) System.out.print(num + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[] data = {12, 11, 13, 5, 6, 7};
        HeapSort sorter = new HeapSort(data);
        sorter.sort();
    }
}
