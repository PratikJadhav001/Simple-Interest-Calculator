#include <iostream>
using namespace std;

void clearScreen(){
system("cls");
}
// Simple Interest Calculator
int main(){
clearScreen();

float principle,rate,time,interest;
string choice;

do{
cout<<"*------Simple Interest Calculator------*"<<endl;
cout<<"Enter the principle: ";
cin>>principle;
cout<<"Enter the rate: ";
cin>>rate;
cout<<"Enter the time: ";
cin>>time;

//Simple Interest Formula Applied
interest = (principle*rate*time)/100;
cout<<"The Simple Interest is : "<<interest<<endl;

cout << "\nDo you want to calculate again? (yes/no): ";
cin >> choice;

}while(choice == "yes" || choice == "YES" || choice == "Yes");

cout << "\nThank you for using Simple Interest Calculator!" << endl;

return 0;
} 
#include <iostream>
using namespace std;

void clearScreen(){
system("cls");
}
// Simple Interest Calculator
int main(){
clearScreen();

float principle,rate,time,interest;
string choice;

do{
cout<<"*------Simple Interest Calculator------*"<<endl;
cout<<"Enter the principle: ";
cin>>principle;
cout<<"Enter the rate: ";
cin>>rate;
cout<<"Enter the time: ";
cin>>time;

//Simple Interest Formula Applied
interest = (principle*rate*time)/100;
cout<<"The Simple Interest is : "<<interest<<endl;

cout << "\nDo you want to calculate again? (yes/no): ";
cin >> choice;

}while(choice == "yes" || choice == "YES" || choice == "Yes");

cout << "\nThank you for using Simple Interest Calculator!" << endl;

return 0;
}