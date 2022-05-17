#include<iostream>
using namespace std;

int last_occurence(int arr[], int n, int target){
	int s = 0;
	int e = n-1;
	
	int mid =s=(e-s)/2;
	int ans = -1;
	while(s<=e){
		
		
		if(arr[mid]== target){
			ans = mid;
			s = mid+1;	
		}
		else if(arr[mid]>target){
			e = mid -1;
		}
		else{
			s = mid +1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
	
} 

int first_occurence(int arr[], int n, int target){
	int s = 0;
	int e = n-1;
	
	int mid =s=(e-s)/2;
	int ans = -1;
	while(s<=e){
		
		
		if(arr[mid]== target){
			ans = mid;
			e = mid -1;	
		}
		else if (arr[mid]>target){
			e = mid -1;
		}
		else{
			s = mid +1;
		}
		mid = s+(e-s)/2;
	}
	return ans;
	
} 

int main(){
	int arr [11]={0,5,5,6,6,6,6,6,6,8,8};
	
	int first =first_occurence(arr, 11,8);
	cout<<"First Index is:"<<first<<endl;
	
	int last =last_occurence(arr, 11,8);
	cout<<"last Index is:"<<last<<endl;
	
	cout<<"Total Occurence :"<<last-first+1;

	
}
