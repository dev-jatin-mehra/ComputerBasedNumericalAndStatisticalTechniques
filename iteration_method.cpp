#include<bits/stdc++.h>
using namespace std;

#define acc 0.00001

double f(double x){
    //original eqan
    return x*x*x+x*x-1;
}

double g(double x){
    return 1.0/pow(x+1,1.0/2.0);
}

int main(){
    double x0=0.75;
    double x1;
    int iteration=0;

    while(iteration<100){
        x1=g(x0);
        if(fabs(x1-x0)<acc){
            cout<<"The root is:"<<x1;
            return 0;
        }
        x0=x1;
        iteration++;
    }
    cout<<"The root is:"<<x1;
    return 0;
}