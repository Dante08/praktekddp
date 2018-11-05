#include <iostream>

using namespace std;

int main(){
	char nama[3]={'E','K','O'}; // ini menyatakan untuk per kata atau perkarakter bahwa bisa disambung menjadi EKO pada line 11 di output nanti
	char nama2[4]="EKO";
	cout << "array perkarakter...";
	
		for(int i=0;i<=2;i++){
		cout<<nama[i];
	}	
	cout<<endl;
	cout<<"Array String ="<<nama2<<endl;
	
	return 0;
	
}
