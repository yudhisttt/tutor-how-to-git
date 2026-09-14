#include <iostream>
using namespace std;

int main() {
    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukan total belanja (Rp): ";
    float totalBelanja;
    float diskon;
    int totalSetelahDiskon;
    cin >> totalBelanja;
    cout << "\n--- Ringkasan Pembayaran ---" << endl;

    if (totalBelanja < 100000) {
        cout << "Diskon (0%)\t: Rp " << totalBelanja << endl;
        cout << "Total Bayar\t: Rp " << totalBelanja << endl;
    } else if (totalBelanja >= 100000 && totalBelanja < 300000) {
        diskon = totalBelanja * 0.1; // Diskon 10%
        totalSetelahDiskon = totalBelanja - diskon;
        cout << "Diskon (10%)\t: Rp " << diskon << endl;
        cout << "Total Bayar\t: Rp " << totalSetelahDiskon << endl;
    } else {
        diskon = totalBelanja * 0.2; // Diskon 20%
        totalSetelahDiskon = totalBelanja - diskon;
        cout << "Diskon (20%)\t: Rp " << diskon << endl;
        cout << "Total Bayar\t: Rp " << totalSetelahDiskon << endl;
    }

    return 0;
}