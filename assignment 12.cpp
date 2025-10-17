#include <iostream>
using namespace std;

class online_shopping {
public:
string item_name;
int quantity;
float price;
};

class shipping_details {
public:
float shipping_charge = 10.99;
};

class bill : public online_shopping,public shipping_details {
public:
void input(){
    cout<<"enter item name"<<endl;
    cin>>item_name;
    cout<<"enter quantity"<<endl;
    cin>>quantity;
    cout<<"enter price"<<endl;
    cin>>price;

}
void display()
{
float total = price + shipping_charge;
cout<<"Item : "<<item_name<<endl;
cout<<"Quantity : "<<quantity<<endl;
cout<<"Price : Rs. "<<price<<endl;
cout<<"Shipping Charge : Rs. "<<shipping_charge<<endl;
cout<<"Total : Rs. "<<total<<endl;
}
};
int main(){
bill b1;
b1.input();
b1.display();
}

