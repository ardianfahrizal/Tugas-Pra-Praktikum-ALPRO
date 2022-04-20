using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool jumlahsks = true;
			while(!ambil_data.eof()){
				if (jumlahsks){
					ambil_data >> jumlah_sks;
					jumlahsks = false;
				}
				else{
					ambil_data >> matkul;
				}
			}
			ambil_data.close();
		}

		void toFile(){
			int total =total_pembayaran * 0.1;
			float batas = 700000;
			float t2 = float(total);
			float diskon = t2 * 0.5;

			if (total >= batas)
				t2 = t2 - diskon;


			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << jumlah_sks << endl;
			tulis_data << matkul;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int jumlah_sks;
    int total_pembayaran;
		string matkul;
};