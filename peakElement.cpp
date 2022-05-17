#include<iostream>
using namespace std;

int getpeakElement(int arr[], int n){
	int s = 0;
	int e = n-1;
	
	int mid = s+(e-s)/2;
	
	while(s<e){
		if(arr[mid]<arr[mid+1]){
			s = mid+1;
		}
		else{
			e = mid;
			
		}
		mid = s+(e-s)/2;
	}
	return arr[s];
}
int main(){
	int arr[5]={3,4,5,6,1};

	cout<<"Peak element is "<<getpeakElement(arr, 5);
}
