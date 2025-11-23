//input a string of length n and and count all the vowels in the given string
#include<iostream>
using namespace std;
int main(){
    string str[]={"sydney sweeney"}
    int count=0;
    int i = 0;
    while(str[i]!='\0'){
        if (str[i]=='a','e','i','o','u')
            count++;
            i++;
    }
    cout<<count;
}