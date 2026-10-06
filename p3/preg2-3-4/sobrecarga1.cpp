#include<iostream>
using namespace std;

int suma(int a, int b){
  return a + b;
};
int suma(int a, int b, int c){
  return a + b + c;
}


int main(){
  int a=1, b=2, c=3;
  cout<<"Suma de dos numeros: "<<suma(a, b)<<endl;
  cout<<"Suma de tres numeros: "<<suma(a, b, c)<<endl;

  return 0;
}