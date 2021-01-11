//BOJ 20126 https://www.acmicpc.net/problem/20126
#include <iostream>
using namespace std;
/*
N:테스트케이스 개수 M:시험 시간 S:강의실 대여 시간
x1:시험시작시간 y1:시험 시간
*알고리즘 시험은 "answer "분부터 M분 동안 치룬다.
test[total_time]
*/
int main(){
    int test_num,test_time,total_time;
    cin >> test_num >> test_time >> total_time;
    int x[test_num],y[test_num],test[total_time];
    int test[total_time]={0};
    for(int i=0;i<test_num;i++){
        cin>>x[i]>>y[i];
        for(int j=x[i];j<=x[i]+y[i];j++)
            test[j]=-1;
    }
    int count = 0;
    for(int i=0;i<total_time;i++){
        if(test[i]!=-1)
            for(int j=i;j<=i+total_time;j++){
                if(test[j]==-1){
                    cout<<-1<<endl;
                    break;
                }
                if(j==total_time+i)
                    cout<<i<<endl;
    
            }



    }
      
    return 0;
    }
