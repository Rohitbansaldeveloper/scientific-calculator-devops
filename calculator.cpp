#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    int choice;
    double x,y;

    while(true){
        cout<<"\nScientific Calculator\n";
        cout<<"1. Square Root\n";
        cout<<"2. Factorial\n";
        cout<<"3. Natural Log\n";
        cout<<"4. Power\n";
        cout<<"5. Exit\n";
        cin>>choice;

        switch(choice){

            case 1:
                cout<<"Enter number:";
                cin>>x;
                cout<<"Result:"<<sqrt(x)<<endl;
                break;

            case 2:
                cout<<"Enter number:";
                cin>>x;
                cout<<"Result:"<<factorial(x)<<endl;
                break;

            case 3:
                cout<<"Enter number:";
                cin>>x;
                cout<<"Result:"<<log(x)<<endl;
                break;

            case 4:
                cout<<"Enter base and power:";
                cin>>x>>y;
                cout<<"Result:"<<pow(x,y)<<endl;
                break;

            case 5:
                exit(0);
        }
    }
}

