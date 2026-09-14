#include <iostream>
using namespace std;

int main() {
    int Minuman;
    float uang, kembalian;
    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilih Minuman " << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    cout << "Pilih kode minuman (1-3): ";
    cin >> Minuman;

    switch (Minuman) {
        case 1:
            cout << "Masukan uang (Rp)\t: ";
            cin >> uang;
            if (uang >= 4000) {
                kembalian = uang - 4000;
                cout << "\n--- Detail Transaksi ---" << endl;
                cout << "Kembalian\t\t: Rp " << kembalian << endl;
            } else {
                cout << "\n--- Detail Transaksi ---" << endl;
                cout << "Uang tidak cukup untuk membeli Air Mineral. Uang Kamu Kurang Rp " << 4000 - uang << "." << endl;
            }
            break;
        case 2:
            cout << "Masukan uang (Rp)\t: ";
            cin >> uang;
            if (uang >= 6000) {
                kembalian = uang - 6000;
                cout << "\n--- Detail Transaksi ---" << endl;
                cout << "Kembalian\t\t: Rp " << kembalian << endl;
            } else {
                cout << "\n--- Detail Transaksi ---" << endl;
                cout << "Uang tidak cukup untuk membeli Teh Botol. Uang Kamu Kurang Rp " << 6000 - uang << "." << endl;
            }
            break;
        case 3:
            cout << "Masukan uang (Rp)\t: ";
            cin >> uang;
            if (uang >= 10000) {
                kembalian = uang - 10000;
                cout << "\n--- Detail Transaksi ---" << endl;
                cout << "Kembalian\t\t: Rp " << kembalian << endl;
            } else {
                cout << "\n--- Detail Transaksi ---" << endl;
                cout << "Uang tidak cukup untuk membeli Kopi Susu. Uang Kamu Kurang Rp " << 10000 - uang << "." << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid. Silakan pilih kode minuman yang tersedia." << endl;
    }
    return 0;
}