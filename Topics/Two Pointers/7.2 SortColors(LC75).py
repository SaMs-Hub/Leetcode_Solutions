// App1 O(n)
def sortColors(arr):
    low, medium, high = 0, 0, len(arr) - 1
    
    while (medium <= high):
        if (arr[medium] == 0):
            arr[medium], arr[low] = arr[low], arr[medium]
            low += 1;
            medium += 1;
        elif (arr[medium] == 1):
            medium += 1;
        else:
            arr[medium], arr[high] = arr[high], arr[medium];
            high -= 1;
            
    return arr
