#include<iostream>
#include<string>
using namespace std;

class Teacher{
	private:
		 double salary;
		 
		 public:
		 	  string name;
          string dept;
            string subject;
		 	//non parameterized 
		   Teacher() {
        dept = "Computer Science";
			 }
			 //parametrized 
			 Teacher(string n,string d,string s,double sal){
			 	this->name=name;
			  this->dept=dept;
			    this->subject=subject;
			  this->salary =salary;
			 	
			 }
			 //copy constructor 
		    Teacher(Teacher &orgObj){
		    	cout<<"i am a custom copy";
		    	this->name=orgObj.name;
		    	this->dept=orgObj.dept;
		    	this->subject=orgObj.subject;
		    	this->salary=orgObj.salary;
			}
	
	void changeDept(string newDept){
		dept =newDept;
	}
	void getInfo(){
		cout<<"name:"<<name<<endl;
		cout<<"subject:"<<subject<<endl;
	}
};
int main(){
	Teacher t1("Shradhaa","computer science","c++",25000);
//	t1.getInfo();
	Teacher t2(t1);// custom copy constructor
	t2.getInfo();
	return 0;
	
}
