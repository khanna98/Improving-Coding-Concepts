# Q . Write a Python program to display the current date and time.
# Sample Output : 
# Current date and time : 
# 2014-07-05 14:34:14

# First import the datetime module
import datetime

now  = datetime.datetime.now() # Use the now() function in datetime class
print("Current Date and Time : ")
print(now.strftime("%Y-%m-%d %H:%M:%S")) # print in the given format