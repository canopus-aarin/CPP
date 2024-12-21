#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter ;

    public:
    void incounter() {counter=0;}
    void setprice();
    void displayprice();
};

void shop::setprice()
{
    cout<<"Enter id of your item no"<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item" <<endl;
    cin>>itemprice[counter];
    counter++;
}
void shop::displayprice()
{
    for(int i=0; i<counter; i++)
    {
        cout<<"The price of item with id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
    }
}


int main()
{
    shop kai;
    kai.incounter();
    kai.setprice();
    kai.setprice();
    kai.setprice();
    kai.displayprice();



return 0;
}