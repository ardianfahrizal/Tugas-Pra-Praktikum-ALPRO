using namespace std;

class Output {

public:
	void cetak(){
		cout<<"SAYA SEORANG OUTPUT\n";
		cout<<"Nama : "            <<data_file[0]<<endl;
		cout<<"NIM : "             <<data_file[1]<<endl;
		cout<<"Daftar matkul : "   <<data_file[2]<<endl;
		cout<<"Total SKS : "       <<data_file[3]<<endl;
		cout<<"Total pembayaran : "<<data_file[4]<<endl;
		cout<<"Jumlah SKS : "      <<data_file[5]<<endl;
		cout<<"Matkul : "          <<data_file[6]<<endl;
	}
	void getData(){
		ambil_data.open("../dummy/out_proses.txt");
			while (!ambil_data.eof()){
				ambil_data>> data_file[index];
				index += 1;
			}
		ambil_data.close();
	}

private:
	ifstream ambil_data;
	string data_file[40];
	int index=0;
};