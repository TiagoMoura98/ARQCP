int average(int v[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + v[i];
    }

    int average = sum / n;
    return average;
}