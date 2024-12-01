#include<bits/stdc++.h>
using namespace std;
#define accuracy 0.0001

double func(double x){
    return x*x - 12;
}

void bisection(double a, double b){
    int count=0;
    if(func(a)*func(b)>=0){
        cout<<"Correct the values of a and b !"<<endl;
        return ;
    }   
    double c;
    while((b-a)>=accuracy){
        count++;
        c=(a+b)/2;
        if(func(c)== 0.0){
            break;
        }
        else if(func(c)*func(a)<0){
            b=c;
        }
        else{
            a=c;
        }
    }
    cout<<"The value of root is :"<<c<<endl;
}

int main(){
    double a=3,b=4;
    bisection(a,b);
    return 0;
}