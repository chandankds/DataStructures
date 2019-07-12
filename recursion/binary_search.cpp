#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binaryHelper(int key, int* arr, int l, int r){
	cout << "Value of right is " << r ;
	cout << "  Value of left is " << l << endl;
	if(l>r){
		return -1;
	}
	int mid = (l+r)/2;
	if(key == arr[mid]){
		return mid;
	}
	if(key < arr[mid]){
		int ans;
		ans = binaryHelper(key,arr,l,mid-1);
		cout << "function returned :: " << ans << endl;
		return ans;
	}
	else{
		int ans;
		ans = binaryHelper(key,arr,l+1,r);
		cout << "function returned :: " << ans << endl;
		return ans;

	}
//	return -1;
}

int binarySearch(int key, int* arr){
	return binaryHelper(key, arr, 0, 7-1);
}

int main(){
	int key;
	int arr[] = {10,20,30,40,50,60,70};
	cout<<sizeof(arr)/sizeof(*arr)<<endl;
	cout<<"Enter the key to search :: ";
	cin>>key;
	cout<<endl;
	cout<<"key is at :: " << binarySearch(key,arr)<< endl;
	return 0;
}
