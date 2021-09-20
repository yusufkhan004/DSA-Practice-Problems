fact = 1;
i = 847;
while i>0:
    fact = fact*i
    i = i-1

res = [];
while fact>0:
    res.append(fact%10)
    fact //=10;

print(res[::-1])