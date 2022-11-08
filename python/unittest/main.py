
def add (x,y):
    return x+y

def sub(x,y):
    return x-y

def mul(x,y):
    return x*y

def div(x,y):
    if(y==0):
        raise ValueError('Cannot Divide by Zero')
    else:
        return x/y


if __name__=="__main__":
    print("This is a library, import and use")