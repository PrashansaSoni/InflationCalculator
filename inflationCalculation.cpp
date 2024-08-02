#include<iostream>
using namespace std;

class InflationCalc{
    public:
    float currentValue;
    float inflationRate;
    int years;
    
     InflationCalc(){
        currentValue = 0;
        inflationRate = 0;
        years = 0;
     }

     InflationCalc(float cv , float iRate , int yr ){
        currentValue = cv;
        inflationRate = iRate;
        years = yr;
     }

    float expo(float a,int b){
    float ans = 1;
    if(b==0){
        return 1;
    }

    else if(b==1){
        return a;

    }

    else{
        ans *= a;
        ans = expo(a,b/2);
    }

    if(b%2==0){
        return (ans *= ans);
    }

    else{
      return ( ans = ans*ans*a);
    }
}

float inflationCalcultor(){
 return currentValue*expo(1+(inflationRate/100),years);
}
};



int main(){
    cout<<"    Inflation calculator   "<<endl;

    

    InflationCalc If(500,8,2);
    float futureValue;
    futureValue = If.inflationCalcultor();

    
    cout<<"future value is "<<futureValue;




}