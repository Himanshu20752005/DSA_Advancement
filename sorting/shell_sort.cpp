void Shell_sort(int A[], int n) {
    int i, j, gap, temp;
    for (gap = n / 2; gap >= 1; gap /= 2) {
        for (j = gap; j < n; j++) {
            temp = A[j];
            i = j - gap;
            while (i >= 0 && A[i] > temp) {
                A[i + gap] = A[i];
                i -= gap;
            }
            A[i + gap] = temp;
        }
    }
}
