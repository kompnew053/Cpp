    int b, k;
    cout << "Masukkan batas baris : ";
    cin >> b;
    while (b <= 0) {
        cout << "Batas harus positif! Ulangi: ";
        cin >> b;
    }
    cout << "Masukkan batas kolom : ";
    cin >> k;
    while (k <= 0) {
        cout << "Batas harus positif! Ulangi: ";
        cin >> k;
    }
    cout << endl;
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= k; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }
