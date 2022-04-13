using namespace std;

class Output {
	public :
		void cetak(){
			cout << "Pengeluaran Dari Uang Saku \n";
			cout << "Yang dibel : \n";
			cout << "  Masukkan jumlah uang saku " << data_file[2] << endl;
			cout << " Masukkan jumlah jenis barang : " << data_file[3] << endl;
      cout << "  Nama Barang :" << data_file[4] << endl;
      cout << "  Jumlah Barang :" << data_file[5] << endl;
      cout << "  Harga Barang/pcs:" << data_file[6] << endl;
			cout << "Total pengeluaran Rp. " << data_file[0] << endl;
      cout << "Jumlah uang saat ini Rp. " << data_file[1] << endl;
			
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