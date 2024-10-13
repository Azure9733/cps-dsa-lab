# Import libraries required
import numpy as np
# initialize input list and index list
test_list = [9, 4, 5, 8, 10, 14]
index_list = [1, 3, 4]
# print original lists
print("Original list : " + str(test_list))
print("Original index list : " + str(index_list))
# use numpy.take() to retrieve elements from input list at given indices
res_list = np.take(test_list, index_list)
# print resultant list
print("Resultant list : " + str(res_list))