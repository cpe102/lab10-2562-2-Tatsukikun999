#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int x;
    string y;
    string a[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int b = rand()%9;
    cout<<"You will get "<< a[b]<<" in this 261102.";
    return 0;

}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
