/*
a program to calculate the amount of discount a customer gets based on the total amount purchased by them
the discounts are offered as follows:
    i) above 50000 : 30% discount
    ii) 49999 to 40000 : 25% discount
    iii) 39999 to 20000 : 20% discount
    iv) 19999 to 10000 : 15% discount
    v) 9999 to 1 : 0% discount
*/

#include <iostream>
using namespace std;

int main()
{
    int total_cost;
    cout << "enter the total amount you have purchased" << endl;
    cin >> total_cost;

    float amount_to_be_paid = 0;

    if (total_cost >= 50000)
    {
        cout << "you get a discount of 30% " << endl;
        amount_to_be_paid = total_cost - (total_cost * (0.3));
        cout << " the amount you have to pay : " << amount_to_be_paid << endl;
        cout << "thanks for shopping" << endl;
    }
    else if (total_cost >= 40000 && total_cost <= 49999)
    {
        cout << "you get a discount of 25% " << endl;
        amount_to_be_paid = total_cost - (total_cost * (0.25));
        cout << " the amount you have to pay : " << amount_to_be_paid << endl;
        cout << "thanks for shopping" << endl;
    }
    else if (total_cost >= 20000 && total_cost <= 39999)
    {
        cout << "you get a discount of 20% " << endl;
        amount_to_be_paid = total_cost - (total_cost * (0.2));
        cout << " the amount you have to pay : " << amount_to_be_paid << endl;
        cout << "thanks for shopping" << endl;
    }
    else if (total_cost >= 10000 && total_cost <= 19999)
    {
        cout << "you get a discount of 15% " << endl;
        amount_to_be_paid = total_cost - (total_cost * (0.15));
        cout << " the amount you have to pay : " << amount_to_be_paid << endl;
        cout << "thanks for shopping" << endl;
    }
    else if (total_cost >=1 && total_cost<=9999)
    {
        cout << "you do not get any discount, sorry! " << endl;
        cout << " the amount you have to pay : " << total_cost << endl;
        cout << "thanks for shopping" << endl;
    }
    else{
        cout<<"invalid amount"<<endl;
    }
}