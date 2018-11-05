#include <iostream>

using namespace std;

int main (){
	int i, j;
	int matrix_A[2][2], matrix_B[2][2], matrix_C[2][2];
	
	cout << "\nPenjumlahan matrix 2x2 \n\n";
	
	//Input Data matrix A
	cout << "\n inputlah matrix A";
	for (i = 0;i< 2; i++){
	for (j = 0;j<2;j++){
	cout << "masukan baris ke : " <<i+1<<"kolom ke : " <<j+1 <<" : ";
	cin >> matrix_A[i][j];
	}
	}
	
	//input tuk B
	cout << "\n inputlah matrix A";
		for (i = 0;i< 2; i++){
	for (j = 0;j<2;j++){
	cout << "masukan baris ke : " <<i+1<<"kolom ke : " <<j+1 <<" : ";
	cin >> matrix_B[i][j];
	}
	}
//output hasil penjumlahan
cout << "\n======hasil penjumlahan A+B=========";
cout << "\nMatrix A+Matrix B : "<<endl<<endl;
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		matrix_C[i][j] = matrix_A[i][j] + matrix_B[i][j];
		cout<<"\t"<<matrix_C[i][j];
	}
	cout <<endl;
}
return 0;
}
