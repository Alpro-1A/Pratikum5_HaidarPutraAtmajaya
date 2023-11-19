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
