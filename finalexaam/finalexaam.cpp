#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = ;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa(
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
);
//isi disini
void tampilkanSemuaMahasiswa();
//isi disini
void algorithmacariMahasiswaByNIM();
//isi disini
void algorithmaSortByTahunMasuk();
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);


	//2.

	//3.Stack adalah struktur data linier yang beroperasi berdasarkan prinsip LIFO (Last-In, First-Out)
	///Queue adalah struktur data linier yang beroperasi berdasarkan prinsip FIFO (First-In, First-Out), 

	//4. Stack digunakan dalam pemanggilan rekursif untuk
	//melacak pemanggilan fungsi dan memori yang dialokasikan untuk setiap pemanggilan.
		//Implementasi stack dapat dilakukan menggunakan struktur data seperti array atau linked list.Dalam
		//implementasi menggunakan array, perhatikan bahwa stack memiliki ukuran yang tetap, sementara dalam
		//implementasi menggunakan linked list, ukuran stack dapat berubah secara dinamis.
		//Stack adalah struktur data yang sederhana tetapi sangat berguna dalam pemrograman, khususnya dalam
		//pemecahan masalah yang membutuhkan urutan akses atau pemrosesan data berdasarkan prinsip LIFO.

	//5. A. 50

	// B.In = 1 5 8 12 15 10 20 22 25 28 30 36 38 40 45 48 50 = false
	//Preorder = 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50 = true
		//Post = 1 8 5 15 12 10 22 20 28 38 45 50 48 30 40 36 25 =true