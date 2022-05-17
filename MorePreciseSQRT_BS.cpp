#include<iostream>
using namespace std;

int sqrtOfNumber(int n){
	int s =0;
	int e = n;
	long long int mid =  s+(e-s)/2;
	int ans=  -1;
	while(s<=e){
		long long int square = mid*mid;
		if (square== n){
			return mid;
		}
		else if(square> n){
			e = mid-1;
		}
		else{
			ans = mid;
			s=mid +1;
		}
		mid =  s+(e-s)/2;
	}
	return ans;
}

double morePrecision(int n,  int precision, int tempSol){
	
	double factor = 1;
	double ans = tempSol;
	
	for(int i =0;i<precision;i++){
		factor = factor/10;
		
		for(double j = ans ; j*j<n; j = j+factor){
			ans = j;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter any number: ";
	cin>>n;
	int tempSol = sqrtOfNumber(n);
	cout<<"Square of n : "<<tempSol<<endl;
	
	cout<<"Ans is : "<<morePrecision(n, 3, tempSol)<<endl;
}
