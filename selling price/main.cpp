//
//  main.cpp
//  selling price
//
//  Created by tenzin choten on 18/12/23.
//

#include <iostream>
using namespace std;

int flag = 0,per = 0;
int s,c;

void profit(int &a){
        per = s * 0.1;
        s +=per;
    cout<<"Selling price after applying 10% tax : "<<s<<endl;
}
void loss(int &b){
        per = s * 0.2;
        s += per;
        cout<<"Selling price after applying 20% tax : "<<s<<endl;
}

int main() {
    
    void profit(int &a);
    void loss(int &b);
    
    cout<<"enter the selling price\n";
    cin>>s;
    
    cout<<"enter the cost price \n";
    cin>>c;
    
    if(s - c > 0)
        flag = 1;
    else
        flag = 0;
    
    if(flag == 1)
        profit(s);
    else
        loss(s);
    
    return 0;
}
