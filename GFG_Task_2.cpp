#include<bits/stdc++.h>
using namespace std;

int arr[6]={1,2,3,4,5,6};

void append(int index, int arr[6], int num){
	for(int i=6; i>index;i=i-1){
	 arr[i]=arr[i-1];
	 }
	arr[index]=num;
	for(int i=0; i<=6; i++){
	 cout << arr[i]<<"\n";
	 }
	return;
}
int main(){
	int num, index;
	cout<<"Enter index:";
	cin>>index;
    cout<< "Enter a number to append at index ("<<index<<") :- ";
	cin>>num;
    append(index,arr,num);
	return 0;

}
