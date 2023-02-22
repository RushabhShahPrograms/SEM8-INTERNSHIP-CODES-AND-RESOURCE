import math
l1 = [(1, 2, 3), (4, 5, 3), (2, 3, 4)]

for _ in l1:
    for k in _:
        print(k, end=' ')


# Dict------------------

print('\n\n\n')

list1 = []
tup1 = ()
dict1 = {}
set1 = set()

print(type(list1), type(tup1), type(dict1), type(set1))

set2 = {23, 90.89, 'String', 9+8j, False}
print(set2)

dict2 = {"Name": 'Arav', 'roll': 34, "marks": 90.89, "Name": 'manoj'}
print(dict2)

# keys -> unique
# dictionary -> mutable,don't allow duplicates

print(dict2)
print(type(dict2))  # <class 'dict'>

set1 = {10, }
print(type(set1))  # <class 'set'>

dict3 = dict2.copy()
print(dict3)

dict4 = dict2
dict2.update({'school': 'HBK', 'Address': 'Ahm', 89: [2, 3, 4, 55]})

print(dict3)  # {'Name': 'manoj', 'roll': 34, 'marks': 90.89}
# {'Name': 'manoj', 'roll': 34, 'marks': 90.89, 'school': 'HBK', 'Address': 'Ahm', 89: [2, 3, 4, 55]}
print(dict4)

# print(dict2[2]) gives error

print(dict2.get("Name"))  # manoj

# dict_items([('Name', 'manoj'), ('roll', 34), ('marks', 90.89), ('school', 'HBK'), ('Address', 'Ahm'), (89, [2, 3, 4, 55])])
print(dict2.items())

# dict_keys(['Name', 'roll', 'marks', 'school', 'Address', 89])
print(dict2.keys())

# dict_values(['manoj', 34, 90.89, 'HBK', 'Ahm', [2, 3, 4, 55]])
print(dict2.values())

print(dict2.pop("Name"))
# {'roll': 34, 'marks': 90.89, 'school': 'HBK', 'Address': 'Ahm', 89: [2, 3, 4, 55]}
print(dict2)

print(dict2.popitem())
print(dict2)
print(dict2.popitem())
print(dict2)

'''
for i in dict2:
    print(i)

for i in dict2.keys():
    print(i)

for j in dict2.values():
    print(j)

for y,z in dict2.items():
    print(y,z,sep='\t')

for key,value in dict2.items():
    print(key,value)

'''

list1 = [23, 45, 90]
print(tuple(list1))
print(type(list1))

x = '9089'
print(int(x))

x = '90.89'
print(int(float(x)))

x = 90.89
print(math.ceil(x))
print(math.floor(x))
y = 90.10
print(math.ceil(y))
print(math.floor(y))


v = True  # 1
f = 90
print(f+v)


# ----------------
# find unique values from this dict4
dict4 = {
    'list1': [10, 90, 45, 67, 34, 89],
    'list2': [44, 90, 45, 12, 23, 48],
    'list3': [3, 4, 6, 7, 90]
}

x = []
for i in dict4.keys():
    x.extend(dict4[i])
x = list(set(x))
x.sort()
# printing result
print("The unique values list is : ", x)
