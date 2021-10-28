#include<bits/stdc++.h>
using namespace std;

void insertionsort(int a[], int n){
	for(int i=1; i<n-1; i++){
		int value = a[i];
		int hole=i;
		while(hole > 0 && a[hole-1] > value){
			a[hole-1] = a[hole];
			hole = hole-1;
		}
		value = a[hole];
	}
}

void sorted(int a[], int n){
	for(int i=0; i<n; i++){
		cout<<a[i] << " ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	insertionsort(a,n);
	cout<<"Sorted Array: ";
	sorted(a,n);

	return 0;
}
