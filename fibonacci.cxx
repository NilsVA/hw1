#include <iostream>

using namespace std;

int main(){
int N=0;
int f1=0;
int f2=1;
int f3=0;
cout << "N = " << endl;
cin >> N;

  for(int i=1; i<N; i++){
     f3 = f1+f2;
     f1=f2;
     f2=f3;
     //cout << "F = " << f3 << endl;
  }
    
cout << N << "-th Fibonaccinumber is equal to " << f3 << endl;
}
