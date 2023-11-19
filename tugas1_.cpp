 #include <iostream>

using namespace std;

int function()
{
    int batas;
    int jumlahGanjil = 0;
    int jumlahGenap = 0;
    int jumlahPrima = 0;

    cout << "Program Bilangan Ganjil, Genap, dan Prima " << endl;

    cout << "Masukkan batas akhir: ";
    cin >> batas;	// Input batas akhir yang diinginkan

// Bilangan Ganjil

    cout << "Bilangan Ganjil: ";
    // Output bilangan ganjil
    // Mencari bilangan ganjil

    for (int i = 0; i <= batas; i++){
        if (i % 2 != 0){
            cout << i << " "; // Menampilkan bilangan ganjil
            jumlahGanjil += i;   // Operasi penjumlahan bilangan ganjil
        }
    }

    cout << endl;

// Bilangan Genap

    cout << "Bilangan Genap: ";
    for (int i = 0; i <= batas; i += 2){
        cout << i << " ";
        jumlahGenap += i;
    }
    cout << endl;

// Bilangan Prima

    cout << "Bilangan Prima: ";
    for (int i = 2; i <= batas; i++){
        int j;
        for (j = 2; j * j <= i && i % j != 0; j++){
        }
        if (j * j > i){
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;

// Jumlah dari masing-masing bilangan

    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah bilangan Prima: " << jumlahPrima << endl;


// Faktor dari masing-masing bilangan

cout << "Faktor-faktor dari jumlah prima tersebut adalah: ";
	for (int r = 1; r <= jumlahPrima; r++){
		if (jumlahPrima % r == 0){
			 cout << r << " ";
			 }
		}
	cout<< endl;
	cout << "Faktor-faktor dari jumlah ganjil tersebut adalah: ";
	for (int s = 1; s <= jumlahGanjil; s++){
		if (jumlahGanjil % s == 0){
			 cout << s << " ";
			 }
		}
	cout<< endl;
	cout << "Faktor-faktor dari jumlah genap tersebut adalah: ";
	for (int t = 1; t <= jumlahGenap; t++){
		if (jumlahGenap % t == 0){
			 cout << t << " ";
			 }
		}
		cout<< endl;
        return 0;
}

int main() {
    function();
}
 27 changes: 27 additions & 0 deletions27
Nomor2.cpp
@@ -0,0 +1,27 @@
#include <iostream>

using namespace std;
int function(){
	cout << "MEMBUAT PIRAMIDA BINTANG"<<endl;
	int n;

	cout << "    Masukkan tinggi piramida: "; cin >> n;

	char currentChar = '*';
	for (int i = 0; i <= n; i++){
		for (int j = n; j > i; j--){
			cout << " ";
		}
	for (int k = 1; k <= i; k++){
		cout << currentChar << " ";
		}

		cout << endl;
		}

return 0;
}

int main() {
    function();
}
