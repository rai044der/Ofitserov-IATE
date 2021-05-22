k, length = map(int, input().split())
lettersAndCodes = {}
for iteration in range(k):
    letter, code = input().split(": ")
    lettersAndCodes[code] = letter

string = input()
result_string = ""
stringForSearch = ''
for letter in string:
    stringForSearch += letter
    if stringForSearch in lettersAndCodes.keys():
        result_string += lettersAndCodes[stringForSearch]
        stringForSearch = ''
print(result_string)