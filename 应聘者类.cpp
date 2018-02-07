#include <iostream>
using namespace std;
class Employee{
private:
    char * name;
    char * address;
    char * city;
    char * code;
public:
    Employee(char * n= "",char * add  ="",char *ct="",char * cd = "" ):name(n),address(add),city(ct),code(cd){};
    void change_name(char * Nname){name = Nname;cout<<"name changed."<<endl;};
    void display(){cout<<"name: "<<name<< "\taddress: "<<address<< "\tcity: "<<city<<"\tcode: "<<code<<endl;};
};

int main(){
    Employee e("Wang Er","Haidian","Beijing","100084");
    e.display();
    e.change_name("Li Hua");
    e.display();
    
    return 0;
}