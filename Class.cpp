#include<iostream>
using namespace std;
class Numbers{
    private:
           int a,b;
    public:
           void readmembers(void);
           void printmembers (void);
           int calladdition (void);
};
void Numbers::readmembers(void)
{
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b>>endl;
}
int Numbers::printmembers(void)
{
    cout<<" a = "<<a<<endl;
    cout<<" b = "<<b<<endl;
}
int numbers:: calladdition(void)
{
    return (a+b);
}
int main(){
Numbers Num;
int add;
num.readnumbers();
add = num.calladditiion();
num.printnumber();











    return 0;
}