#include <iostream>
using namespace std;


class candy{
    public:
        int id, f;
};
void sample_input(candy c[]){
    for(int i=0 ;i<100;i++){
        c[i].id = i+1;
        c[i].f = (i+1)%10;
    }
}

int main(){
    candy c[100];

    sample_input(c);

    int i=5;
    cout<<"** Candy at Index "<<i<<" : \nID = "<<c[i].id<<" , Frequency = "<<c[i].f<<"\n"<<endl;;

    int val = 25;
    c[i].f = val;
    cout<<"** Updated frequency of candy at Index "<<i<<" : "<<c[i].f<<"\n"<<endl;

    int total = sizeof(c) / sizeof(c[0]);
    cout<<"** Total Candies Stored : "<<total<<"\n"<<endl;

    return 0;
}