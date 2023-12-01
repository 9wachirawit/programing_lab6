#include<iostream>
using namespace std;

int main(){
    int i = 0,n,Ev = 0,Ob = 0;
    while(i == 0){
    cout << "Enter an integer: ";
    cin >>  n;
    if(n % 2 == 0 && n != 0){
        Ev = Ev + 1;
    }else if (n % 2 != 0 && n != 0) {
        Ob = Ob + 1 ;

    }else if (n == 0){
        i = 1;
    }
    }
    cout << "#Even numbers = "<< Ev;
    cout << "\n#Odd numbers = " << Ob;
    return 0;
}
