#Problem0192 - Word Frequency
#https://github.com/agileshaw/LeetCode

# Read from the file words.txt and output the word frequency list to stdout.
tr -s ' ' '\n' < words.txt | sort | uniq -c | sort -nr | awk '{print $2, $1}'
