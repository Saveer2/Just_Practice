#include <iostream>
#include <string>
using namespace std;

class details{
    public:
        void getdetails(){
            cout<<"Getting Details!!"<<endl;
        }
};
class marks{
    public:
        void getmarks(){
            cout<<"Getting Marks!!"<<endl;
        }
};
class result : public details,public marks{
    public:
        void getresult(){
            cout<<"Getting results!!"<<endl;
        }
};

int main(){
    result r1;
    r1.getdetails();
    r1.getmarks();
    r1.getresult();

    return 0;
}