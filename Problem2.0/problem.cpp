#include <iostream>
#include "function.h"
using namespace std;

int main(){
	int arr[10][10];
	int rows,cols,n;
	
	cout<<"Enter rows and cols of matrix : ";
	cin>>rows>>cols;
	cout<<"Enter Elements of Matrix : "<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"\nOutput"<<endl; //output
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	minelement(arr,rows,cols);
	cout<<"\n";
	maxelement(arr,rows,cols);
	cout<<"\n";
	cout<<"Index and Value of minimum element of each rows : \n"<<endl;
	min_of_row(arr,rows,cols);
	cout<<"\n";
	cout<<"Index and Value of maximum element of each cols : \n"<<endl;
	max_of_col(arr,rows,cols);
	
	
	return 0;
}
