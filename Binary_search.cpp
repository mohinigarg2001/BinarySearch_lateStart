// Binary search
// element should be in monotonic function
// sorted array

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int key){
	
	int s= 0;
	int e = n-1;
	int mid = s+(e-s)/2;
	
	while(s<= e){
		if(arr[mid]== key){
			return mid;
		}
		else if(arr[mid]>key){
			e = mid-1;
			
		}
		else{
			s = mid +1;
		}
		mid = s +(e-s)/2;
		
	}
	return -1;
	
}

int main(){
	
	int arr[6]={5,11,13,17,19,27};
	cout<<binarySearch(arr, 6, 17)<<endl;
	
	int arr2[7]={1,23,33,45,67,89,101};
	int ans  = binarySearch(arr2, 7, 33);
	cout<<ans;
	
}
