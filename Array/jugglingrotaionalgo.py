def leftrotate(arr, n, k):
    k = k % n
    g = gcd(n, k)
    for i in range(g):
        temp = arr[i]
        j = i
        while(1):
            d = (j+k) % n
            if(d == i):
                break
            a[j] = arr[d]
            j = d
        arr[j] = temp


def gcd(n, k):
    if(k == 0):
        return n
    elif(n < k):
        return gcd(k, n)
    else:
        return gcd(k, n % k)


def printarray(arr, n):
    print("Array rotation using Jumbling algorithm is:")
    print (arr)


print("Enter the array values")
a = list(map(int, input().split(" ")))
n = len(a)
print("Enter the value for k rotation")
k = int(input())

leftrotate(a, n, k)
printarray(a, n)
