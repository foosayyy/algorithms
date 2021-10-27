/*
NAME - KRISHANU RAI
SECTION - SE
BUBBLE SORTING IN A VECTOR
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

void bubblesort(vector<int>&a, int n){
	for (int i = 0; i < n; i++){
		for(int j=0; j<n-i-1; j++){
			if(a[j] > a[j+1]){
				swap(&a[j], &a[j+1]);
			}
		}
	}
}

void printarray(vector<int>&a, int n){
	for(int i=0; i<n; i++){
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

	bubblesort(a,n);

	cout<<"Sorted Array: ";
	printarray(a,n);


	return 0;
}
