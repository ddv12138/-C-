#include<iostream>
using namespace std;


int main(){
	int i,j=0,k=0,l=0;
	int *p = new int [10];
	for(i=0;i<10;i++){
		cin>>p[i];
		if(p[i]>0){
			j++;
		}else if(p[i]==0){
			l++;
		}else{
			k++;
		}
	}
	delete p;
	cout<<"������"<<j<<"��"<<","<<"������"<<k<<"��"<<","<<"����"<<l<<"��"<<endl; 
}
