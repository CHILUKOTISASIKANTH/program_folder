#include<iostream>
using namespace std;
class student{
	private:
		int sid;
		char name[20];
		double cgpa;
	public:
		void getdata(){
			cout<<"Enter dtudent id and name and cgpa";
			cin>>sid>>name>>cgpa;
		}
		void printdata(){
			cout<<"sid : "<<sid<<endl;
			cout<<"name : "<<name<<endl;
			cout<<"cgpa : "<<cgpa<<endl<<endl;
		}
};
int main(){
	student s[3];
	for(int i=0;i<3;i++){
		s[i].getdata();
	}
	for(int i=0;i<3;i++){
		s[i].printdata();
	}
}