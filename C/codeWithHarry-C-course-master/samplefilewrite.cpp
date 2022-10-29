#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

int main(){
    system("cls");
    char st[100];

    ofstream out;
    out.open("sample.txt");

    cout<<"Enter you name :"<<endl;
    cin.getline(st,40);
    out<<st;
    out<<endl;

    cout<<"Enter you age :"<<endl;
    cin.getline(st,40);
    out<<st;
    out<<endl;

    out.close();
    system("cls");

    return 0;


}