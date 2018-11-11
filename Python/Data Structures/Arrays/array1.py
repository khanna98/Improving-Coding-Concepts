# To write/use the array data structure we use the array module
# from array import *
# arrayName = array(typecode, [Initializers])

from array import *
array1 = array('i',[10,20,30,40,50]) # Here 'i' stands for Signed integer of size 2 bytes

for x in array1:
	print(x)
