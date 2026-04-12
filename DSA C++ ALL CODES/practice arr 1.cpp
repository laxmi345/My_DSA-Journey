#include<iostream>
using namespace std;

int main(){
	int arr[]={10,5,8,20,3,15};
	int n=6;
	int smallest =arr[0];
	int largest=arr[0];
	int smallest_index=0;
	int largest_index=0;
	
	for(int i=0;i<n;i++){
		if (arr[i]<smallest){
			smallest =arr[i];
			smallest_index=i;
		}
		if (arr[i]>largest){
			largest=arr[i];
			largest_index=i;
	   }
     }

		cout<<"smallest eleemnt"<<smallest<<endl;
		cout<<"smallest array index"<<smallest_index<<endl;
		cout<<"largest"<<largest<<endl;
		cout<<"largest  eleement"<<largest_index<<endl;
		
		return 0;
}


