/*
list A에 있는 가장 큰 수를 찾는 재귀 함수 find_max(A, n)을 작성해보자
def find_max(A, n): # A[0] ~ A[n-1] 중 최대값을 찾아 리턴
	# 이를 위한 재귀 코드는 ?
*/
#include <iostream>
using namespace std;
/*
int find_max(int A, int n) {
    

}

int main(){
    int A[5]={5,2,7,10,1};
    int n = sizeof(A)/sizeof(A[0]);
    int answer = find_max(A,n);


    return 0;
}*/

int sum(int a, int b){
    //return a + (a+1) + ... + b
	if (a > b)
        return 0;
	else if (a == b)
        return a;
	int m = (a+b)/2;
	return sum(a, m) + sum(m+1, b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<sum(a, b)
}
