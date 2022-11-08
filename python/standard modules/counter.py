from collections import Counter

print(Counter(['Rohit Maity','Romela Dutta'])) # creates a counter object which counts the the number of individual equivalent objets

print(Counter([1,2,4,1,3,6,2,3,9,4,5,7,3,2]))

x=Counter() # creates a empty counter object

x.update([1,2,4,1,3,6,2,3,9,4,5,7,3,2]) # the empty counter can be updated using the .update method

print(x)

x.update(['Rohit Maity']) # this adds to the above list as a individual object

print(x)

for item,value in x.items():
    print(item,value)


print(x.most_common(3)) # gives the most common occuring elements