using namespace std;

class Output {
	public :
		void cetak(){
			cout << "STRUK PEMBELIAN KELOMPOK JERUK \n";
			cout << "Yang dibeli : \n";
			cout << "  Ayam Geprek  -> " << data_file[4] << endl;
			cout << "  Ayam ayam goreng -> " << data_file[5] << endl;
      cout << "  Udang goreng   -> " << data_file[6] << endl;
      cout << "  cumi goreng   -> " << data_file[7] << endl;
      cout << "  Ayam Bakar   -> " << data_file[8] << endl;
			cout << "Harga total Rp. " << data_file[0] << endl;
      cout << "Ongkir Rp. " << data_file[1] << endl;
			cout << "Diskon      Rp. " << data_file[2] << endl;
			cout << "Harga Bayar Rp. " << data_file[3] << endl;
		}

		void getData(){
			ambil_data.open("../dummy/out_proses.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};