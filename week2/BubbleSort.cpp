/*
NAME - KRISHANU RAI
SECTION - SE
BUBBLE SORTING IN AN ARRAY 
*/

#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubblesort(int a[], int n){
	for (int i = 0; i < n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
			}
		}
	}
}

void printarray(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i] << " ";
	}
	cout<<endl;
}

int main(){
	int a[] = {64, 34, 25, 12, 22, 11, 90};
	int n = sizeof(a)/sizeof(a[0]);

	bubblesort(a,n);

	cout<<"Sorted Array: ";
	printarray(a,n);


	return 0;
}
