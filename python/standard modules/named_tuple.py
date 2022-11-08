from collections import namedtuple


Person=namedtuple('Person',['name','age','salary'])


x=Person(name="Rohit Maity",age=30,salary=10000)

print(x)
print(x.name)
print(x.age)
print(x[0])
print(x[2])