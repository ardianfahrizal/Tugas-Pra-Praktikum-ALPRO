#include <iostream>
using namespace std;

class Atur{
	public:
		void bubblesort(int arr[], int n);
		void input();
		void proses();
	private:
		int n,baris,kolom;
		int data [20];
		int output[40][40];
		int d=0;	
		int temp;
		int data2 [20];
};

void Atur::bubblesort(int arr[], int n){
  int i, j, tmp;
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

void Atur::input(){
	cout<<"Masukkan banyak nya buku : "; //msukkan 24
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Masukkan nomor dari indentitas buku ke-"<<i+1<<" : ";
		cin>>data[i];
	}
		cout<<"Hasil array 1 dimensi (sebelum diurutkan)"<<endl;
		for(int j=0;j<n;j++){
			cout<<data[j]<<" ";
		}
		cout<<"\n\nPengurutan dengan bubble sort"<<endl;
		bubblesort(data, n);
  		cout << "Hasil pengurutan sebagai berikut:\n";
  	for (int i=0;i<n;i++){
    	cout << data[i] <<" ";
 	}
  		cout << "\n";
		cout<<"\n\nMasukkan banyak baris : ";
		cin>>baris;
		cout<<"Masukkan banyak kolom : ";
		cin>>kolom;
	for(int k=0;k<baris;k++){
		for(int l=0;l<kolom;l++){
			output[k][l]=data[d];
			d++;
		}
	}
}

void Atur::proses(){
	cout<<"\n\nMenampilkan array 1 dimensi (yang sudah diurutkan) : "<<endl;
	for(int j=0;j<n;j++){
		cout<<data[j]<<" ";
	}
		cout<<endl;
		cout<<"\n\nMenampilkan array 2 dimensi : "<<endl;
	for(int k=0;k<baris;k++){
		for(int l=0;l<kolom;l++){
			cout<<output[k][l]<<"  ";
		}
		cout<<endl;
	}
}


main (){
	Atur a;
	a.input();
	a.proses();
}
