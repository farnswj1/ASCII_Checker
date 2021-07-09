import asciiChecker

print("Version:", asciiChecker.version())

string1 = "Hello world!"
print(string1, "is ASCII:", asciiChecker.is_ascii(string1))

string2 = chr(128)
print(string2, "is ASCII:", asciiChecker.is_ascii(string2))