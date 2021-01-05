//BOJ 2750 https://www.acmicpc.net/problem/2750
/*
1. 입력(줄의개수, 그 개수만큼 숫자를 입력(<-for문으로 ))
2. 출력(오름차순으로 정렬한 후, 출력)
<-리스트에 정렬한후, 출력하자(?바로 출력할수있는방법?)
1.입력 N -> N만큼 for문으로 입력받기(배열에 바로 저장)
2. N만큼 for문 실행하며 정렬(이부분이 중요)
(최댓값만 구하는게 아니라 오름차순으로 정렬해야하므로)
1! 이중for문으로 여러차례 검사하자(앞뒤로 검사)

*/
#include <iostream>
using namespace std;

int main(){
int N;
int change;
cin >> N;//입력
int num_list[N];
for(int i=0;i<N;i++){
    cin >> num_list[i];
}

for(int j=0;j<N;j++){
    for(int i=0;i<N;i++){
        if(num_list[i]>num_list[i+1]){
            change =num_list[i];
            num_list[i]=num_list[i+1];
            num_list[i+1] = change;
    }

}
}

for(int i=0;i<N;i++){
    cout << num_list[i]<<endl;
}

    return 0;
}