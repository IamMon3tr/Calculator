#include <iostream>
#include <cmath> // untuk operasi tambahan seperti pow() dan sqrt()
using namespace std;

// Fungsi untuk operasi matematika
double tambah(double a, double b) {
    return a + b;
}

double kurang (double a, double b) {
    return a - b;
}

double kali (double a, double b) {
    return a * b;
}

double bagi (double a, double b) {
    if (b == 0) {
        cout << "Error! Pembagian dengan nol tidak dapat dilakukan." << endl;
        return 0;
    }
    return a / b;
}

double pangkat(double a, double b) {
    return pow(a, b);
}

double akar(double a) {
    if (a < 0) {
        cout << "Error: Tidak bisa menghitung akar dari angka negatif.\n";
        return 0;
    }
    return sqrt(a);
}

int main() {
    double num1, num2, hasil;
    char oper;
    char lagi;

do {
    cout << "=== Kalkulator Sederhana ===\n";
    cout << "Operasi yang tersedia:\n";
    cout << " + : Penjumlahan\n";
    cout << " - : Pengurangan\n";
    cout << " * : Perkalian\n";
    cout << " / : Pembagian\n";
    cout << " ^ : Pangkat\n";
    cout << " r : Akar Kuadrat\n";
    cout << "============================\n";

    cout << "Pilih operasi: " << endl;
    cin >> num1 >> oper;

    if (oper == 'r') {
        hasil = akar(num1);
    } else {
        cin >> num2; 
        switch (oper) {
        case '+':
            hasil = tambah(num1, num2);
            break;
        case '-':    
            hasil = kurang(num1, num2);
            break;
        case '*':
            hasil = kali(num1, num2);
            break;
        case '/':
            hasil = bagi(num1, num2);
            break;
        case '^':
            hasil = pangkat(num1, num2);
            break;
    default:
       cout << "Error! Operasi tidak dikenal." << endl;
        continue;
        }
}
    cout << "Hasil: " << hasil << endl;
    cout << "Ingin menghitung lagi? (y/n): ";
    cin >> lagi;

    } while (lagi == 'y' || lagi == 'Y');

    cout << "Terima kasih telah menggunakan kalkulator ini!\n";
    return 0;
}

