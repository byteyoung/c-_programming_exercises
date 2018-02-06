
#include <iostream>
using namespace std;
int main(){
    const char key[]={'a','c','b','a','d'};
    const int NUM_QUES = 5;
    char c;
    int ques = 0,numCorrect = 0;
    cout <<"Enter the "<<NUM_QUES<<" question tests;"<<endl;
    while(cin.get(c)){
        if (c!='\n'){
            if(c==key[ques]){
                numCorrect++;cout<<" ";
            }else
                cout<<"*";
            ques++;
        }
        else{
        cout<<"Score"<<static_cast<float>(numCorrect)/NUM_QUES*100<<"%";
            ques=0;numCorrect=0;cout<<endl;
        }
    
    }
        return 0;
}

