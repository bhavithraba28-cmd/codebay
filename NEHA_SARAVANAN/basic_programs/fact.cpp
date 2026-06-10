#include <iostream>
using namespace std;


//factorial
void fact(){
    int n1;
    int facto = 1;
    cout << "Enter a number for factorial : ";
    cin >> n1;
    for(int i=1; i<=n1 ; i++){
        facto *= i;
    }
    cout << "Factorial = " << facto;
}



//fibonacci
void fibo() {
    int n2;
    cout << "Enter number for fibonacci: ";
    cin >> n2;
    int a=0, b=1, next;
    cout << "Fibonacci series: ";
    for(int j=0; j<n2 ; j++){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

}


int main(){
    fact();
    cout<<"\n";
    fibo();

    return 0;
}
