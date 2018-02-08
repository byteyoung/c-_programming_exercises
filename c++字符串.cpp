#include <iostream>
#include <string>
using namespace std;

inline void test(const char *title,bool value){cout<<title<<" return "<<(value?"true":"false")<<endl;}

int main(){
    string s1 = "DEF";
    cout<<"s1 is " <<s1<<endl;
    string s2 ;
    cout <<"Please enter s2 :";
    cin>>s2;
    cout<<"length of s2: "<<s2.length()<<endl;
    
    test("s1<=\"ABC\"",s1<="ABC");
    test("\"DEF\"<=s1","DEF"<=s1);
    
    s2+=s1;
    cout<<"s2=s2+s1: "<<s2<<endl;
    cout<<"length of s2: "<<s2.length()<<endl;
    
    return 0;
};