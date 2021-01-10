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
int live_people(int a, int b){}
    int people[b];
    for(int i=0;i<b;i++)
        people[i] = i+1;
    
    for(int j=0;j<a;j++){
        for(int i=0;i<b;i++){
            if(i>=1)
                people[i]+=people[i-1];//people[1]=people[0]+2, people[2]=people[1]+3=people[0]+2+3
    }
    }
    return people[b-1];
  
    /*
ex)10층사람
9층 1+b 필요..
people이라는 변수에 9층 1,...b호 더해주는거 return
9:1+9:2+9:3+9:4+9:b//밑으로 내려가는 방식은 층마다 공식만드는것과 마찬가지
=8:1*b+8:2*(b-1)+8:3*(b-2)
=7:1*(b+b-1+..1)+7:2(b-1+..1)
=6:1*()
크기가 b인 배열을 만들어서 1,2,3층..의 사람을 저장
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