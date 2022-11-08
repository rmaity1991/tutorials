import tkinter as tk


mainWindow=tk.Tk()

mainWindow.title("Rohit Maity")
mainWindow.geometry('640x480')

leftFrame=tk.Frame(mainWindow)
leftFrame.pack(side='left',anchor='n',fill=tk.Y,expand=False)

rightFrame=tk.Frame(mainWindow)
rightFrame.pack(side='right',anchor='n',fill=tk.Y,expand=True)

canvas=tk.Canvas(leftFrame,relief='raised',borderwidth=1)
canvas.pack(side='left')

button1=tk.Button(rightFrame,text='Button1')
button2=tk.Button(rightFrame,text='Button2')
button3=tk.Button(rightFrame,text='Button3')
button1.pack(side='left')
button2.pack(side='left')
button3.pack(side='left')

mainWindow.mainloop()