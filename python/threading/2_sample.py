from concurrent.futures import thread
import threading
import time

a:int
a=10
def add():
    global a
    for var in range(5):
        print("Calling add Function ....")
        a=a+var
        print(a)
        time.sleep(2)

def mul():
    global a
    for var in range(5):
        print("Calling mul Function ....")
        a=a*(var+1)
        print(a)
        time.sleep(2)


x=threading.Thread(target=add)
y=threading.Thread(target=mul)

x.start()
y.start()
x.join()
y.join()
# add()
# mul()
print("The value of a is ",a)


