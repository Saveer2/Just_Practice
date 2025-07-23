#include <iostream>
using namespace std;

class candy{
    public:
        int id;
        int f;
};

int main(){
    int a;
    int i,j;

    cout<<"Candy Problem!!\n"<<endl;
    cout<<"Enter No. of data : ";
    cin>>a;

    candy c[a];
    candy temp = c[i];
    int h,hid;

    cout<<"ENTER ID AND FREQ : "<<endl;
    for(i=0;i<a;i++){
        cin>>c[i].id;
        cin>>c[i].f;
        cout<<endl;
    }

    cout<<"ID \t FREQUNCY"<<endl;
    for(i=0;i<a;i++){
        cout<<c[i].id<<"\t"<<c[i].f<<endl;
    }

    h=c[a].f;
    hid=c[a].id;
    cout<<"\n*ID having highest Frequency : ";
    for(i=0;i<a;i++){
        if(c[i].f>h){
            h=c[i].f;
            hid=c[i].id;
        }
    }
    cout<<hid<<endl;
    cout<<"\n";

    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(c[i].f>c[j].f){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    cout<<"Updated Data in Ascending Order : \n"<<endl;
    for(i=0;i<a;i++){
        cout<<c[i].id<<"\t"<<c[i].f<<endl;
    }

}