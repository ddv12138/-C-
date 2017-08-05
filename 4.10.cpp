#include <iostream>

using namespace std;

class Stu{
	private:
		char *name;
		double score;
	public:
		Stu(char *n,double s);
		string getname();
		double getscore();
	friend bool comp(Stu s1,Stu s2){
		if(s1.getscore()>s2.getscore()){
			return true;
		}else{
			return false;
		}
	}
};
Stu::Stu(char *n,double s){
	name=n;
	score=s;
}
string Stu::getname(){
	string na = name;
	return na;
}
double Stu::getscore(){
	return score;
}
int main(){
	Stu stu[] = {Stu("zhang",78),Stu("wang",80),Stu("zhao",92),Stu("li",65),Stu("chen",50)};
	int i;
	int max = 0,min = stu[0].getscore();
	int ma=0,mi=0;
	for(i=0;i<5;i++){
		if(stu[i].getscore()>max){
			max = stu[i].getscore();
			ma = i;
		}
		if(stu[i].getscore()<min){
			min = stu[i].getscore();
			mi = i;
		}
	}
	cout<<"最高分："<<stu[ma].getname()<<":"<<max<<endl<<"最低分："<<stu[mi].getname()<<":"<<min<<endl;
	cout<<"请输入要比较的学生序号"<<endl;
	int a,b;
	cin>>a;
	cin>>b;
	if(a>5||b>5){
		cout<<"错误"<<endl;
	}else{
		bool flag = comp(stu[a-1],stu[b-1]);
		if(flag){
			cout<<stu[a-1].getname()<<"的分数比"<<stu[b-1].getname()<<"高"<<endl; 
		}else{
			cout<<stu[a-1].getname()<<"的分数比"<<stu[b-1].getname()<<"低"<<endl; 
		}
	}

}
