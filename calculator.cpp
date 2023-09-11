#include<iostream>
using namespace std;
template <class t>
class calculator
{
    private:
    t num1,num2;
    public:
    calculator(t n1, t n2)
    {
    num1=n1;
    num2=n2;
}
 void displayresult()
{
    cout<<"number:"<<num1<<"and"<<num2<<","<<endl;
    cout<<num1<<"+"<<num2<<"="<<addition()<<endl;
    cout<<num1<<"-"<<num2<<"="<<subtraction()<<endl;
    cout<<num1<<"*"<<num2<<"="<<multiplication()<<endl;
    cout<<num1<<"/"<<num2<<"="<<divide()<<endl;
    cout<<num1<<"%"<<num2<<"="<<remainder()<<endl;
}
t addition()
{
    return num1+num2;
}
t subtraction()
{
    return num1-num2;
}
t multiplication()
{
    return num1*num2;
}
t divide()
{
    return num1/num2;
}
t remainder()
{
    return num1 % num2;
}
};
int main()
{
    calculator<int>intcalc(2,4);
    calculator<int>intcalc1(3,4);
    cout<<"int result:"<<endl;
    intcalc.displayresult();
    cout<<"int result:"<<endl;
    intcalc1.displayresult();
    return 0;
}