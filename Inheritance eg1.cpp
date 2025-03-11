#include <iostream>
using namespace std;

//base class(parent)
class area{
	protected:
		int rad;
	public:
		void r(){
			cout<<"Enter Radius : ";
			cin>>rad;
		}
		void title(){
			cout<<" ** Area Of Circle **\n"<<endl;
		}
};

//derived class(child)
class find_a : public area{
	public:
		double area(){
			return 3.14*rad*rad;
		}
};

int main(){
	find_a a1;
	a1.title();
	a1.r();
	double area = a1.area();
	cout<<"The area of the circle : "<<area<<endl;
	
	return 0;
}
