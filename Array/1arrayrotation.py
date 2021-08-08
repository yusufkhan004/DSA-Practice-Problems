def leftrotate(arr, d, n):
    for i in range(d):
        leftrotatebyone(arr, n)


def leftrotatebyone(arr, n):
    temp = arr[0]
    for i in range(n-1):
        arr[i] = arr[i+1]
    arr[n-1] = temp


def printingarray(arr, n):
    for i in arr:
        print(i, end=" ")


arr = [1, 2, 3, 4, 5, 6, 7]
leftrotate(arr, 7, 7)
printingarray(arr, 7)
