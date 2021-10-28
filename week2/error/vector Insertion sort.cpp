/*
*******************************************
INPUT
7
64
34
25
12
22
11
90
*******************************************
OUTPUT
Sorted Array: 11 11 11 11 11 11 90
*******************************************
*/

#include<bits/stdc++.h>
using namespace std;

void insertionsort(vector<int>a, int n){
	for(int i=1; i<a.size()-1; i++){
		int value = a[i];
		int hole=i;
		while(hole > 0 && a[hole-1] > value){
			a[hole-1] = a[hole];
			hole = hole-1;
		}
		value = a[hole];
	}
}

void sorted(vector<int>a, int n){
	for(int i=0; i<a.size(); i++){
		cout<<a[i] << " ";
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	insertionsort(a,n);
	cout<<"Sorted Array: ";
	sorted(a,n);

	return 0;
}
