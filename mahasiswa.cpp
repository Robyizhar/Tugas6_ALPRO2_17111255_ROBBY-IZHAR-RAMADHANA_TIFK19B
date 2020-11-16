#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nama[5];
    int nilai_angka[5];
    string nilai_huruf;
    string kelas[5];

    cout << "Masukan Nama Mahasiswa : " << endl
         << endl;
    int x = 1;
    for (int i = 0; i < 5; i++)
    {
        cout << "\nMasukan Nama ke-" << x << "\n";
        cin >> nama[i];

        cout << "\nMasukan Kelas : "
             << "\n";
        cin >> kelas[i];

        cout << "\nMasukan Nilai : "
             << "\n";
        cin >> nilai_angka[i];

        x++;
    }

    cout << "\n";
    cout << "DATA MAHASISWA" << endl;

    int y = 1;
    for (int i = 0; i < 5; i++)
    {
        if (nilai_angka[i] >= 75)
        {
            nilai_huruf = "A";
        }
        else if (nilai_angka[i] >= 60 && nilai_angka[i] < 75)
        {
            nilai_huruf = "B";
        }
        else if (nilai_angka[i] >= 40 && nilai_angka[i] < 60)
        {
            nilai_huruf = "C";
        }
        else if (nilai_angka[i] >= 20 && nilai_angka[i] < 40)
        {
            nilai_huruf = "D";
        }
        else if (nilai_angka[i] >= 0 && nilai_angka[i] < 20)
        {
            nilai_huruf = "E";
        }

        cout << "No." << y << "   Nama = " << nama[i] << "   Kelas = " << kelas[i] << "   Nilai Angka = " << nilai_angka[i] << "   Nilai Huruf = " << nilai_huruf << endl;
        cout << "\n";
        y++;
    }
}