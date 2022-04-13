using namespace std;

class Input {
	public :
		void cetak(){
			cout<<"Masukkan jumlah uang saku :";
    cin>>jumlah_uangsaku;
    
    cout<<"Masukkan jumlah jenis barang : ";
    cin>> jumlah_beli; 
    cin.ignore();
    cout<<"\nMasukan Barang \n\n";
    cout<<"Nama Barang : ";
    getline(cin,nama_barang[i]); 

    cout<<"Jumlah Barang : ";
    cin>>jumlah[i]; 

    cout<<"Harga Barang/pcs: ";
    cin>>harga[i]; 
      
		}

		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << jumlah_uangsaku << endl;
			tulis_data << jumlah_beli <<endl;
      tulis_data << nama_barang << endl;
      tulis_data << jumlah_barang << endl;
      tulis_data << harga;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int i,jumlah_uangsaku, jumlah_beli,jumlah[100],
    harga[100],total[50],jumlah_barang;
    string nama_barang[100];
};