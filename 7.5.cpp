#include<iostream>

using namespace std;

class Matrix{
	private:
		int m[3][3];
	public:
		friend Matrix operator + (Matrix m1,Matrix m2);
		friend Matrix operator - (Matrix m1,Matrix m2);
		friend Matrix operator * (Matrix m1,Matrix m2);
		int getm(int i,int j){
			return m[i][j];
		}
		void setm(int a,int b,int c){
			m[a][b] = c;
		}
		void show(){
			int i,j;
			for(i=0;i<3;i++){
				cout<<endl;
				for(j=0;j<3;j++){
					cout<<" "<<m[i][j];
				}
			}
			cout<<endl;
		}
};
Matrix operator * (Matrix m1,Matrix m2){
	//第一个参数为纵坐标，第二个为横坐标 
	int i,j;
	int l=0,m=0,n=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(j==0){
				l = l + m2.getm(i,0);
			}else if(j==1){
				m = m + m2.getm(i,1);
			}else{
				n = n + m2.getm(i,2);
			}
		}
	}
	Matrix m3; 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(i==0){
				m3.setm(i,j,m1.getm(i,j)*l);
			}else if(i==1){
				m3.setm(i,j,m1.getm(i,j)*m);
			}else{
				m3.setm(i,j,m1.getm(i,j)*n);
			}
		}
	}
	return m3;
}

Matrix operator - (Matrix m1,Matrix m2){
	//第一个参数为纵坐标，第二个为横坐标
	Matrix m3;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m3.setm(i,j,m1.getm(i,j)-m2.getm(i,j)); 
		}
	}
	return m3;
}

Matrix operator + (Matrix m1,Matrix m2){
	//第一个参数为纵坐标，第二个为横坐标
	Matrix m3;
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m3.setm(i,j,m1.getm(i,j)+m2.getm(i,j)); 
		}
	}
	return m3;
}

int main(){
	Matrix m,m1,m2;
	int i,j,v1=1,v2=8;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m1.setm(i,j,v1);
			v1++;
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			m2.setm(i,j,v2);
			v2--;
		}
	}
	m1.show();m2.show();
	m=m1 + m2;
	m.show();
	m=m1 - m2;
	m.show();
	m=m1 * m2;
	m.show();
}
