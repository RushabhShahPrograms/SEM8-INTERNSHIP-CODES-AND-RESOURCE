# set ->dont allow duplicates, unordered, immutable (not changeable)
set1 = {78, "manoj", 89.90, 78, 78}
print(set1)
print(type(set1))  # <class 'set'>

set1.add('78')
print(set1)

set2 = set1.copy()
print(set2)

set3 = set1
print(set3)

print(id(set1))
print(id(set2))
print(id(set3))
set1 = {10, 90, 30, 40, 50, 60}
set2 = {11, 66, 40, 30, 70, 90}
print(set1.difference(set2))
# set1.difference_update(set2)
# print(set1)

set1.discard(90)
print(set1)
print(set1.intersection(set2))
print(set1.pop())
set1.remove(30)
print(set1)

set1 = {10, 90, 30, 40, 50, 60}
set2 = {11, 66, 40, 30, 70, 90}
print(set1.symmetric_difference(set2))

set1.update('100')
print(set1)

list1=[10,90,80,45,78]
list2=[90,89,78,67]

list1.append(list2)
print(list1) #[10, 90, 80, 45, 78, [90, 89, 78, 67]]

#list1.extend(list2)
#print(list1) #[10, 90, 80, 45, 78, 90, 89, 78, 67]


list5=["krutarth"]
list1.extend(list5)
print(list1)

set1={10,20,30,40}
set2={10,20,30,40}

print(set1.isdisjoint(set2)) #False
print(set2.issubset(set1)) #true
print(set1.issuperset(set2)) #true
