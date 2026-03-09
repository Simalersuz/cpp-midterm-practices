#include <iostream>

using namespace std;

int main() {

    int kg;
    int people=0;
    int ligthPeople=0;

    cout<<"Please enter weight, for exit enter -1 : ";
    cin>>kg;

    while(kg != -1){

        people++;

        if(kg < 60){

            ligthPeople++;
        }

        cout<<"Please enter weight, for exit enter -1 : ";
        cin>>kg;
    
    }

    cout<<"Total people: "<< people << endl;
    cout<<"Weigth under 60: "<< ligthPeople<< endl;




    return 0;
}
