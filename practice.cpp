#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int number=1;
    string name="F\n";
    string name1;
    char plusOrMinus='+';
    if (number){
        cout<<name;
    }
    enum Days {Mon, Tue, Wed, Thur, Fri=1};
    Days workDay, vacationDay;
    vacationDay=Fri;
    number ? name1='G':name1='F';
    cout<<name1;
    switch (vacationDay){
    case 1: cout << "vacationDay";
            break;
    default : cout << "WorkDay";
}

}