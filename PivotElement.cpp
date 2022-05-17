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

int main(){
	int arr[7]={3,8,10,17,20,1,2};
	
	//index of smallest
	cout<<"Pivot element is " << getPivot(arr,7)<<endl;
}
