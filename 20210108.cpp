//BOJ 1085
#include <iostream>
using namespace std;
/*
1.원-점 거리 구하듯이 직사각형 무게중심-점거리를 구하기!
대신 무게중심-점 직선을 구해야됨 -> 문제에서 범위가 주어졌
2. x,y중 1. w,h에 가까운 숫자를 구하고(w-x>?h-y) 2.가까운숫자가 return
*/

int main(){
    int x,y,w,h;
    cin>>x>> y>> w>> h;
    if(w-x < h -y)
        cout << w-x <<endl;
    else
        cout << h-y <<endl;


    return 0;
}