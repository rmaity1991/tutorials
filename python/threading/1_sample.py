import threading
import time



def func1(): # here we are creating a function which we will be using for threading
    for var in range(10):
        print(f"Now Thread {var} is running",end='\n')
        time.sleep(2)


# When you create a Thread, you pass it a function and a list containing the arguments to that function. In this case, you’re telling the Thread to run thread_function() and to pass it 1 as an argument.
x=threading.Thread(target=func1,daemon=False) # --------------------->creating a new thread
# Daemon Threads
# In computer science, a daemon is a process that runs in the background.

# Python threading has a more specific meaning for daemon. A daemon thread will shut down immediately when the program exits. One way to think about these definitions is to consider the daemon thread a thread that runs in the background without worrying about shutting it down.

# If a program is running Threads that are not daemons, then the program will wait for those threads to complete before it terminates. Threads that are daemons, however, are just killed wherever they are when the program is exiting.

# Let’s look a little more closely at the output of your program above. The last two lines are the interesting bit. When you run the program, you’ll notice that there is a pause (of about 2 seconds) after __main__ has printed its all done message and before the thread is finished.

# This pause is Python waiting for the non-daemonic thread to complete. When your Python program ends, part of the shutdown process is to clean up the threading routine.

x.start() # ------------------>starting the thread
# join() a Thread
# Daemon threads are handy, but what about when you want to wait for a thread to stop? What about when you want to do that and not exit your program? Now let’s go back to your original program and add the join.xTo tell one thread to wait for another thread to finish, you call .join(). If you uncomment that line, the main thread will pause and wait for the thread x to complete running.

# Did you test this on the code with the daemon thread or the regular thread? It turns out that it doesn’t matter. If you .join() a thread, that statement will wait until either kind of thread is finished.
# x.join()

# func1()
for var in range(5): # ---------------------->main thread loop to verify concurrency
    print(f"Now main Thread {var} is running",end='\n')
    time.sleep(2)

