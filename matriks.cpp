#include <iostream>
using namespace std;
int main()
{

     // Deklarasi varibel
     int A[10][10], B[10][10], C[10][10], D[10][10];
     cout << "\nRobby Izhar Ramadhana";
     cout << "\n17111255";
     cout << endl
          << endl;

     A[0][0] = 2;
     A[0][1] = 3;
     A[0][2] = 6;
     A[1][0] = 4;
     A[1][1] = 7;
     A[1][2] = 8;

     // Inisialisasi matriks B
     B[0][0] = 3;
     B[0][1] = 5;
     B[1][0] = 2;
     B[1][1] = 4;
     B[2][0] = 8;
     B[2][1] = 6;

     // Proses perkalian matriks A dan B
     C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0];
     C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1];
     C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0];
     C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1];

     // Menampilkan matriks A
     cout << "\nMatriks A :\n"
          << endl;
     cout << A[0][0] << "\t" << A[0][1] << "\t" << A[0][2] << endl;
     cout << A[1][0] << "\t" << A[1][1] << "\t" << A[1][2] << endl;

     // Menampilkan matriks B
     cout << "\nMatriks B :\n"
          << endl;
     cout << B[0][0] << "\t" << B[0][1] << endl;
     cout << B[1][0] << "\t" << B[1][1] << endl;
     cout << B[2][0] << "\t" << B[2][1] << endl;

     // menampilkan hasil kali matriks A dan B
     cout << "\nHasil Matriks A x Matriks B :\n"
          << endl;
     cout << C[0][0] << "\t" << C[0][1] << endl;
     cout << C[1][0] << "\t" << C[1][1] << endl;
     cout << endl;

     return 0;
}
