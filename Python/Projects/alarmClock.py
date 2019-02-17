import time # Import time 
import webbrowser # Import Web browser

totalBreaks = 3 # Seconds to wait before execution
breakCounts = 0 # Counting variable

while(breakCounts < totalBreaks):
    time.sleep(10); # Sleep for some time
    webbrowser.open("https://www.youtube.com/watch?v=H7_yY3yr-jE"); # Open the video
    breakCounts += 1 # Increment the variable