# Function to create a list of tuples
def create_list_of_tuples(lst1, lst2):
    result = [] # Empty list to store the tuples
    for i in range(len(lst1)):
        # Create a tuple from corresponding elements
        tuple_element = (lst1[i], lst2[i])
        result.append(tuple_element) # Append the tuple to the list
    return result
# Example usage
list1 = [1, 2, 3]
list2 = ['a', 'b', 'c']
list_of_tuples = create_list_of_tuples(list1, list2)
print(list_of_tuples)