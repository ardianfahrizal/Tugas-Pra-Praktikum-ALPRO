using namespace std;

class Proses {
	public :
		void cetak(){
      cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("../dummy/out_proses.txt");
      bool jumlah_uangsaku = true;
      }
    
			
    void toFile(){
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
    

			tulis_data.open("../pra_data/proses.txt");
      tulis_data << jumlah_uangsaku << endl;
      tulis_data << jumlah_beli << endl;
      tulis_data << nama_barang << endl;
      tulis_data << jumlah << endl;
      tulis_data << harga << endl;

			tulis_data.close();
		}
	private :
		ifstream ambil_data;
		ofstream tulis_data;
    int jumlah_uangsaku;
		int jumlah_beli;
		int jumlah[100];
    int harga[100];
    int total[50];
    string nama_barang[100];
    int kembali;
		int sisa;
		int bulan;
    float total_semua;
};