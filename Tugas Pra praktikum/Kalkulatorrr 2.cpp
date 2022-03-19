#include <iostream>
using namespace std;

int main() 
{
    float x,y;
    int pilihan;

    menu :
    cout << "Pilihan Hitungan : \n";
    cout << "1.Penjumlahan \n";
    cout << "2.Pengurangan \n";
    cout << "3.Perkalian \n";
    cout << "4.Pembagian \n\n";
    cout << "Masukkan kode pilihan : ";cin >> pilihan;
    if (pilihan > 4 || pilihan < 1){
        cout << "\nKode pilihan yang anda masukkan tidak ada atau salah ";
        system("pause");
        system("cls");
        goto menu;
    }
    else {
        cout << "Masukkan angka pertama : ";cin >> x;
        cout << "Masukkan angka kedua   : ";cin >> y;
        if (pilihan == 1){
            cout << "\nHasil penjumlahan dari "<<x<<" + "<<y<<" adalah : "<<x+y<<endl;
        }
        else if (pilihan == 2){
            cout << "\nHasil pengurangan dari "<<x<<" - "<<y<<" adalah : "<<x-y<<endl;
        }
        else if (pilihan == 3){
            cout << "\nHasil perkalian dari "<<x<<" x "<<y<<" adalah : "<<x*y<<endl;
        }
        else if (pilihan == 4){
            cout << "\nHasil pembagian dari "<<x<<" / "<<y<<" adalah : "<<x/y<<endl;
        }
    }
    return 0;
}
