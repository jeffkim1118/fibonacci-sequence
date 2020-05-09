#include<iostream>
using namespace std;

void fib(int c){
    int a = 0;
    int b = 1;
    int term = 0;
    cout<< "Here's the list of fibonacci sequence"<< endl;
    for(int i = 0; i <= c -1; i++){
        cout << a << endl;
        term = a + b;
        a = b;
        b = term;     
    }
}

int main () {
    
    int c;

    cout << "Fibonacci (Enter the number of elements): "; 
    cin >> c;

    if(c <= 0){
        cout << "The program can't process. Please check the term number again!";
    }
    else if(c == 1){
        cout << "Here's the list of fibonacci sequence" << endl;
        cout << 0 << endl;
    }
    else if(c != int(c)){
        cout << "The value is not an integer" << endl;
    }
    else
    {
        fib(c);
    }
}



