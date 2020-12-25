#include<iostream>
#include<string>
using namespace std;

int main(){
cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
cout << "?????: ";
string x;
getline(cin,x);
cout << "Fahsai: Wow!!! " << x << " is a really cool name." << endl;
cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
cout << x << ": ";
int y;
cin >> y;
cin.ignore();
cout << "Fahsai: I think you may be GEAR ";
int c = (y/10000000)-12;
cout << c << ". I have a free movie ticket for you." << endl;
cout << "Fahsai: Let's go to the cinema together!!!" << endl << "Fahsai: What movie do you want to watch?" << endl;
cout << x << ": ";
string v;
getline(cin,v);
cout << "Fahsai: So....which day are you free to go with me?" << endl;
cout << x << ": ";
string b;
getline(cin,b);
cout << "Fahsai: " << b << "....that is OK!!! I'm looking forward to watching " << v << " with you." << endl;
cout << x << ": ";
string m;
getline(cin,m);
cout << "Fahsai: 555+ see you " << b << ". Bye Bye \\(^ ^)/";
}