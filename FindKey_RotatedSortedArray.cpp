// i/p is sorted rotated array

#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
	int s= 0;
	int e = n-1;
	int mid = s+(e-s)/2;
	
	while(s<e){
		if(arr[mid]>=arr[0]){
			s = mid +1;
		}
		else{
			e = mid;
		}
		mid =s+(e-s)/2;
	}
	return s;
}
int binarySearch(int arr[], int n, int key){
	int s  = 0;
	int e = n-1;
	
	int  mid = s+(e-s)/2;
	while(s<=e){
		
		if(arr[mid]==key){
			return mid;
		}
		
		else if(arr[mid]< key){
			s = mid+1;
			
		}
		else{
			e = mid -1;
		}
		 mid =  s+(e-s)/2;
	}
	return -1;
}

int main(){
	int arr[7]={3,8,10,17,20,1,2};
	
	int key = 2;
	int pivot = getPivot(arr, 7);
	
	if(key>=arr[pivot] && key<=arr[6]){
		return binarySearch(arr, 7, key);
	}
	else{
		return binarySearch(arr,  pivot-1, key);
	}
	
}
