#include <iostream>
using namespace std;

void minelement(int arr[10][10], int rows,int cols){
	int h=arr[0][0]; //min
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]<=h){
				h=arr[i][j];
				
			}
		}
	}
	cout<<"Min Element : "<<h<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]==h){
				cout<<"POS : "<<i<<" "<<j<<endl;
				
			}
		}
	}
}

void maxelement(int arr[10][10], int rows,int cols){
	int hi=arr[0][0]; //max
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]>hi){
				hi=arr[i][j];
				
			}
		}
	}
	cout<<"Max Element : "<<hi<<endl;
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(arr[i][j]==hi){
				cout<<"POS : "<<i<<" "<<j<<endl;
				
			}
		}
	}
}

void min_of_row(int arr[10][10],int rows,int cols){
	for(int k=0;k<cols;k++){
		int h=arr[k][0]; //min of each row
		for(int i=0;i<cols;i++){
			if(arr[k][i]<=h){
				h=arr[k][i];
			}
		}
		cout<<h<<endl;
		for(int i=0;i<cols;i++){
			if(arr[k][i]==h){
				cout<<"POS : "<<k<<" "<<i<<endl;
			}
		}		
	}
}
void max_of_col(int arr[10][10],int rows,int cols){
	for(int k=0;k<rows;k++){
		int h=arr[0][k]; //max of each col
		for(int i=0;i<rows;i++){
			if(arr[i][k]>h){
				h=arr[i][k];
			}
		}
		cout<<h<<endl;
		for(int i=0;i<rows;i++){
			if(arr[i][k]==h){
				cout<<"POS : "<<i<<" "<<k<<endl;
			}
		}		
	}
}

