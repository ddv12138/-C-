#include <iostream>
using namespace std;

class Student{
	private:
		string number,phone;
		string name;
		string departments;
	public:
		void getinfo(){
			cout<<"����:"<<name<<endl<<"ѧ��:"<<number<<endl<<"�绰����:"<<phone<<endl<<"����Ժϵ:"<<departments<<endl; 
		}
		void setinfo(){
			cout<<"����������"<<endl;
			cin>>name;
			cout<<"������ѧ��"<<endl;
			cin>>number;
			cout<<"������绰����"<<endl;	
			cin>>phone;
			cout<<"����������Ժϵ"<<endl;
			cin>>departments;
		}
};
int main(){
	Student student;
	student.setinfo();
	student.getinfo();
}
