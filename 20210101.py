# while문-> 두 수중 큰수-작은수로 계산해주고, 두 수중 0이 나올때까지 반복
def gcd_sub(a, b):
	while(a*b !=0):
		if(a>b):
			a -= b
		else:
			b -= a
	if(a*100 != 0):
		return a
	else:
		return b
	
			

# while문으로 두 수중 큰 수를 작은수로 나누어줌
def gcd_mod(a, b):
	while(a*b != 0):
		if(a>b):
			a %= b
		else:
			b %= a
	if(a*100 != 0):
		return a
	else:
		return b
# 재귀 함수를 이용
# 재귀 함수 타임에러
def gcd_rec(a, b):
	while(a*b != 0):
		if(a>b):
			gcd_rec(a%b,b)
		else:
			gcd_rec(a,b%a)
	if(a*100 != 0):
		return b
	else:
		return a
	
# a, b를 입력받는다
# gcd_sub, gcd_mod, gcd_rec을 각각 호출하여, x, y, z에 리턴값을 저장한다
a,b = input().split()
a=float(a)
b = float(b)
a = int(a)
b = int(b)
x = gcd_sub(a,b)
y = gcd_mod(a,b)
z = gcd_rec(a,b)

print(x, y)