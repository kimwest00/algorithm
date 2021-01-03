//BOJ https://www.acmicpc.net/problem/18238
#include <iostream>
#include <string>
using namespace std;
int distance(int sub1, int sub2,int count) {
	if ((sub2 - sub1) < 0) {
		if ((sub1 - sub2) >= 13) {
			count += 26 - (sub1 - sub2);
		}
		else
			count += sub1 - sub2;
	}
	else {
		if ((sub2 - sub1) >= 13) {
			count += 26 - (sub2 - sub1);
		}
		else
			count += sub2- sub1;
	}
	return count;
}
/*
문제)코드 길이 너무 길다<- if문을 함수로 따로 빼보자 
*/

int main() {
	//안써도 되는데 쓴게 아까워서..^^:;char Alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'N', 'M', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	string word;
	cin >> word;//입력받은 문자열->아스키코드 숫자로 변환하여 비교해야..
	int n = word.length();
	int a = 'A';//아스키코드 별로 안익숙한데 쓰는법 잘 기억하자!!! 
	int w = word[0];
	int w1, w2;
	int count=0;
	count= distance(a, w, count);
	for (int i = 1; i < n; i++) {
        
		w1 = word[i-1];
		w2 = word[i];
		count = distance(w1, w2, count);
	}
	cout << count;

	return 0;
}