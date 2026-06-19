#include <iostream>
#include <string>
using namespace std;

class Teacher{

	//private modifier
	private:
	//private properties
		float salary;
	//public modifier
	public:
	//public properties
		string name;
		string subject;
		string dept;
		// setter / public methods
		void changeSalary(float s){
			salary = s;
		}
		// getter / public methods
		float showSalary(){
			return salary;
		}
};

int main(){
	//creating object t1 from Teacher class and assgning values
	Teacher t1;
	t1.name = "Ali Hamza";
	t1.subject = "Maths";
	t1.dept = "Computer Science";
	//use setter to access private modifier
	t1.changeSalary(25000);
	
	cout<<t1.name<<endl;
	cout<<t1.showSalary();
}
