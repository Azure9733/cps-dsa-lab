print("====================LOADING====================")
print("=  =  *      ===     =====   =  =  ===== ===== ")
print("=  =  =     =   =       =    =  =  =  =  =     ")
print("====  =    =======     =     =  =  ===   ===== ")
print("=  =  =   =       =   =      =  =  ==    =     ")
print("=  =  =  =         = =====   ====  =   = ===== ")
def sortdescthirdvar(arr):
    n = len(arr)
    for i in range(n):
        for j in range(i + 1, n):
            if arr[i] < arr[j]:
              
                temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
    return arr
size = int(input("Enter the number of elements in the array: "))
arr = []
print(f"Please enter {size} numbers:")
for _ in range(size):
    element = int(input())
    arr.append(element)
sorted_arr = sortdescthirdvar(arr)
print("Sorted array in descending order using an extra variable:", sorted_arr)
