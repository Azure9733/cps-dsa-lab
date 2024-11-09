import numpy as np
test_list=[9,4,5,8,10,14]
index_list=[1,3,4]
print("Original list:"+str(test_list))
print("Original index list:"+str(index_list))
res_list=np.take(test_list,index_list)
print("Resultant list:" +str(res_list))
