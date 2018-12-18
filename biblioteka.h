# ifndef biblioteka_h
# define biblioteka_h
# include <string>
#include <ostream>
using namespace std;

class Biblioteka{
public:
  	string autor;
	string kategoria;
	int lstron;
	string status;

	Biblioteka(string new_autor="NULL", string new_kategoria="NULL", int new_lstron=0, string new_status="NULL"){
		autor=new_autor;
		kategoria=new_kategoria;
		status=new_status;
		lstron=new_lstron;
	}

	~Biblioteka() { };
	friend ostream& operator << (ostream& o, const Biblioteka& e){
           return o << e.autor << ' ' << e.kategoria << ' ' << e.lstron << ' ' << e.status;
	}
};
# endif /* biblioteka.h */
