#include<iostream>
using namespace std;

int main(){
	int x[] = {5, 2, 1, 4};
	int y = sizeof(x)/sizeof(*x);
	int temp;
	
	cout << "x : ";
	for(int i = 0; i < y; i++){
		cout << x[i] << " ";
	}
	
	cout << endl;
	for(int j = 0; j < y; j++){
		int count = 0;
		for(int k = 0; k < y-1; k++){
			if(x[k] > x[k+1]){
				temp = x[k];
				x[k] = x[k+1];
				x[k+1] = temp;
				count++;
			}
		}
		if (count == 0){
			break;			// untuk berhenti jika array sudah terurut
		}
		cout << endl;
		cout << "tahap " << j + 1 <<" : ";
		for(int z = 0; z < y; z++){
			cout << x[z] << " ";
		}
	}
	
	cout << "\n\nHasil akhir : ";
	for(int a = 0; a < y; a++){
		cout << x[a] <<" ";
	}
	return 0;
}
