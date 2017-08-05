#include<iostream>

using namespace std;

class Vehicle{
	private:
		string date,price;
	public:
		Vehicle(){
		}
		Vehicle(string d,string p){
			date = d;
			price = p;
		}
		void print(){
			cout<<"date:"<<date<<","<<"price:"<<price<<endl;
		}
		string getd(){
			return date;
		}
		string getp(){
			return price;
		}
		void setd(string d){
			date = d;
		}
		void setp(string p){
			price = p;
		}
};
class Car:public Vehicle{
	private:
		int passager;
	public:
		Car(string date,string price,int p){
			setd(date);
			setp(price);
			passager = p;
		}
		void print(){
			cout<<"date:"<<getd()<<","<<"price:"<<getp()<<","<<"passager:"<<passager<<endl;
		}
};
class Truck:public Vehicle{
	private:
		int weight;
	public:
		Truck(string date,string price,int w){
			setd(date);
			setp(price);
			weight = w;
		}
		void print(){
			cout<<"date:"<<getd()<<","<<"price:"<<getp()<<","<<"weight:"<<weight<<endl;
		}
};


int main(){
	Vehicle v("20010228","25000");
	v.print();
	Car c("20100101","12000",4);
	c.print();
	Truck t("20150508","850000",80);
	t.print();
}
