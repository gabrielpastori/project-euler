/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#define ulli unsigned long long int
using namespace std;

ulli gdc(ulli a,ulli b){
    return (b==0? a: gdc(b,a%b));
}
ulli lcm(ulli a,ulli b){
    return (a*b)/(gdc(a,b));
}
int main(){
    ulli result=1;
    for(int i=1;i<=20;i++){
        result=lcm(i,result);
    }
    cout<<result<<endl;
}

// gdc : Greatest common divisor (https://en.wikipedia.org/wiki/Greatest_common_divisor)
// lcm : Least common divisor (https://en.wikipedia.org/wiki/Least_common_multiple)
