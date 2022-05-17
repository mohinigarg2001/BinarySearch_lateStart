#include<iostream>
using namespace std;


void printArray(int arr[], int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


void swapArray(int arr[], int n){
	
	for(int i =0;i<n;i=i+2){
		int temp = 0;
		if(i+1<n)
		    temp = arr[i];
			arr[i]= arr[i+1];
			arr[i+1]=temp;
	     	//swap(arr[i], arr[i+1]);
	}
}

int main(){
	int arr[6]={1,2,3,4,5,6};
    swapArray(arr, 6);
	printArray(arr,6);
}
