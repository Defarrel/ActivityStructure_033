#include <iostream>
using namespace std;

struct Mahasiswa {
	string NIM;
	string Nama;
	string Alamat;
	int Umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukan NIM = ";
	cin >> mhs.NIM;
	cout << "Masukan Nama = ";
	cin >> mhs.Nama;
	cout << "Masukan Alamat = ";
	cin >> mhs.Alamat;
	cout << "Masukan umur = ";
	cin >> mhs.Umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.Nama;
	cout << "\nAlamat = " << mhs.Alamat;
	cout << "\nUmur = " << mhs.Umur;

}