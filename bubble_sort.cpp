void countSwaps(vector<int> a) {
    int numSwaps = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
            ++numSwaps;
            }
        }
    }
    cout << "Array is sorted in " << numSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << "\n";
    cout << "Last Element: " << a[n-1] << "\n";
}
