//BOJ 2775 https://www.acmicpc.net/problem/2775
#include <iostream>
using namespace std;
/*
입력)테스트케이스 개수 -> a층 b호 입력(a,b) X 테케 개수
출력)a층 b호에 몇명이 살아야하는지
(자신의 아래(a-1)층의 1호부터 b호까지 사람들의 수의 합만큼 사람들을 데려와 살아야 한다)
(0층부터 있고 각층에는 1호부터 있으며, 0층의 i호에는 i명이 산다.)
0층 ->  b 출력
1층 b호 ->1+...b 명(b(b+1)/2)
2층 b호 -> 1*2/2+ 2*3/2 + 3*4/2....b*(b+1)/2 //1+3+6+10+15=1+(1+2)+(1+2+3)+(1+2+3+4)
3층 b호 -> 1+(1+(1+2))+(1+(1+2)+(1+2+3))(1층 이후에는 계산이 어려움...<-재귀를 사용하자!)
b=3
0층 3
1층 6
2층 10//2호:4
3층 1+ 4+ 10 =15 // 1호: 1 2호:1+4=5
4층  1+ 5 +15 = 21

*/
int live_people(int a, int b){//재귀를 사용함
/*
ex)10층사람
9층 1+b 필요..
people이라는 변수에 9층 1,...b호 더해주는거 return

*/

}
int main(){
    int test_num,a,b;
    cin >> test_num;
    for(int i=0;i<test_num;i++){
        cin >> a>> b;
        cout<<live_people(a,b)<<endl;

    }

    return 0;
}