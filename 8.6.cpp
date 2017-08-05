#include<iostream>
#include <string>

using namespace std;

class Student{
	private:
		int number;
		string name;
	public:
		Student(){
		}
		Student(int nu,string na){
			number = nu;
			name = na;
		}
		string getname(){
			return name;
		}
		int getnumber(){
			return number;
		}
		void set(int nu,string nm){
			number = nu;
			name = nm;
		}
}; 

template <class T1,class T2> void show(T1* arr,T2 l){
	int i;
	for(i=0;i<l;i++){
		cout<<arr[i].getname()<<"->"<<arr[i].getnumber()<<"   ";
	}
	cout<<endl;
}

template <class T1,class T2> T1* sortbubble(T1* arr,T2 l){
	if(l>1){
		int i=0;
		for(i=0;i<l-1;i++){
			if(arr[i].getnumber() < arr[i+1].getnumber()){
				T1 temp(arr[i].getnumber(),arr[i].getname());
				arr[i].set(arr[i+1].getnumber(),arr[i+1].getname());
				arr[i+1].set(temp.getnumber(),temp.getname());
			}
		}
		sortbubble(arr,l-1);
	}
	return arr;
}

int main(){
	Student arr[] = {Student(5,"liming"),Student(1,"zhangsan"),Student(3,"lisi"),Student(4,"wangwu"),Student(2,"zhaoliu")};
	show(arr,5);
	sortbubble(arr,5);
	show(arr,5);
	return 0;
}
