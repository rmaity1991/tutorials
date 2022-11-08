from collections import deque


x=deque([1,2,2,4,5,7,6,6]) # this will create a deque with variables passed as list and it can be any iterable in the sequence 
y=deque('Rohit Maity')
print(x)
print(y)

for item in y:
    print(item)


y.append('Romela Dutta') # appends to the end of the deque
x.extend((1,2,3,4,5,6,7,8)) # extends the dequeue

y.appendleft('Romela Dutta') # appends to the left end of the deque
x.extendleft((1,2,3,4,5,6,7,8)) # extends left the dequeue

print(y)
print(x)

# for item in x:
#     print(x.pop())

# for item in x:
#     print(x.popleft())

x.rotate(2)

y.rotate(3)

print(x)
print(y)