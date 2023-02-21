name_list = []

for i in range(1,6):
    name=input("Enter 5 names in list: ")
    name_list.append(name)

count=0
for i in name_list:
    if(i==i[::-1]):
        count+=1
        print("list",i, "is palindrome")
    else:
         print("List",i," are not palindrome")

print("Total Palindrome names are",count)