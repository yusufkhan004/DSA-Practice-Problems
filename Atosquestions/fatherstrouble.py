
input1 = int(input())
input2 = int(input())
input3 = [4,1,3,3,1]

yes = 0
no = 0
for i in set(input3):
    if input1 % i == 0:
        yes+=1
    else:
        no=i
if yes == 0:
    print("No {} ".format(str(no)))
else:
    print("Yes {} ".format(str(input2)))