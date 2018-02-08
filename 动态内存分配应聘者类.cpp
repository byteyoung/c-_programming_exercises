#include<iostream>
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

/*
//bate 1
int main(){
    Employee emp[5]={
        Employee("zhang san","hebei","beijing","100123"),
        Employee("yang bin","hebei","beijing","100123"),
        Employee("fang yue san","hebei","beijing","100123"),
        Employee("hua sai","hebei","beijing","100123"),
        Employee("zhou san","hebei","beijing","100123")
    };
    for(int i=0;i<5;i++){
        cout<<"Number "<<i<<":\n";
        emp[i].display();
        cout<<endl;
    }
        return 0;
}
*/

//bate_2
int main(){
    Employee emp[2],*empOne=0;
    empOne=new Employee("zhang san","hebei","beijing","100123");
    emp[0] = *empOne;
    
    empOne=new Employee("Yang san","hebei","beijing","100123");
    emp[1] = *empOne;
    
    delete empOne;
    
    for(int i=0;i<2;i++){
        cout<<"Number "<<i<<":\n";
        emp[i].display();
        cout<<endl;
    }
        return 0;
}

