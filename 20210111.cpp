//출력결과 X
//BOJ 20126 https://www.acmicpc.net/problem/20126
#include <iostream>
using namespace std;
/*
오류 1) test[]배열에서 대실된 시간대를 -1로 바꾸는 과정
(ex 0 1 이면 0만 -1로 바꿔야함<= 1부터는 대실이 가능하기때문)
오류 2)이중 for문 고려 x
break로 밖에있는 for문 탈출은 안된다고 생각했지만,
cout 되고 끝난다고 생각
*/
int main(){
    int test_num,test_time,total_time;
    cin >> test_num >> test_time >> total_time;
    int x[test_num],y[test_num];
    int test[total_time+1]={0};
    for(int i=0;i<test_num;i++){//오류1)for문 범위 수정
        cin>>x[i]>>y[i];
        for(int j=x[i];j<x[i]+y[i];j++)
            test[j]=-1;
        
    }

    int count = 0;
    int finish=0;
    int save;
    while(finish == -1)//오류2)함수처럼 출력(return)후 종료하기위해 while문 기능 추가
        for(int i=0;i<total_time;i++){
            if(test[i]!=-1){
                save =i;
                break;
                
            }
            else{
                if(i==total_time-1){
                    cout<< -1 <<endl;
                    finish = -1;
            }
        }
        for(int j=save;j<=save+total_time;j++){//i를 불러오지 못하므로 save변수 활용
            if(test[j]==-1){
                cout<<-1<<endl;
                finish = -1;
                }
            if(j==total_time+save)
                cout<<save<<endl;
        }
    
}

    return 0;


    }
  
