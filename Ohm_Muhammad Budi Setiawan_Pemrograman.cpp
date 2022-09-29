//Program Menganalisis pengeluaran mingguan

#include <iostream>
using namespace std;
#define BINOMINV 6

int main(){
	//Decrlare
	double senin1, selasa1, rabu1, kamis1, jumat1, sabtu1, minggu1;
	double senin2, selasa2, rabu2, kamis2, jumat2, sabtu2, minggu2;
	int negatif = 0;
	int positif = 0;
	int n = 0;
	int c;
	
	//Input
	cout << "Pengeluaran Minggu lalu\n ===================\n";
	cout <<" Masukkan pengeluaran hari Senin\t:";
	cin >> senin1;
	cout <<" Masukkan pengeluaran hari Selasa\t:";
	cin >> selasa1;
	cout <<" Masukkan pengeluaran hari Rabu \t:";
	cin >> rabu1;
	cout <<" Masukkan pengeluaran hari Kamis\t:";
	cin >> kamis1;
	cout <<" Masukkan pengeluaran hari Jumat\t:";
	cin >> jumat1;
	cout <<" Masukkan pengeluaran hari Sabtu\t:";
	cin >> sabtu1;
	cout <<" Masukkan pengeluaran hari Minggu\t:";
	cin >> minggu1;
	
	cout << "\nPengeluaran Minggu ini\n ===================\n";
	cout <<" Masukkan pengeluaran hari Senin\t:";
	cin >> senin2;
	cout <<" Masukkan pengeluaran hari Selasa\t:";
	cin >> selasa2;
	cout <<" Masukkan pengeluaran hari Rabu \t:";
	cin >> rabu2;
	cout <<" Masukkan pengeluaran hari Kamis\t:";
	cin >> kamis2;
	cout <<" Masukkan pengeluaran hari Jumat\t:";
	cin >> jumat2;
	cout <<" Masukkan pengeluaran hari Sabtu\t:";
	cin >> sabtu2;
	cout <<" Masukkan pengeluaran hari Minggu\t:";
	cin >> minggu2;
	
	//Uji Cox Stuart
	if(senin1 < senin2) positif++;
	if(senin1 > senin2) negatif++;
	if(selasa1 < selasa2) positif++;
	if(selasa1 > selasa2) negatif++;
	if(rabu1 < rabu2) positif++;
	if(rabu1 > rabu2) negatif++;
	if(kamis1 < kamis2) positif++;
	if(kamis1 > kamis2) negatif++;
	if(jumat1 < jumat2) positif++;
	if(jumat1 > jumat2) negatif++;
	if(sabtu1 < sabtu2) positif++;
	if(sabtu1 > sabtu2) negatif++;
	if(minggu1 < minggu2) positif++;
	if(minggu1 > minggu2) negatif++;
	
	if(positif>negatif){
		if(positif>=BINOMINV) cout << "\nPengeluaran mingguan mengalami kenaikan yang signifikan";
		else cout << "\nPengeluaran mingguan stabil";
	}
	if(positif<negatif){
		if(negatif>=BINOMINV) cout << "\nPengeluaran mingguan mengalami penurunan yang signifikan";
		else cout << "\nPengeluaran mingguan stabil";
	}
	
	return 0;
}
