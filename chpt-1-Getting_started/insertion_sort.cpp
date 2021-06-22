#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n){
	for(int j = 1;j<n;j++){
		int key = arr[j];
		int i = j-1;
		while( i >= 0 && arr[i]>key){
			arr[i+1]=arr[i];
			i = i-1;
		}
		arr[i+1]=key;
	}
}

int main(){
 int arr[]={5,2,4,6,1,3};
 int n = sizeof(arr)/sizeof(arr[0]);
 insertionSort(arr,n);
 for(auto itr:arr){
 	cout<<itr<<endl;
 }
}