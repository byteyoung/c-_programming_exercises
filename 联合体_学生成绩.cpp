#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class ExamInfo{
private:
    string name;
    enum{GRADE,PASS,PERCENTAGE}mode;
    union {
        char grade;
        bool pass;
        int percent;};
public:
    ExamInfo(string name,char grade):name(name),mode(GRADE),grade(grade){}
    ExamInfo(string name,bool pass):name(name),mode(PASS),pass(pass){}
    ExamInfo(string name,int percent):name(name),mode(PERCENTAGE),percent(percent){}
    void show();
};

void ExamInfo::show(){
    cout << name <<": ";
    switch(mode){
        case GRADE: cout << grade;break;
        case PASS: cout <<(pass ? "Pass":"Fail");break;
        case PERCENTAGE: cout << percent;break;
    }
    cout <<"\n";
}

int main(){
    ExamInfo c1("E",'B');
    ExamInfo c2("C",true);
    ExamInfo c3("CP",85);
    c1.show();
    c2.show();
    c3.show();
    return 0;
    

}