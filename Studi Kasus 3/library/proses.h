using namespace std;

class Proses {
	public :
		void cetak(){
		}

		void getData(){
			ambil_data.open("../dummy/out_proses.txt");
			bool ayam_geprek = true;
      bool ayam_goreng = true;
      bool udang_goreng = true;
      bool cumi_goreng = true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_aymgpr;
					ayam_geprek = false;
				}
				else{
					ambil_data >> bnyk_aymgr;
          ambil_data >> bnyk_udggr;
          ambil_data >> bnyk_cmigr;
          ambil_data >> bnyk_aymbkr;
          ambil_data >> jarak;
        }
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymgpr * bnyk_aymgpr) + (hrg_aymgr * bnyk_aymgr)+(hrg_udggr * bnyk_udggr)+(hrg_cmigr * bnyk_cmigr)+(hrg_aymbkr * bnyk_aymbkr);
      float batas = 25000;
      float ongkir;
			float t2 = float(total);
			float diskon;

      if (jarak<3)
      {
        ongkir = 15000;
      }
      else (jarak>3);{
        ongkir = 25000;
      }
    if (total>=150000)
     {
       ongkir= ongkir-8000;
       diskon= t2*0.35;
     }
     else if(total>=50000)
     {
       ongkir=ongkir-5000;
       diskon=total*0.15;
     }
    else if(total>=25000)
    {
      ongkir=ongkir-3000;    
    }

			if (total >= batas){
				t2 = t2 + ongkir - diskon;
        }
      else{
        t2 = t2 + ongkir;
        }

			tulis_data.open("../pra_data/proses.txt");
			tulis_data << total << endl;
      tulis_data << ongkir << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymgpr << endl;
			tulis_data << bnyk_aymgr << endl;
      tulis_data << bnyk_udggr << endl;
      tulis_data << bnyk_cmigr << endl;
      tulis_data << bnyk_aymbkr;
			tulis_data.close();
		}
	private :
		ifstream ambil_data;
		ofstream tulis_data;
		int bnyk_aymgpr;
		int bnyk_aymgr;
    int bnyk_udggr;
    int bnyk_cmigr;
    int bnyk_aymbkr;
		int hrg_aymgpr = 21000;
		int hrg_aymgr = 17000;
    int hrg_udggr = 19000;
    int hrg_cmigr = 20000;
    int hrg_aymbkr = 25000;
    int jarak;
};