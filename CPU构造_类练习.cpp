#include <iostream>
using namespace std;

enum CPU_Rank{P1=1,P2,P3,P4,P5,P6,P7};

class CPU{
private:
    CPU_Rank rank;
    int frequency;
    float voltage;
public:
    CPU(CPU_Rank r,int f,float v){rank = r ;frequency = f;voltage = v;cout<<"构造了一个CPU\n";}
    CPU(CPU &cc){rank=cc.rank;frequency = cc.frequency;voltage = cc.voltage;cout<< " 拷贝构造了一次\n";}
    CPU();
    ~CPU(){cout <<"析构了一个CPU\n";};
    
    //数据接口 （为啥要有const）
    CPU_Rank GetRank()const{return rank;};
    int GetFrequency()const {return frequency;}
    float GetVoltage()const{return voltage;}

    void setRank(CPU_Rank r){rank = r;}
    void setFrequency(int f){frequency = f;}
    void setVoltage(float v){voltage = v;}
    
    void run(){cout << "CPU begin!\n";};
    void stop(){cout << "CPU stop!\n";};
    
};

enum RAM_Rank{DDR4,DDR3,DDR2,DDR1};
class RAM{
private :
    int volume;
    RAM_Rank rrank;
    int rfrequency;
public :
    RAM(RAM_Rank r,int f,float v){rrank = r ;rfrequency = f;volume = v;cout<<"构造了一个RAM\n";}
    RAM();
    ~RAM(){cout <<"析构了一个RAM\n";};
    
    //数据接口 （为啥要有const）
    RAM_Rank GetrRank()const{return rrank;};
    int GetrFrequency()const {return rfrequency;}
    float GetVolume()const{return volume;}
    
    void setrRank(RAM_Rank r){rrank = r;}
    void setrFrequency(int f){rfrequency = f;}
    void setVolume(float v){volume = v;}
    
    void run(){cout << "RAM begin!\n";};
    void stop(){cout << "RAM stop!\n";};
};

enum CD_CONNECT{SATA,USB};
enum CD_INSTALL{external,bulit_in};

class CDROM{
private :
    CD_CONNECT con;
    CD_INSTALL install;
    int cdvolume;
public :
    CDROM(CD_CONNECT c,CD_INSTALL i,int cv){con = c ;install = i;cdvolume = cv;cout<<"构造了一个CDROM\n";}
    CDROM();
    ~CDROM(){cout <<"析构了一个CDROM\n";};
    
    //数据接口 （为啥要有const）
    CD_CONNECT GetCD_CONNECT()const{return con;};
    CD_INSTALL GetCD_INSTALL()const{return install;};
    int Getcdvolume()const {return cdvolume;}
    
    void setCD_CONNECT(CD_CONNECT c){con = c;}
    void setCD_INSTALL(CD_INSTALL i){install = i;}
    void setcdvolume(int cv){cdvolume = cv;}
    
    void run(){cout << "CDROM begin!\n";};
    void stop(){cout << "CDROM stop!\n";};
};

class COMPUTER{
private:
    CPU my_cpu;
    RAM my_ram;
    CDROM my_cdrom;
    unsigned int storage_size;
    unsigned int bandwidth;
    
public:
    COMPUTER(CPU c,RAM r,CDROM cr,unsigned int s,unsigned int b);
    ~COMPUTER(){};
    void Run(){
        my_cpu.run();my_ram.run();my_cdrom.run();
        cout<< "COMPUTER  begin!\n";
    }
    void Stop(){
        my_cpu.stop();my_ram.stop();my_cdrom.stop();
        cout<< "COMPUTER  stop!\n";
    }
    
};

COMPUTER::COMPUTER(CPU c,RAM r,CDROM cr,unsigned int s,unsigned int b):my_cpu(c),my_ram(r),my_cdrom(cr){
    storage_size = s;
    bandwidth = b;
    cout<< "构造了一个computer ～\n";
}


int main(){
    CPU a(P6,300,2.8);
    a.run();a.stop();
    cout<<"*****************\n";
    
    RAM b(DDR3,1600,8);
    b.run();b.stop();
    cout<<"*****************\n";
    
    CDROM c(SATA,external,23);
    c.run();c.stop();
    cout<<"*****************\n";
    
    COMPUTER com(a,b,c,1080,512);
    com.Run();com.Stop();
    cout<<"*****************\n";
}