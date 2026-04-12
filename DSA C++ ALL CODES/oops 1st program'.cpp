#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;

public:
    string names;
    string dept;
    string subject;

    void changeDept(string newDept){
        dept = newDept;
    }

    void setSalary(double s){
        salary = s;
    }

    double getSalary(){
        return salary;
    }
};

int main(){
    Teacher t1;

    t1.names = "Shradhaa";
    t1.subject = "Data Structures";
    t1.dept = "Data Science";

    t1.setSalary(1000);   // ? correct way

    cout << "Name: " << t1.names << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}
