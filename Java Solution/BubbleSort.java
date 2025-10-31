public class BubbleSort {
    private int[] numbers;

    public BubbleSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        int n = numbers.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (numbers[j] > numbers[j + 1]) {
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
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
        int[] data = {64, 34, 25, 12, 22, 11, 90};
        BubbleSort sorter = new BubbleSort(data);
        sorter.sort();
    }
}
