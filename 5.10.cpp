#include<iostream>

using namespace std;

class Shape{
	private:
		int x,y;
	public:
		Shape(){
		}
		Shape(int i,int j){
			x = i;
			y = j;
		}
		void showData(){
			cout<<"Shape:"<<"x="<<x<<","<<"y="<<y<<endl;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
		int setx(int i){
			x = i;
		}
		int sety(int i){
			y = i;
		}
};

class Rect:public Shape{
	private:
		int w,h;
	public:
		Rect(int width,int height,int i,int j){
			setx(i);
			sety(j);
			w = width;
			h = height;
		}
		void showData(){
			cout<<"Rect:"<<"x="<<getx()<<","<<"y="<<gety()<<","<<"w="<<w<<","<<"h="<<h<<endl;
		}
};

class Circle:public Shape{
	private:
		int r;
	public:
		Circle(int range,int i,int j){
			setx(i);
			sety(j);
			r = range;
		}
		void showData(){
			cout<<"Circle:"<<"x="<<getx()<<","<<"y="<<gety()<<","<<"r="<<r<<endl;
		}
};

int main(){
	Shape s(0,0);
	s.showData();
	Rect r(5,7,1,1);
	r.showData();
	Circle c(5,-1,-1);
	c.showData();
}
