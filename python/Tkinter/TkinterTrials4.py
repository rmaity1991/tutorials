import tkinter as tk


mainWindow=tk.Tk()

mainWindow.title("Rohit Maity")
mainWindow.geometry('640x480')

leftFrame=tk.Frame(mainWindow)
leftFrame.grid(row=0,column=0)

rightFrame=tk.Frame(mainWindow)
rightFrame.grid(row=0,column=1)

canvas=tk.Canvas(leftFrame,relief='raised',borderwidth=1)
canvas.grid(row=1,column=0)

button1=tk.Button(rightFrame,text='Button1')
button2=tk.Button(rightFrame,text='Button2')
button3=tk.Button(rightFrame,text='Button3')
button1.grid(row=1,column=1)
button2.grid(row=2,column=1)
button3.grid(row=3,column=1)

mainWindow.columnconfigure(0,weight=1)
mainWindow.columnconfigure(1,weight=1)
mainWindow.columnconfigure(2,weight=1)

mainWindow.mainloop()