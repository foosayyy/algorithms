/*
NAME - KRISHANU RAI
SECTION - SE
WEEK 1| QUESTION 1| ARRAY,FUNCTION
***************************
INPUT
3
8
34 35 65 31 25 89 64 30
89
5
977 354 244 546 355
244
6
23 64 13 67 43 56
63
***************************
OUTPUT
Present 6
Present 3
Not Present 6
****************************


*/
#include <bits/stdc++.h>
using namespace std;

void LinearSearch(int a[],int size, int key){
	int temp =-1;
	for(int i=0; i<size; i++){
		if(a[i]==key){
			cout<<"Present "<<i+1<<endl;
			temp=0;
			break;
		}
	}

	if(temp == -1){
		cout << "Not Present "<<size<<endl;
	}
}


int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int size;
		cin>>size;
		int a[size];
		for(int j=0;j<size;j++){
			cin>>a[j];
		}

		int key;
		cin>>key;

		LinearSearch(a,size,key);
	}

	return 0;
}
