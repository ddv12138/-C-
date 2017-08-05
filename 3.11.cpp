#include <iostream>
using namespace std;

class Car{
	private:
		string brand;
		string model;
		int year;
		int price;
	public:
		void getinfo(){
			cout<<"品牌:"<<brand<<endl<<"型号:"<<model<<endl<<"出厂年份:"<<year<<endl<<"价格:"<<price<<endl; 
		}
		void setinfo(){
			cout<<"请输入品牌"<<endl;
			cin>>brand;
			cout<<"请输入型号"<<endl;
			cin>>model;
			cout<<"请输入出场年份"<<endl;	
			cin>>year;
			cout<<"请输入价格"<<endl;
			cin>>price;
		}
};
int main(){
	Car car1;
	car1.setinfo();
	car1.getinfo();
	return 0;
}
