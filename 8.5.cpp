#include<iostream>

using namespace std;

template <class T1,class T2> T1 show(T1* arr,T2 l){
	int i;
	for(i=0;i<l;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

template <class T1,class T2> T1 sortbubble(T1 *arr,T2 l){
	int i;
	if(l>1){
		for(i=0;i<l-1;i++){
			if(arr[i]<arr[i+1]){
				T1 temp;
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		sortbubble(arr,l-1);
	}
}
int main(){
	float arr1[] = {2.1,4.4,1.0,5.0,3.0,8.0,7.0,0.0,5.0,9.0};
	int arr2[] = {2,4,1,5,3,8,7,0};
	char arr3[] = {'a','d','b','z','q','e','r','g','h'};
	sortbubble(arr1,10);
	show(arr1,10);
	sortbubble(arr2,8);
	show(arr2,8);
	sortbubble(arr3,9);
	show(arr3,9);
}
