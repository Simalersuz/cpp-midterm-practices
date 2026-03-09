#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    
    int maxNum = 5; 

   
    cout << "   "; 
    for (int i = 1; i <= maxNum; i++) {
        cout << setw(3) << i; 
    }
    cout << endl;

   
    cout << " "; 
    for (int i = 1; i <= maxNum; i++) {
        cout << " --";
    }
    cout << endl;

   
    for (int row = 1; row <= maxNum; row++) {
        
        
        cout << setw(2) << row << "|";

        
        for (int col = 1; col <= maxNum; col++) {
            

            cout<< setw(3)<< row*col;
            
            
        }
        cout << endl; 
    }

    return 0;
}
