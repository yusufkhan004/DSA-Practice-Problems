# def simple_sieve(n):
#     primes = []
#     isprime = [None] * (100003+1)
#     for i in range(100003+1):
#         isprime[i] = True
#     isprime[0], isprime[1] = False, False
#     for i in range(2,int(100003**0.5)+1):
#         if isprime[i] == True:
#             for j in range(i*i,100003+1,i):
#                 isprime[j] = False
#     for i in range(100003+1):
#         if isprime[i] == True:
#             primes.append(i)
#     return primes[n-1]

# def howSum(targetSum, numbers, memo = {}):
#     if targetSum in memo:
#         return memo[targetSum]

#     if targetSum == 0:
#         return []

#     if targetSum < 0:
#         return None

#     for num in numbers:
#         remainder = targetSum - num
#         remainderResult = howSum(remainder, numbers, memo)
#         if remainderResult != None:
#             memo[targetSum] = remainderResult + [num]
#             return memo[targetSum]

#     memo[targetSum] = None
#     return None


# x = int(input())
# print(simple_sieve(x))

n = int(input())
s = input().split()
c = 0
for str in s:
    l = len(str)
    m = l//2
    if l >=2 and str==str[::-1]:
        c += 1
    elif l%2 == 0:
        s1 = str[:m]
        s2 = str[m:]
        if s1 == s1[::-1] or s2==s2[::-1]:
            c += 1
    elif l%2 != 0:
        s1 = str[:m]
        s2 = str[m+1:]
        if s1 == s1[::-1] or s2==s2[::-1]:
            c += 1
print(c)