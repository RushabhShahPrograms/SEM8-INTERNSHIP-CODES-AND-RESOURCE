name_list = []
palindrome_list = []

for i in range(1,6):
    name=input("Enter 5 names in list: ")
    name_list.append(name)

print("Original List:",name_list)

for i in name_list:
    if(i==i[::-1]):
        palindrome_list.append(i)

print("Palindrome name list:",palindrome_list)