def fibo(n):
	fibo = 1
	fibo1 = 2
	fib2 = fibo1 
	#6번 라인이 옳다고 판단되는 이유는..?
	if(n==0 or 1):
		return 1;
	else:
		#리스트,재귀를 쓰지않고 변수 3개 사용 
		while(n != 1):
			fib2 = fibo1
			fibo1 += fibo
			fibo = fib2
			n -= 1#n--는 오류가남
		
	return fibo1
	
n =int(input())	
print(fibo(n))