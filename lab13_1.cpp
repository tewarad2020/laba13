#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
    for (int j=1;j<N;j++) {
		for (int  i=j;i>0;i--) {
			if (d[i] > d[i-1]) {
			    double sw = d[i];
			    d[i] = d[i-1];
			    d[i-1] = sw;
			}
		}
		cout << "Pass " << j << ":"; 
		for (int i=0;i<N;i++) cout << d[i] << " ";
		cout << endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}