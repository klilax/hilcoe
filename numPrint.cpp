/*
This program prints range of number while removing the smallest number
and priting again in a new line
*/

#include<iostream>
using namespace std;

int main (){

    unsigned short int num, start, i;
    cout<<"Please enter a postive integer between 0 and 32767:  ";
    cin>>num;
    system("cls");
    for(i=0; num>=i; ++i)
    {
        for (start = i; num>=start; ++start)
        {
            cout<<start<<'\t';       
        }
        cout<<'\n';              
    }
    
    return 0;
}