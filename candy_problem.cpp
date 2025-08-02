#include <iostream>
using namespace std;

class candy{
    public:
        int id, f;
};

void input(candy c[]){
    int i;
    cout<<"ENTER ID AND FREQ : "<<endl;
    for(i=0;i<6;i++){
        cin>>c[i].id;
        cin>>c[i].f;
        cout<<endl;
    }
}

void display(candy c[]){
    for(int i=0;i<6;i++){
        cout<<c[i].id<<"\t"<<c[i].f<<endl;
    }
}

void highest_freq(candy c[]){
    int h,hid;
    h=c[0].f;
    hid=c[0].id;
    cout<<"\n**ID HAVING HIGHEST FREQUENCY : ";
    for(int i=0;i<6;i++){
        if(c[i].f>h){
            h=c[i].f;
            hid=c[i].id;
        }
    }
    cout<<hid<<endl;
    cout<<"\n";
}

void reverse_order(candy c[], int size){
    cout << "\n** REVERSE ORDER : " << endl;
        for(int i = size - 1; i >= 0; i--){
        cout << c[i].id << "\t" << c[i].f << endl;
    }
}

void sort(candy c[]){
    int order;
    int i,j;
    candy temp=c[i];

    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(c[i].f>c[j].f){
                temp =c[i];
                c[i] = c[j];
                c[j] = temp;
            }
            else{
            }
        }
    }
    cout<<"\n ** DESCENDING ORDER : "<<endl;
    display(c);


    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(c[i].f<c[j].f){
                temp =c[i];
                c[i] = c[j];
                c[j] = temp;
            }
            else{
            }
        }
    }
    cout<<"\n ** ASCENDING ORDER : "<<endl;
    display(c);
}


int main(){
    candy c[6];
    input(c);
    cout<<"** TABLE : "<<endl;
    display(c);
    highest_freq(c);
    reverse_order(c,6);
    sort(c);

    return 0;
}
