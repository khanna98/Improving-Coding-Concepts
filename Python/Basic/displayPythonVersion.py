# Q. Write a Python program to get the Python version you are using.

# For displaying the Python version we first need to import sys module
import sys

print("Python version : ",end=" ")
print(sys.version) # Using the version function 
print("Version info : ",end=" ")
print(sys.version_info) # Using the version_info function