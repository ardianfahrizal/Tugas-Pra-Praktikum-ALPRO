#include <iostream>
using namespace std;

class Dosen
{
public:
    void input();
    void proses();
    void output();

private:
    string nama_dosen;
    string nama_matkul;
    int nilai[100];
    int x;
    int nilai_min;
    int nilai_max;
    float nilai_rata;
};

void Dosen::input()
{
    cout << "Masukkan nama dosen : ";
    cin >> nama_dosen;
    cout << " Masukkan nama matkul : ";
    cin >> nama_matkul;
    cout << "Masukkan jumlah nilai : ";
    cin >> x;
}
void Dosen::proses()
{
    for (int i = 0; i < x; i++)
    {
        cout << "Nilai ke - " << i + 1 << " = ";
        cin >> nilai[i];
    }
    for (int i = 0; i < x; i++)
    {
        if (nilai[i] < nilai_min)
        {
            nilai_min = nilai[i];
        }
        if (nilai[i] > nilai_max)
        {
            nilai_max = nilai[i];
        }
        for (int i = 0; i < x; i++)
        {
            nilai_rata = nilai_rata + nilai[i];
        }
        nilai_rata = nilai_rata / x;
    }
}
void Dosen::output()
{
    cout << "Nama Dosen : " << nama_dosen << endl;
    cout << "Matakuliah : " << nama_matkul << endl;
    cout << "Daftar nilai : ";
    for (int i = 0; i < x; i++)
        cout << nilai[i] << endl;
    cout << "Nilai Min : " << nilai_min << endl;
    cout << "Nilai Max : " << nilai_max << endl;
    cout << "Nilai Rata-rata : " << nilai_rata << endl;
}

int main()
{
    Dosen a;
    a.input();
    a.proses();
    a.output();
}
