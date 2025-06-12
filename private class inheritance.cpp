#include <iostream>
using namespace std;

class Parent
{
    public:
        int x=10;
        Parent()
        {
            cout<<"Parent Constructor Called!!"<<endl;
        }

        void display()
        {
            cout<<"Parent Display : x="<<x<<endl;
        }
    protected:
        int y=20;
    private:
        int z=30;
};
class child : private Parent
{
    public:
        void show()
        {
            Parent::display();
        }

        child()
        {
            cout<<"Child Constructor Called!!"<<endl;
        }

        void display()
        {
            cout<<"Child Display : x="<<x<<" | y="<<y<<endl;
        }
};

int main()
{
    child obj;
    obj.show();
    obj.display();
    return 0;
}