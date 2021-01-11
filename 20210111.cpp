//출력결과 X
//BOJ 20126 https://www.acmicpc.net/problem/20126
#include <iostream>
using namespace std;
/*
오류3)
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
    while(finish != -1){//오류3)
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
        }
        for(int j=save;j<save+total_time;j++){//i를 불러오지 못하므로 save변수 활용
            if(test[j]==-1){
                cout<<-1<<endl;
                break;
                }
            if(j==save+test_time-1)
                cout<<save<<endl;
        
        }
        break;
    
}
    

    return 0;


    }
  
