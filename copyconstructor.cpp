#include<iostream>
using namespace std;
class A{
	int a,b;
	double c;
	public:
		A(int x,int y, double z){
			a=x;b=y;c=z;
		}
		void display(){
			cout<<a<<b<<c<<endl;
		}
};
int main(){
	A obj1(10,20,85.49);
	obj1.display();
	A obj2=obj1;
	obj2.display();
}