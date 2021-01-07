//BOJ 8958
#include <iostream>
#include <string>
using namespace std;
/*
1.문자열 개수 입력->문자열 입력
2. O->+1, if O가 연속됐다면->연속된 O만큼 점수+
2-> 여러개 0가 있는지 판별+0몇개있는지 계산 
vs 문자열에서 하나의 요소를 판별할때 앞뒤에 뭐있는지 판별및 점수더하기(!)
*/
int score_cal(string ox){
    int n = sizeof(ox);
    int count = 0;
    int score =0;
    for(int i=0;i<n;i++){
        if(ox[i]=='O'){
            count +=1;
            score +=1;
            cout<<"점프!"<<endl;//이거 써보니 oxoxoxox여도
        }
        else{
            score += count;//여기에 더해지네
            count = 0;
        }
    }
    return score;

}
int main(){
    int num;
    cin >> num;
    string oxquiz[num];
    for(int i=0;i<num;i++){
        cin >> oxquiz[i];//문자열 입력받기
        cout <<score_cal(oxquiz[i])<<endl;
    }

    return 0;
}