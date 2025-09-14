#include<iostream>
#include<string>
using namespace std;


class teacher{
   private:
   double salary;
    

    public:

    // properties & attributes
    string name;
    string dept;
    string subject;
    

    // methods & member functions

    void changeDept(string newDept){
        dept = newDept;
    }

    // setter method for salary
    void setsalary(double s){
        salary = s;
    }
    // getter method for salary
    double getsalary(){
        return salary;
    }
     
};

int main(){
    // create object of class teacher 
    teacher t1;
    t1.name = "rahul";
    t1.dept = "CSE";
    t1.subject = "OOP";
    t1.setsalary(50000);
    cout << "Teacher name: " << t1.name << endl;
    cout << "Teacher dept: " << t1.dept << endl;
    cout << "Teacher subject: " << t1.subject << endl;
    cout << "Teacher salary: " << t1.getsalary()<< endl;

    return 0;
}
