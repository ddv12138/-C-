#include<iostream>
#include<string>
using namespace std;

bool a=true;
int  b=0;
float CheckAgeScore(int age,float score){
	if(age<=25&&age>=15){
		cout<<"年龄正常"<<endl;
		if(score>=0.0&&score<=5.0){
			cout<<"成绩正常"<<endl;
		}else{
			b = 1;
			throw b;
		}
	}else{
		a = false;
		throw a;
	}
	if(a){
		return score*20;
	}
}

int main(){
	string name;
	int age;
	float score;
	float finscore;
	cout<<"请输入姓名"<<endl;
	cin>>name;
	cout<<"请输入年龄"<<endl;
	cin>>age;
	cout<<"请输入成绩"<<endl;
	cin>>score;
	try{
		finscore = CheckAgeScore(age,score);
	}catch(bool a){
		cout<<"年龄输入不合法"<<endl;
	}catch(int b){
		cout<<"成绩输入不合法"<<endl;
	}
	if(a&&b==0){
		cout<<"姓名："<<name<<endl<<"年龄："<<age<<endl<<"成绩："<<finscore<<endl; 
	}
	
}
