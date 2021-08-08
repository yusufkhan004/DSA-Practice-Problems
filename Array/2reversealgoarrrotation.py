def reverseArray(arr, start, end):
    while (start < end):
        temp = arr[start]
        arr[start] = arr[end]
        arr[end] = temp
        start += 1
        end = end - 1


def leftrotate(arr, d, n):
    if d == 0:
        return

    # incase d is greater than n
    d = d % n

    reverseArray(arr, 0, d-1)
    reverseArray(arr, d, n-1)
    reverseArray(arr, 0, n-1)


def printArray(arr):
    for i in arr:
        print(i, end=" ")


arr = [1, 2, 3, 4, 5, 6, 7]
d = 8
n = 7
leftrotate(arr, d, n)
printArray(arr)
