#include<iostream>
#include<math.h>

using namespace std;

class Polynomial{
	private:
		int n,x;
		int *a;
	public:
		Polynomial(){}
		Polynomial(const Polynomial& p){
			n = p.n;
			a= new int[p.n];
        	for (int i=0; i<p.n; i++){
        		a[i]=p.a[i];
        	}
		}
		Polynomial(int nn){
			n=nn;
			a = new int[n];
		}
		void setn(int i,int v){
			a[i] = v;
		}
		int getn(int nn){
			return n-nn;
		}
		void seta(int i,int j){
			a[i] = j;
		}
		int geta(int i){
			return a[i];
		}
		void show(){
			int i;
			cout<<"y=";
			for(i=0;i<n;i++){
				cout<<"+"<<"("<<geta(i)<<")"<<"x^"<<getn(i);
			}
			cout<<endl;
		}
		friend Polynomial operator + (Polynomial p1,Polynomial p2);
		friend Polynomial operator - (Polynomial p1,Polynomial p2);
};
Polynomial operator + (Polynomial p1,Polynomial p2){
	int i,j;
	if(p1.n>=p2.n){
		Polynomial temp(p1);
		for(i=0;i<p1.n;i++){
			for(j=0;j<p2.n;j++){
				if(p1.getn(i)==p2.getn(j)){
					temp.seta(i,p1.geta(i)+p2.geta(j));
				}
			}
		}
		return temp;
	}else{
		Polynomial temp(p2);
		for(i=0;i<p2.n;i++){
			for(j=0;j<p1.n;j++){
				if(p2.getn(i)==p1.getn(j)){
					temp.seta(i,p1.geta(j)+p2.geta(j));
				}
			}
		}
		return temp;
	}
}
Polynomial operator - (Polynomial p1,Polynomial p2){
	int i,j;
	if(p1.n>=p2.n){
		Polynomial temp(p1);
		for(i=0;i<p1.n;i++){
			for(j=0;j<p2.n;j++){
				if(p1.getn(i)==p2.getn(j)){
					temp.seta(i,p1.geta(i)-p2.geta(j));
				}
			}
		}
		return temp;
	}else{
		Polynomial temp(p2);
		for(i=0;i<p2.n;i++){
			for(j=0;j<p1.n;j++){
				if(p2.getn(i)==p1.getn(j)){
					temp.seta(i,p1.geta(j)-p2.geta(j));
				}
			}
		}
		return temp;
	}
}
int main(){
	Polynomial p1(3),p2(4),p3(4);
	
	p1.setn(0,7);
	p1.setn(1,6);
	p1.setn(2,5);
	p1.show();
	
	p2.setn(0,5);
	p2.setn(1,6);
	p2.setn(2,4);
	p2.setn(3,7);
	p2.show();
	Polynomial p = p2+p1;
	p.show();
	Polynomial q = p2-p1;
	q.show();
}
