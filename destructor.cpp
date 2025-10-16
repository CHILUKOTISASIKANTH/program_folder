#include<iostream>
using namespace std;
class b{
	int a;
	public:b(int x){
		a=x;
	}
	void display(){
		cout<<"a= "<<a<<endl;
	}
	~b(){
		cout<<"destructor is activated "<<endl;	
	}
};
int main(){
	b obj1(20);
	obj1.display();
	return 0;
}