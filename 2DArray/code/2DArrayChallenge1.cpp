// Spiral order matrix traversal
#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	int row_start=0,column_end=m-1,row_end=n-1,column_start=0;
	
	while(row_start<=row_end && column_start<=column_end){
		int col,row;
		for(row=row_start;col<column_end;col++){
			
			cout<<arr[row][col]<<" ";
			
		}
		row_start++;
		for(col=column_end;row<row_end;row++){
			
			cout<<arr[row][col]<<" ";
			
		}
		column_end--;
		for(row=row_end;col>=column_start;col--){
			
			cout<<arr[row][col]<<" ";
			
		}
		row_end--;
		for(row=column_start;col>=row_start;row--){
			
			cout<<arr[row][col]<<" ";
			
		}
		column_start++;
		
		
		
		
	}
	return 0;
}