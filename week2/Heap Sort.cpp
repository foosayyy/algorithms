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

void heapify(int a[], int n, int i){
   int largest =i;
   int l = 2 *i +1;
   int r = 2 *i +2;

   if(l < n && a[l] > a[largest]){
      largest = l;
   }

   if(r <n && a[r] > a[largest]){
      largest = r;
   }

   if(largest != i){
      swap(a[i],a[largest]);
      heapify(a,n,largest);
   }
}

void heapsort(int a[], int n){
   for(int i=n/2 -1; i >= n; i--){
      heapify(a,n,i);
   }
   for(int i = n-1; i >=0; i--){
      swap(a[0], a[i]);
      heapify(a,i,0);
   }
}
void display(int a[], int size){
   for(int i=0; i<size; i++){
      cout << a[i] << " ";
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
   heapsort(a,n);
   cout<<"Sorted Array is :";
   display(a,n);


   return 0;
}
