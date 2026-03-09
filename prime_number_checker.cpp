#include <iostream>

using namespace std;

int main() {
    int num;
    int isPrime = 1; 

    cout << "Enter a positive number: ";
    cin >> num;
  
    if (num == 0 || num == 1) {
        isPrime = 0;
    }

    for (int i = 2; i < num; i++) {
        
        if (num % i == 0) {
            isPrime = 0; 
            break; 
        }
    }

  
    if (isPrime == 1) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
