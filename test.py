import ascii_checker


print('Version:', ascii_checker.version())

string1 = 'Hello world!'
print(string1, 'is ASCII:', ascii_checker.is_ascii(string1))

string2 = chr(128)
print(string2, 'is ASCII:', ascii_checker.is_ascii(string2))
