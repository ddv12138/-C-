#include<iostream>
#define pai 3.14

using namespace std;

class Shape{
	public:
		virtual float Measure(){
			cout<<"it`s shape"<<endl;
		};
};
class Circle:public Shape{
	private:
		float r;
	public:
		Circle(int sr){
			r = sr;
		}
		float Measure(){
			cout<<"Circle:"<<pai*r*r<<endl;
			return pai*r*r;
		}
};
class Square:public Shape{
	private:
		float l;
	public:
		Square(float sl){
			l = sl;
		}
		float Measure(){
			cout<<"Square:"<<l*l<<endl;
			return l*l;
		};
};
class Rectangle:public Shape{
	private:
		float l,m;
	public:
		Rectangle(float sl,float sm){
			l = sl;
			m = sm;
		}
		float Measure(){
			cout<<"Rectangle:"<<l*m<<endl;
			return l*m;
		};
};
class Trapezoid:public Shape{
	private:
		float up,down,high;
	public:
		Trapezoid(float sup,float sdown,float shigh){
			up=sup;
			down=sdown;
			high=shigh;
		}
		float Measure(){
			cout<<"Trapezoid:"<<((up+down)*high)/2<<endl;
			return ((up+down)*high)/2;
		};
};
class Triangle:public Shape{
	private:
		float  l,h;
	public:
		Triangle(float sl,float sh){
			l=sl;
			h=sh;
		}
		float Measure(){
			cout<<"Triangle:"<<(l*h)/2<<endl;
			return (l*h)/2;
		};
};

int main(){
	Shape *cir,*squ,*rec,*tra,*tri;
	Shape *arr[] = {cir,squ,rec,tra,tri};
	Circle cir1(1);
	Square squ1(2);
	Rectangle rec1(3,4);
	Trapezoid tra1(5,6,7);
	Triangle tri1(8,9);
	arr[0] = &cir1;
	arr[1] = &squ1;
	arr[2] = &rec1;
	arr[3] = &tra1;
	arr[4] = &tri1;
	int i;
	float sum = 0;
	for(i=0;i<5;i++){
		sum = sum + arr[i]->Measure();
	}
	cout<<"sum:"<<sum<<endl;
}

