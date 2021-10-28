/*
INPUT 
7
64
34
25
12
22
11
90
****************************************
OUTPUT
Sorted Array: 11 12 22 25 34 64 90 
****************************************
*/

#include<bits/stdc++.h>
using namespace std;

void insertionsort(int a[], int n){
	for(int i=1; i<n; i++){
		int value = a[i];
		int hole = i-1;
		while(hole >= 0 && a[hole] >= value){
			a[hole+1] = a[hole];
			hole = hole -1;
		}
		a[hole+1] = value;
	}
	cout<<"Sorted Array:";
	for(int i=0; i<n; i++){
		cout<< a[i] << " ";
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>> a[i];
	}
	insertionsort(a,n);

	return 0;
}
