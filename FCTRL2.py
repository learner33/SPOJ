def factorial(n):
	if n <= 1:
		return 1
	else:
		return n * factorial(n-1) 
t = int(input())
while t>0:
	n = int(input())
	print factorial(n)
	t = t-1
