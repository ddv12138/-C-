#include<iostream>
#include<string>
using namespace std;

bool a=true;
int  b=0;
float CheckAgeScore(int age,float score){
	if(age<=25&&age>=15){
		cout<<"��������"<<endl;
		if(score>=0.0&&score<=5.0){
			cout<<"�ɼ�����"<<endl;
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
	cout<<"����������"<<endl;
	cin>>name;
	cout<<"����������"<<endl;
	cin>>age;
	cout<<"������ɼ�"<<endl;
	cin>>score;
	try{
		finscore = CheckAgeScore(age,score);
	}catch(bool a){
		cout<<"�������벻�Ϸ�"<<endl;
	}catch(int b){
		cout<<"�ɼ����벻�Ϸ�"<<endl;
	}
	if(a&&b==0){
		cout<<"������"<<name<<endl<<"���䣺"<<age<<endl<<"�ɼ���"<<finscore<<endl; 
	}
	
}
