def create_list_of_tuples(lst1,lst2):
    result=[]
    for i in range(len(lst1)):
        tuple_element=(lst1[i],lst2[i])
        result.append(tuple_element)
    return result
list1=[1,2,3]
list2=['a','b','c']
list_of_tuples=create_list_of_tuples(list1,list2)
print(list_of_tuples)
