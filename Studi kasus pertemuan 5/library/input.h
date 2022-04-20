using namespace std;

class Input {
	public :
		void cetak(){
			cout << "Aplikasi Pembayaran SKS \n";
			cout << "Daftar Matakuliah : \n";
			cout << "1) Alpro \n";
			cout << "2) PWeb \n";
      cout << "3) Matdis \n";
			cout << "Masukkan jumlah sks : "; 
      cin >> jumlah_sks;
			cout << "Masukkan Matakuliah  -> "; 
      cin >> matkul;
      }

		void toFile(){
			tulis_data.open("api_data.txt");
			tulis_data << jumlah_sks << endl;
			tulis_data << matkul;
			tulis_data.close();
		}

	private :
		ofstream tulis_data;
		int jumlah_sks;
    string matkul;
};