#include <bits/stdc++.h>
using namespace std;

void display(vector<int> a, int size){
	for(int i=0; i<size; i++){
		cout<< a[i] << " " ;
	}
	cout<< endl;
}

void merge(vector<int> a, int l, int m, int r){
	int i,j,k,nl,nr;
	nl=m-l+1;
	nr=r-m;
	vector <int> la[nl];
	vector <int> ra[nr];
	for(i=0; i<nl; i++){
		la[nl] = a[l+i];
	}
	for(j=0; j<nr; j++){
		ra[nr] = a[m+1+i];
	}
	i=0;j=0;k=l;

	while(i < nl && j < nr){
		if(la[i] <= ra[j]){
			a[k] = la[i];
			i++;
		}else{
			a[k] = ra[j];
			j++;
		}
		k++;
	}
	while(i < nl){
		a[k] = la[i];
		i++; k++;
	}
	while(j < nr){
		a[k] = ra[j];
		j++; k++;
	}
}

void mergesort(vector<int> a, int l, int r){
	int m;
	if(l < r){
		m = l+(r-l)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}

int main(){
	int n;
	cin>>n;
	vector<int> a;
	for(int i =0 ;i<n; i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	mergesort(a,0,n-1);
	cout<<"Sorted Array: ";
	display(a,n);


	return 0;
}

/*
C:\Users\dankr\Desktop\sublime\file.cpp:27:15: error: cannot convert 'std::vector<int>' to '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} in assignment
   27 |    a[k] = la[i];
      |           ~~~~^
      |               |
      |               std::vector<int>
C:\Users\dankr\Desktop\sublime\file.cpp:30:15: error: cannot convert 'std::vector<int>' to '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} in assignment
   30 |    a[k] = ra[j];
      |           ~~~~^
      |               |
      |               std::vector<int>
C:\Users\dankr\Desktop\sublime\file.cpp:36:14: error: cannot convert 'std::vector<int>' to '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} in assignment
   36 |   a[k] = la[i];
      |          ~~~~^
      |              |
      |              std::vector<int>
C:\Users\dankr\Desktop\sublime\file.cpp:40:14: error: cannot convert 'std::vector<int>' to '__gnu_cxx::__alloc_traits<std::allocator<int>, int>::value_type' {aka 'int'} in assignment
   40 |   a[k] = ra[j];
      |          ~~~~^
      |              |
      |              std::vector<int>
[Finished in 1.2s]
*/
