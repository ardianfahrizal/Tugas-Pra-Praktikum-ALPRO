#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int jumlah_beli, bayar, diskon, jumlah[100], harga[100],total[50];
    float total_semua;
    string nama_barang[100];
    cout<<"========================="<<endl;
    cout<<"Program Kasir AlfaJuni"<<endl;
    cout<<"========================="<<endl;
    cout<<"Masukkan jumlah jenis barang yang ingin dibeli : ";
    cin>> jumlah_beli; 

    for (int i=0;i<jumlah_beli;i++){
    	cin.ignore();
        cout<<"\nMasukan Barang ke-"<<i+1<<"\n\n";
        cout<<"Nama Barang : ";
        getline(cin,nama_barang[i]); 

        cout<<"Jumlah Barang : ";
        cin>>jumlah[i]; 

        cout<<"Harga Barang/pcs: ";
        cin>>harga[i]; 

        total[i] = jumlah[i]*harga[i]; 
        total_semua += total[i]; 

    }
    cout<<"\n======================";
    cout<<"\nStruk Belanja";
    cout<<"\n======================";

    cout<<"\nNo\tBarang\tJumlah\tHarga\tTotal\n";
    for (int i=0; i<jumlah_beli; i++ ){
        cout<<i+1<<"\t"<<nama_barang[i]<<"\t"<<jumlah[i]<<"\t"<<harga[i]<<"\t"<<total[i]<<endl;
    }

    cout<<"\nTotal Bayar : Rp."<<total_semua<<endl;
    cout<<"Bayar : Rp.";
    cin>>bayar;
    cout<<"Kembalian : Rp."<<(bayar-(total_semua))<<endl;
    
    getch();
    return 0;
}
