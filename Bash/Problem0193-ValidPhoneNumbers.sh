#Problem0193 - Valid Phone Numbers
#https://github.com/agileshaw/LeetCode

# Read from the file file.txt and output all valid phone numbers to stdout.
grep -E "^\([0-9]{3}\) [0-9]{3}-[0-9]{4}$|^[0-9]{3}-[0-9]{3}-[0-9]{4}$" file.txt
