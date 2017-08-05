#include <iostream>
using namespace std;

class Student{
	private:
		string number,phone;
		string name;
		string departments;
	public:
		void getinfo(){
			cout<<"姓名:"<<name<<endl<<"学号:"<<number<<endl<<"电话号码:"<<phone<<endl<<"所属院系:"<<departments<<endl; 
		}
		void setinfo(){
			cout<<"请输入姓名"<<endl;
			cin>>name;
			cout<<"请输入学号"<<endl;
			cin>>number;
			cout<<"请输入电话号码"<<endl;	
			cin>>phone;
			cout<<"请输入所属院系"<<endl;
			cin>>departments;
		}
};
int main(){
	Student student;
	student.setinfo();
	student.getinfo();
}
