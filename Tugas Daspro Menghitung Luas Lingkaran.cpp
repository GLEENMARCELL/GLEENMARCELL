#include <iostream>

using namespace std;

int main(){
cout << "Tugas Dasar Program : Gleen Marcell Pabbicara\n";
cout<< "NIM : F1G121020\n";
  cout<<"\n";
  float l, r;
  const float phi = 3.14;

  cout << "=================================\n";
  cout << "Program Menghitung Luas Lingkaran\n";
  cout << "=================================\n";

  cout << "Masukkan panjang jari-jari lingkaran: ";
  cin >> r;

  l = phi*r*r;

  cout << "Luas Lingkaran adalah "<< l << endl;

  return 0;
}