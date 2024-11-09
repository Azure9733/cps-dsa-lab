print("====================LOADING====================")
print("=  =  *      ===     =====   =  =  ===== ===== ")
print("=  =  =     =   =       =    =  =  =  =  =     ")
print("====  =    =======     =     =  =  ===   ===   ")
print("=  =  =   =       =   =      =  =  ==    =     ")
print("=  =  =  =         = =====   ====  =   = ===== ")
def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return mid
    return -1
def sort_and_search(arr, x):
    sorted_arr = sorted(arr)
    print("Sorted array:", sorted_arr)
    
    result = binary_search(sorted_arr, x)
    return result
size = int(input("Enter the number of elements in the array: "))
arr = []
print(f"Please enter {size} numbers:")
for _ in range(size):
    element = int(input())
    arr.append(element)
x = int(input("Enter the number to search for: "))
result = sort_and_search(arr, x)
if result != -1:
    print(f"Element is present at index {result}")
else:
    print("Element is not present in array")
