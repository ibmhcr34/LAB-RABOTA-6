public class ShellSort {
    private int[] numbers;

    public ShellSort(int[] numbers) {
        this.numbers = numbers;
    }

    public void sort() {
        int n = numbers.length;
        for (int gap = n / 2; gap > 0; gap /= 2) {
            for (int i = gap; i < n; i++) {
                int temp = numbers[i];
                int j = i;
                while (j >= gap && numbers[j - gap] > temp) {
                    numbers[j] = numbers[j - gap];
                    j -= gap;
                }
                numbers[j] = temp;
            }
            printArray();
        }
        printArray();
    }

    public void printArray() {
        for (int num : numbers) System.out.print(num + " ");
        System.out.println();
    }

    public static void main(String[] args) {
        int[] data = {23, 12, 1, 8, 34, 54, 2, 3};
        ShellSort sorter = new ShellSort(data);
        sorter.sort();
    }
}
