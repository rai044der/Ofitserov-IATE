def my_fun(my_list, my_string):
    if type(my_list[0]) is str:
        codes[my_list[0]] = my_string + '0'
    else:
        my_fun(my_list[0], my_string + '0')
    if len(my_list) > 1 and type(my_list[1]) is str:
        codes[my_list[1]] = my_string + '1'
    elif len(my_list) > 1:
        my_fun(my_list[1], my_string + '1')


if __name__ == "__main__":
    letters = {}
    codes = {}
    string = input()
    for letter in string:
        letters[letter] = letters.get(letter, 0) + 1
    letters = sorted(map(lambda x: [x, letters[x]], letters), key=lambda x: x[1])
    while len(letters) > 1:
        n = letters[0][1]
        while letters[0][1] == n:
            first, second = letters[0], letters[1]
            letters.append([[first[0], second[0]], first[1] + second[1]])
            del letters[:2]
            letters = list(sorted(letters, key=lambda x: x[1]))

    my_fun(letters[0][0], '')
    new_string = ''
    for letter in string:
        new_string += codes[letter]
    print(len(codes.keys()), len(new_string))
    for key in codes:
        print(key + ': ' + codes[key])
    print(new_string)