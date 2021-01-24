#include<iostream> 

using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=78;
    //int a=4,b=15;
    float pi=3.15;
    char c='u';
    bool is_true =false;
    sum(); 
    cout<<glo<< is_true;
    //cout<<"tutorial 4. \nhere the valuue of a is"<<a<<".\nthe value of b is "<<b;
    //cout<<"\nthe value of c is"<<c;
    return 0;
}