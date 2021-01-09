//BOJ 1924
#include <iostream>
using namespace std;
/*
같은 해에 한정하여, 요일을 계산하는 프로그램
달별 요일수(28,31,30)을 고려해서 7의 나머지에 따라 판별
*/
int main(){
    int month, day, total;
    cin >> month >> day;
    for(int i=1;i<month;i++){
        if(i == 1 || i == 3 || i==5 || i==7 ||i==8||i==10 ||i==12)
            total+=31;
        else if(i == 4 || i == 6 || i==9 || i==11 )
            total += 30;
        else
            total += 28;
    }
    total += day;
    total %= 7;
    if(total == 0)
        cout << "MON";
    else if(total == 1)
        cout << "TUE";
    else if(total == 2)
        cout << "Wed";
    else if(total == 3)
        cout << "Thu";

    else if(total == 4)
        cout << "Fri";
    else if(total == 5)
        cout << "Sat";
    else if(total == 6)
        cout << "Sun";



}