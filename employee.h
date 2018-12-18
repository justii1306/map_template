# ifndef employee_h
# define employee_h
# include <string>
#include <ostream>
using namespace std;

class Employee{
public:

  	string kto;
	string Position;
	int Age;

	Employee(string new_kto="Nie podano", string new_Position="Nie podano", int new_Age=0)
	{
		kto=new_kto;
		Position=new_Position;
		Age=new_Age;
	}
	~Employee() { };
	friend ostream& operator << (ostream& o, const Employee& e)
	{
		return o << e.kto << ' ' << e.Position << ' ' << e.Age;
	}
};
# endif /* emplyee.h */
