#include<iostream>
#include<math.h>

using namespace std;

class Data{
	private:
		int year,month,day;
	public:
		void setval(int year,int month,int day);
		int getyear();
		int getmonth();
		int getday();
		int mday(int m);
		bool isrun();
		int numday();
	friend int diff(Data d1,Data d2){
		int n1 = floor((d1.getyear()-1)/4)*366 + (d1.getyear()-floor((d1.getyear()-1)/4))*365;
		int i;
		for(i=1;i<d1.getmonth();i++){
			n1 = n1 + d1.mday(i);
		} 
		//加上当月天数
		n1 = n1 + d1.getday();
		
		int n2 = floor((d2.getyear()-1)/4)*366 + (d2.getyear()-floor((d2.getyear()-1)/4))*365;
		for(i=1;i<d2.getmonth();i++){
			n2 = n2 + d2.mday(i);
		}
		//加上当月天数
		n2 = n2 + d2.getday();
		int nn = n2-n1;
		if(nn<0){
			return -nn;
		}else{
			return nn;
		}
	}
};

void Data::setval(int y,int m,int d){
	year = y;
	month = m;
	day = d;
}
int Data::getyear(){
	return year;
}
int Data::getmonth(){
	return month;
}
int Data::getday(){
	return day;
}
int Data::mday(int m){
	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:{
			return 31;
			break;
		}
		case 4:
		case 6:
		case 9:
		case 11:{
			return 30;
			break;
		}
		case 2:{
			if(isrun()){
				return 29;
			}else{
				return 28;
			}
		}
			break;
	}
}
bool Data::isrun(){
	if(year%400==0||(year%100!=0&&year%4==0)){
		return true;
	}else{
		return false;
	}
}
int Data::numday(){
	int num=0;
	num = num+ floor((year-1)/4)*366;		//前面闰年总天数
	num = num+ (year-floor((year-1)/4));		//前面平年总天数
	//本年前几个月
	int i;
	for(i=1;i<month;i++){
		num = num + mday(i);
	} 
	//加上当月天数
	num = num + day;
	return num;
}
int main(){
	Data d1,d2;
	int year1,month1,day1;
	int year2,month2,day2;
	cout<<"开始年月日:"<<endl;
	cin>>year1;
	cin>>month1;
	cin>>day1;
	cout<<"结束年月日："<<endl;
	cin>>year2;
	cin>>month2;
	cin>>day2;
	if(month1<=12&&month1>=1&&day1<=31&&day1>=1&&month2<=12&&month2>=1&&day2<=31&&day2>=1){
		d1.setval(year1,month1,day1);
		d2.setval(year2,month2,day2);
		int days = diff(d1,d2);
		cout<<"两者相差"<<days<<"天。"<<endl;
	}else{
		cout<<"请检查输入数据是否有误"<<endl; 
	}
	return 0;
}
