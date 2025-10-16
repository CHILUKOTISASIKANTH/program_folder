#include<iostream>
using namespace std;
class A{
	int a;
	public:
		A(){
			a=10;
			cout<<"Default constructor"<<endl;			
		}
		A(int b){
			a=a+b;
			cout<<"value of a= "<<a<<endl;
		}
};
int main(){
	A obj,obj2(20),obj3(30,57.85);
	obj4(97.82,37);
	return 0;
}