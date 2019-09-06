#include<iostream>
#include<bits\stdc++.h>

using namespace std;

float* randomNumber(float seed){
    float *vals;
    *vals = seed;
    float temp;

    for(int i = 0; i < 100; i++){
        if(i == 0)
            temp = seed;
        else   
            temp = *(vals-1);
        for(int j = 0; j < 10; j++){
            temp *= 3;
            temp += 0.0516;
            if(temp > 1) temp -= (int)temp;
            cout<<"";
        }

        *vals = temp;
        vals++;
    }

    vals -= 10;
    return vals;
}

int main(){

    float seed;
    cin>>seed;

    float *ans = randomNumber(seed);

    cout<<fixed<<endl;

    for(int i = 0; i < 10; i++) cout<<*(ans+i)<<endl;
}