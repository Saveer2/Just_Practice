#include <iostream>
using namespace std;

class candy{
    public:
        int id, f;
};

void input(candy c[],int a){
    int i;
    cout<<"ENTER ID AND FREQ : "<<endl;
    for(i=0;i<a;i++){
        cin>>c[i].id;
        cin>>c[i].f;
        cout<<endl;
    }
}

void display(candy c[],int a){
    for(int i=0;i<a;i++){
        cout<<c[i].id<<"\t"<<c[i].f<<endl;
    }
}

void highest_freq(candy c[],int a){
    int h,hid;
    h=c[0].f;
    hid=c[0].id;
    cout<<"\n**ID HAVING HIGHEST FREQUENCY : ";
    for(int i=0;i<a;i++){
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

void sort(candy c[],int a){
    int order;
    int i,j;
    candy temp=c[i];

    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
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
    display(c,a);


    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
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
    display(c,a);
}

int get_id(candy c[],int target,int a){
    int h=c[0].id;
    for(int i=0;i<a;i++){
        if(c[i].f==target){
            h=c[i].id;
        }
    }
    return h;
}


int main(){
    while(1){
        int a,target;
        cout<<"** ENTER SIZE : ";
        cin>>a;
        candy c[6];
        input(c,a);
        cout<<"** TABLE : "<<endl;
        display(c,a);
        highest_freq(c,a);
        reverse_order(c,a);
        sort(c,a);
        cout<<"\n\n";
        cout<<"Enter Freq to find ID : ";
        cin>>target;
        cout<<"** Required ID = "<<get_id(c,target,a)<<endl;
        cout<<"\n\n";
    }
    return 0;
}
