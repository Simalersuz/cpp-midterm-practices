#include <iostream>
using namespace std;

int main() {

    cout<< "---MENU---"<<endl;
    cout<< "1. Aidat/Gelir Ekle"<<endl;
    cout<< "2. Malzeme/Gider Çıkışı Yap"<<endl;
    cout<< "3. Kasa Bakiyesini Görüntüle"<<endl;
    cout<< "4. Gün Sonu Kapanışı (Çıkış)"<<endl;

    int num;
    int money;
    int gider;
    int totalMoney=0;
    int count=0;

    cout<<"Enter your choice: ";
    cin>>num;
    while(num != 4){
        if(num == 1){
            cout<<"Enter money: ";
            cin>>money;
            totalMoney = totalMoney + money;
            count++;
        }
        if(num==2){
            cout<<"Enter money: ";
            cin>>gider;
            if(gider>totalMoney){
                cout<<"ERROR, Not Enough money!!"<<endl;
            }
            if(gider<totalMoney){
                totalMoney = totalMoney - gider;
                count++;
            }
        
        }
        if(num==3){
            cout<<"Total Money: "<<totalMoney<<endl;
        }
        if(num==4){
            break;
        }
        if(num>4 || num<1){
            cout<<"Invalid Choice";
        }
       

        cout<<"Enter your choice: ";
        cin>>num;
    }

    cout<<"Gelir/Gider İşlem Sayısı: "<<count<<endl;
    cout<<"Total Money: "<<totalMoney<<endl;
    





    return 0;
}
