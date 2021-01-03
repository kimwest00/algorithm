//BOJ https://www.acmicpc.net/problem/18238
#include <iostream>
#include <string>
using namespace std;
//!번호마다 숫자를 설정(a-1,b-2..)->배열의 인덱스 활용하면 될듯!
//A->word[0]->word[1]로 해야되는데 word에서 alphabet에서 일치하는거 찾기에는 너무 오래걸림=>아스키코드 이용하자! 
//거리계산(큰숫자- 작은숫자(어차피 절반이상 거리이면 26-(큰숫자- 작은숫자))
//만약 차이가(if 크기 24)12이상이라면 24-차이하는방식으로..
int main() {
	char Alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'N', 'M', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	string word;
	cin >> word;//입력받은 문자열->아스키코드 숫자로 변환하여 비교해야..
	int n = word.length();
	int a = 'A';
	int w = word[0];
	int w1, w2;
	int count=0;
	if ((w - a) < 0) {
		if ((a-w) >= 13) {
			count += 25 - (a - w);
		}
		else
			count += a - w;
	}
	else{
		if ((w - a )>= 13) {
			count += 25 - (w - a);
		}
		else
			count += a - w;
	}
	for (int i = 1; i < n; i++) {
		w1 = word[i-1];
		w2 = word[i];
		if ((w2 - w1) < 0) {
			if ((w2 - w1) >= 13) {
				count += 25 - (w1 - w2);
			}
			else
				count += w1 - w2;
		}
		else {
			if ((w2 - w1) >= 13) {
				count += 25 - (w2 - w1);
			}
			else
				count += w2 - w1;
		}
	}
	cout << count;

	return 0;
}