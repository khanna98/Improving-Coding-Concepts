import urllib.request
def read_text():
	quotes=open("./movie_quotes.txt")
	contents_of_file=quotes.read()
	print(contents_of_file)
	quotes.close()
	check_profanity(contents_of_file)	
def check_profanity(text_to_check):
	connection=urllib.request.urlopen("http://www.wdylike.appspot.com/?q="+text_to_check)
	output=connection.read()
	if output=='false':
		print("No profanity")
	else:
		print("Please review your article again")
	connection.close()	
read_text()
