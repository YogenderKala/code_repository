// find factorial of n using recursion
#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact = factorial(n-1);
    return n*fact;
}
int main(){
    int n;
    cin>>n;
    cout<<"Factorial of "<<n<<" is : "<<factorial(n);
    return 0;
}