/*
NAME - KRISHANU RAI
SECTION - SE
**********************************************************
INPUT
10
1
3
5
6
7
8
9
10
11
14
14
**********************************************************
OUTPUT
Found at index 9
**********************************************************
*/
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int start, int end, int key){
	if(start <= end){
		int mid = start + (end - start)/2;
		if(a[mid]==key){
			return mid;
		}
		if(a[mid]>key)
			return binarySearch(a,start,mid-1,key);
			return binarySearch(a,mid+1,end,key);
	}
	return -1;
}

int exponentialSearch(int a[], int start, int end, int key){
	if((end-start) == 0){
		return -1;
	}
	int i = 1;
	while(1 < (end-start)){
		if(a[i] < key){
			i *= 2;
		}
		else
			break;
	}

	return binarySearch(a,i/2, i, key);
}


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int searchkey;
	cin>>searchkey;

	int loc;
	if((loc = exponentialSearch(a,0,n,searchkey)) >= 0){
		cout<<"Found at index "<<loc<<endl;
	}
	else
		cout<<"Not Found";


	return 0;
}
