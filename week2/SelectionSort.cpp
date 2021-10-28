/*
NAME - KRISHANU RAI
SECTION - SE
SELECTION SORT
***********************************
INPUT
7
64
34
25
12
22
11
90
***********************************
OUTPUT
Sorted Array: 11 12 22 25 34 64 90 
***********************************
*/
#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionsort(vector<int> &a, int n){
	for(int i=0; i<a.size()-1; i++){
		int min_indx = i;
		for(int j = i+1; j<a.size(); j++){
			if(a[j] < a[min_indx]){
				swap(a[min_indx],a[j]);
			}
		}
	}
}

void sorted(vector<int>&a, int n){
	for(int i=0; i<a.size(); i++){
		cout<< a[i] << " " ;
	}
	cout<< endl;
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
	selectionsort(a,n);
	cout<<"Sorted Array: ";
	sorted(a,n);

	return 0;
}
