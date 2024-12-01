#include<bits/stdc++.h>
using namespace std;

#define acc 0.0001

double f(double x){
    return x*x*x*x-x-10;
}
double g(double x){
    return 4*x*x*x-1;
}

int main(){

    double x=2;
    //newton portion
    double h = f(x)/g(x);
    while(abs(h)>=acc){
        h=f(x)/g(x);
        x=x-h;
    }
    cout << "Root of the eqa is:"<<x<<endl;
    return 0;
}