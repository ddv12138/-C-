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
			cout<<"Ʒ��:"<<brand<<endl<<"�ͺ�:"<<model<<endl<<"�������:"<<year<<endl<<"�۸�:"<<price<<endl; 
		}
		void setinfo(){
			cout<<"������Ʒ��"<<endl;
			cin>>brand;
			cout<<"�������ͺ�"<<endl;
			cin>>model;
			cout<<"������������"<<endl;	
			cin>>year;
			cout<<"������۸�"<<endl;
			cin>>price;
		}
};
int main(){
	Car car1;
	car1.setinfo();
	car1.getinfo();
	return 0;
}
