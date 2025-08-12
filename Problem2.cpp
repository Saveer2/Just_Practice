#include <iostream>
using namespace std;

class candy{
    public:
        int id, f;
};

int main(){
    int i,j;

    int count[] ={2,2,3,5,4,4,5,6,7,6};
    int size = 10;

    cout<<"-----------------------------------"<<endl;
    cout<<"\t ** Candy Count **"<<endl;
    cout<<"-----------------------------------\n"<<endl;
    cout<<"Candies Sold : ";
    for(int i=0;i<size;i++){
        cout<<count[i]<<" ";
    }
    cout<<"\n\n";

    candy c[10];
    int unique = 0;

    for(i=0;i<size;i++){
        bool found = false;

        for(j=0;j<unique;j++){
            if(c[j].id==count[i]){
                c[j].f++;
                found = true;

                break;
            }
        }
        if(!found){
            c[unique].id = count[i];
            c[unique].f = 1;
            unique ++;
        }
    }

    cout<<"** ID \t FREQUENCY"<<endl;
    for(i=0;i<unique;i++){
        cout<<c[i].id<<"\t"<<c[i].f<<endl;
    }

    cout<<"-----------------------------------"<<endl;
    return 0;
}