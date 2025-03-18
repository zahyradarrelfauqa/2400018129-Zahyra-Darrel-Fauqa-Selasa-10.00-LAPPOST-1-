#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Pembelian {
    string nama_pelanggan;
    string jenis_bensin;
    float total_liter;
    float harga_per_liter;
    float total_harga;
};

void inputPembelian(Pembelian &p) {
    cout << "Masukkan Nama Pelanggan: ";
    getline(cin, p.nama_pelanggan);
    
    cout << "Pilih Jenis Bensin (Pertalite/Pertamax): ";
    getline(cin, p.jenis_bensin);
    
    if (p.jenis_bensin == "Pertalite" || p.jenis_bensin == "pertalite") {
        p.harga_per_liter = 7000;
    } else if (p.jenis_bensin == "Pertamax" || p.jenis_bensin == "pertamax") {
        p.harga_per_liter = 9000;
    } else {
        cout << "Jenis bensin tidak valid!" << endl;
        exit(1);
    }
    
    cout << "Masukkan Total Liter: ";
    cin >> p.total_liter;
    
    p.total_harga = p.total_liter * p.harga_per_liter;
}

void displayStruk(const Pembelian &p) {
    cout << "\n+=========== STRUK PEMBELIAN SPBU UAD ===========+\n";
    cout << "|\t\t\t\t\t\t |"<<endl;
    cout << "| " << left << setw(20) << "Nama Pelanggan" << ": " << p.nama_pelanggan << "\t\t |" << endl;
    cout << "| "<< left << setw(20) <<"Jenis Bensin" << ": " << p.jenis_bensin << "\t\t |" << endl;
    cout << "| "<< left << setw(20) <<"Total Liter" << ": " << p.total_liter << " Liter" << "\t\t\t |" << endl;
    cout << "| "<< left << setw(20) <<"Harga per Liter" << ": Rp " << p.harga_per_liter << "\t\t\t |" << endl;
    cout << "|\t\t\t\t\t\t |"<<endl;
    cout << "+================================================+\n";
    cout << "| "<< left << setw(20) <<"Total Harga" << ": Rp " << p.total_harga << "\t\t |" << endl;
    cout << "+================================================+\n";
}

int main() {
    Pembelian pembelian;
    inputPembelian(pembelian);
    displayStruk(pembelian);
    return 0;
}
