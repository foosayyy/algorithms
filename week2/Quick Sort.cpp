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

void display(int a[], int size){
   for(int i=0; i<size; i++){
      cout<<a[i] <<" ";
   }
   cout<<endl;
}

void swap(int *xp, int *yp){
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

int partition(int a[], int l, int r){
   int pivot = a[r];
   int i = l-1;
   for(int j= l; j<=r-1; j++){
      if(a[j] < pivot){
         i++;
         swap(&a[i], &a[j]);
      }
   }
   swap(&a[i+1], &a[r]);
   return (i+1);
}

void quicksort(int a[], int low, int high){
   if(low < high){
      int pi = partition(a,low,high);
      quicksort(a, low, pi-1);
      quicksort(a, pi+1, high);

   }
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0; i<n; i++){
      cin>> a[i];
   }
   quicksort(a,0,n-1);
   cout<<"Sorted Array: ";
   display(a,n);


   return 0;
}
