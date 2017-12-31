t = int(raw_input())
for i in range(t):
	s = raw_input().split() #list of strings splitted by space
	for j in range(3):
		s[j] = int(s[j]) #converting it to int as it is string at present
	sum = s[0] + s[1]
	n = (s[2]*2)/sum
	print n
	diff = s[1] - s[0]
	d = diff/(n-5)
	a = s[0] - 2*d
	i = 0
	for i in range(n):
		print a+(i*d),
	print " "
	
