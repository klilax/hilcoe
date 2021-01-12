/*
This program divides the maximum number with the minumum
written by Khalil
written by 01/05/2021
*/

#include<iostream>
using namespace std;


int main (){
    int a, b, c, div ;

    cout<<"Please enter the first number: ";
    cin>>a;
    cout<<"Please enter the second number: ";
    cin>>b;
    cout<<"Please enter the third number: ";
    cin>>c;

    system ("cls");

    (a>b && b>c && a>c) ? div = a/c : 
    (a>b && b<c && a>c) ? div = a/b :
    (b>a && b>c && a>c) ? div = b/c :
    (b>a && b>c && a<c) ? div = b/a :
    (c>a && b<c && a<b) ? div = c/a :
    div = c/b;
    
    cout<<div<<endl;


    return 0;
}