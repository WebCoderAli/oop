#include <iostream>
#include <string>
using namespace std;

class Teacher{
	private:
		float salary;
	
	public:
		string name;
		string subject;
		string dept;
		// setter 
		void changeSalary(float s){
			salary = s;
		}
		
		float showSalary(){
			return salary;
		}
};

int main(){
	Teacher t1;
	t1.name = "Ali Hamza";
	t1.subject = "Maths";
	t1.dept = "Computer Science";
	t1.changeSalary(25000);
	
	cout<<t1.name<<endl;
	cout<<t1.showSalary();
}
