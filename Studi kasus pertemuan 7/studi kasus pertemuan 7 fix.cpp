#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Bubble{
	public:
	void input();
	void input2();
	void proses();
	void proses2();
	void proses3();
	private:
	typedef struct{
	int id;
	char nama_barang[20];
	int stock;
	}
   brg;
   brg barang[5];
   brg temp;
   int n,i,b, cari, ada;
};

void Bubble::input()
{
	cout<<"Masukan banyak data = ";
	cin>>n;
for(i=0;i<n;i++){
      cout<<endl;
      cout<<"Data ke-"<<(i+1)<<":"<<endl;
      cout<<"Input id Barang : ";cin>>barang[i].id;
      cout<<"Input Nama Barang: ";cin>>(barang[i].nama_barang);
      cout<<"Input Stock Barang : ";cin>>barang[i].stock;
      cout<<endl;
      }
}

void Bubble::input2()
{
	cout<<"Masukan id Barang Untuk Mencari : ";
    cin>>cari;
}

void Bubble::proses()
{
	for(i=0;i<n;i++){
        cout<<"|       "<<barang[b].id<<"\t\t"<<barang[b].nama_barang<<"\t\t "<<barang[b].stock<<"\t\t      |"<<endl;
        }
        cout<<endl;
      cout<<"=========================================================="<<endl;
          for(i=0;i<n;i++){
             for(b=0;b<n-1;b++){
                if(barang[b].id > barang[b+1].id){
                   temp.id=barang[b].id;
                     barang[b].id=barang[b+1].id;
                     barang[b+1].id=temp.id;
                     strcpy(temp.nama_barang,barang[b].nama_barang);
                     strcpy(barang[b].nama_barang,barang[b+1].nama_barang);
                     strcpy(barang[b+1].nama_barang,temp.nama_barang);
                     temp.stock=barang[b].stock;
                     barang[b].stock=barang[b+1].stock;
                     barang[b+1].stock=temp.stock;
                     }
                  }
               }
               cout<<endl;
        cout<<endl;
}
void Bubble::proses2()
{
	for(b=0;b<n;b++){
        cout<<"|      "<<barang[b].id<<"\t\t"<<barang[b].nama_barang<<"\t\t"<<barang[b].stock<<"\t|"<<endl;
                     }
        cout<<"===================================================="<<endl;
        cout<<endl;
}
void Bubble::proses3()
{
	ada = 0;
        for(b=0;b<n;b++)
            {
            if(barang[b].id==cari)
                {
                    ada=1;
                    cout<<"================================================"<<endl;
                    cout<<"|      Nama Barang     |       Stock Barang    |"<<endl;
                    cout<<"================================================"<<endl;
                    cout<<"|         "<<barang[b].nama_barang<<"\t\t        "<<barang[b].stock<<"\t|"<<endl;
                }
            }
                    cout<<"================================================"<<endl;
        if (ada == 0)
            {
                cout<<"Data Tidak ditemukan"<<endl;
            }
}

main()
{
Bubble a;
cout<<"\t\t"<<"                   PROGRAM SORTING DAN SEARCHING BARANG GUDANG                  "<<endl;
a.input();
        cout<<"Setelah data diurutkan dari kode terkecil ke kode terbesar : "<<endl;
        cout<<"=================================================="<<endl;
        cout<<"|  Kode Barang  |  Nama Barang  |  Stock Barang  |"<<endl;
        cout<<"=================================================="<<endl;
a.proses2();
a.input2();
a.proses3();
}
