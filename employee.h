# ifndef employee_h
# define employee_h
# include <string>
#include <ostream>
using namespace std;

class Employee{
public:

  	string Name;
	string Position;
	int Age;

	Employee(string new_Name="NULL", string new_Position="NULL", int new_Age=0)
	{
		Name=new_Name;
		Position=new_Position;
		Age=new_Age;
	}
	~Employee() { };
	friend ostream& operator << (ostream& o, const Employee& e)
	{
		return o << e.Name << ' ' << e.Position << ' ' << e.Age;
	}
};
# endif /* emplyee.h */
