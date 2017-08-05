#include<iostream>

using namespace std;

class Mammal{
	private:
		
	public:
		virtual void Speak(){
			cout<<"it`s mammal"<<endl;
		}
};
class Dog:public Mammal{
	private:
		
	public:
		void Speak(){
			cout<<"it`s dog"<<endl;
		}
};

int main(){
	Mammal *mam;
	Dog dog;
	mam = &dog;
	mam->Speak();
}
