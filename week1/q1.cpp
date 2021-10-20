/*
3
5
12 23 36 39 41
41
8
21 39 40 45 51 54 68 72
69
10
101 246 438 561 796 896 899 4644 7999 8545
7999
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		int size;
		cin>>size;

		unordered_set<int> a;
		for(int j=0; j<size; j++){
			int x;
			cin>>x;
			a.insert(x);
		}

	int key;
	cin>>key;
	if(a.find(key)!=a.end()){
		auto it = a.find(key);
		cout<<"Found."<<*it;
	}else{
		cout<<"Not Found.";
	}
	
	cout<<endl;
	}


	return 0;
}
