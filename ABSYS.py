t = int(input())
index = 0
x = 0
for i in range(t):
	blank_line = raw_input()
	s = raw_input().split()
	for j in range(len(s)):
		if "machula" in s[j]:
			index = j
	if index == 0:
		x = int(s[4]) - int(s[2])   #converting str to int to perform arithmetic operations.
	elif index == 2:
		x = int(s[4]) - int(s[0])
	else:
		x = int(s[0]) + int(s[2])
 
	s[index] = str(x)   #since we cannot concatenate int and string while printing. Hence converting int to string.
 
	print s[0] + " + " + s[2] + " = " + s[4]
