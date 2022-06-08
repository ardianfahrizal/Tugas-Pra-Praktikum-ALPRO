#include <iostream>
using namespace std;

class Barang {
   private:
    int a[6][2];
    int total[5];
    int hasil=0;

   public:
    void input();
    void proses();
    void output();
};

void Barang::input() {
    for (int i = 0; i < 5; i++) {
        cout << " Masukkan stok : ";
        cin >> a[i][0];
    }
    for (int i = 0; i < 5; i++) {
        cout << " Masukkan harga : ";
        cin >> a[i][1];
    }
}

void Barang::proses() {
    for (int i = 0; i < 5; i++) {
        total[i] = a[i][0] * a[i][1];
    }
    for (int i = 0; i < 5; i++) {
        hasil = hasil + total[i];
    }
}
void Barang::output(){
	cout << "========================================\n";
    cout << "Nama barang\tStok\tHarga\tTotal\n";
    cout << "========================================\n";
    cout << "Logitech\t";
    for (int i = 0; i < 2; i++) {
        cout << a[0][i] << "\t";
    }
    cout << total[0];
    cout << "\nVivo\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[1][i] << "\t";
    }
    cout << total[1];
    cout << "\nApple\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[2][i] << "\t";
    }
    cout << total[2];
    cout << "\nPhilips\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[3][i] << "\t";
    }
    cout << total[3];
    cout << "\nLenovo\t\t";
    for (int i = 0; i < 2; i++) {
        cout << a[4][i] << "\t";
    }

    cout << total[4];
    cout<<"\n---------------------------------------"<<endl;
    cout << "\nTotal penjualan keseluruhan "
         << "\t" << hasil;
}

main (){
	Barang a;
	a.input();
	a.proses();
	a.output();
}
