//code for pattern number 7 in striver sheet 
void pattern7(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - i + 1 && j <= n + i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
