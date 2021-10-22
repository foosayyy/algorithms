#include <bits/stdc++.h>
using namespace std;

int JumpSearch(vector<int>a, int lenght, int key){
	int left = a[0];
	int right = sqrt(lenght);

	while(right < lenght && a[right] <= key){
		left = right;
		right += sqrt(lenght);

		if(right < lenght){
			right = lenght;
		}
	}

	for(int i = left; i < right; i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
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

	int key;
	cin>>key;
	int x;

	x = JumpSearch(a,a.size(),key);
	if(x == -1){
		cout<<"Not Found";
	}else{
		cout<<"Found at position "<<x;
	}


	return 0;
}
