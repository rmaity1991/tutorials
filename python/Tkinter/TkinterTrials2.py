import tkinter as tk


mainWindow=tk.Tk()
mainWindow.title("Hello Rohit")
mainWindow.geometry('640x480')


label=tk.Label(mainWindow,text="Enter your Name")
label.pack(side='top')

canvas=tk.Canvas(mainWindow,relief='raised',borderwidth=1)
canvas.pack(side='left')
#canvas.pack(side='left',fill=tk.Y)
#canvas.pack(side='top',fill=tk.X)


button1=tk.Button(mainWindow,text='Button1')
button2=tk.Button(mainWindow,text='Button2')
button3=tk.Button(mainWindow,text='Button3')
button1.pack(side='left',anchor='n')
button2.pack(side='left',anchor='s')
button3.pack(side='left', anchor='e')

#button1.pack(side='left')
#button2.pack(side='left')
#button3.pack(side='left')




mainWindow.mainloop()


