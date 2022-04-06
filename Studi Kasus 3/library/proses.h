using namespace std;

class Proses {
	public :
		void cetak(){
			cout << "Anda sebagai Proses \n";
		}

		void getData(){
			ambil_data.open("api_data.txt");
			bool ayam_geprek = true;
      bool ayam_goreng = true;
      bool udang_goreng = true;
      bool cumi_goreng= true;
			while(!ambil_data.eof()){
				if (ayam_geprek){
					ambil_data >> bnyk_aymgpr;
					ayam_geprek = false;
				}
				else if(ayam_goreng){
					ambil_data >> bnyk_aymgr;
				}
        else if(udang_goreng){
          ambil_data >> bnyk_udggr;
        }
        else if(cumi_goreng){
          ambil_data >> bnyk_cmigr;
        }
        else{
          ambil_data >> bnyk_aymbkr;
        }
			}
			ambil_data.close();
		}

		void toFile(){
			int total = (hrg_aymgpr * bnyk_aymgpr) + (hrg_aymgr * bnyk_aymgr)+(hrg_udggr * bnyk_udggr)+(hrg_cmigr * bnyk_cmigr)+(hrg_aymbkr * bnyk_aymbkr);

     if (jarak<3)
     {
       
       cout<<"15000" <<endl;
     }
      else if (jarak>3)
      {
        cout<<"25000"<<endl;
      }
     else if (total>25000)
     {
       cout<<"3000"<<endl;
     }
     else if(total>50000)
     {
       diskon=total*0,15;
       cout<<"5000"<<endl;
     }
    else if(total>150000)
    {
      diskon=total*0,35;
      cout<<"8000"<<endl;
    }
      
			float batas = 50000;
		  float t2 = float(total);
			float diskon = t2 * 0.15;

			if (total >= batas)
				t2 = t2 - diskon;


			tulis_data.open("api_data.txt");
			tulis_data << total << endl;
			tulis_data << diskon << endl;
			tulis_data << t2 << endl;
			tulis_data << bnyk_aymgpr << endl;
			tulis_data << bnyk_aymgr << endl;
      tulis_data << bnyk_udggr <<endl;
      tulis_data << bnyk_cmigr <<endl;
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
    int hrg_aymbkr=25000;
};