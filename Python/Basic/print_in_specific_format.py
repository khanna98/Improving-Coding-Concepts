# Q. Write a Python program to print the following string in a specific format (see the output). Go to the editor
# Sample String : "Twinkle, twinkle, little star, How I wonder what you are! Up above the world so high, Like a diamond in the sky.
#  Twinkle, twinkle, little star, How I wonder what you are" 
# Output :
#
# Twinkle, twinkle, little star,
# 	 How I wonder what you are! 
# 		 Up above the world so high,   		
# 		 Like a diamond in the sky. 
# Twinkle, twinkle, little star, 
# 	 How I wonder what you are

print("Twinkle, twinkle, little star,")
print("\t How I wonder what you are!") # Using escape sequences to match the format
print("\t\t Up above the world so high,") # Not using \n as it is a by default for print in Python
print("\t\t Like a diamond in the sky.") # \t stands for tabspace 
print("Twinkle, twinkle, little star,")
print("\t How I wonder what you are!")