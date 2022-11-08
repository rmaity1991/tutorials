from pyModbusTCP.client import ModbusClient
from tkinter import *


c = ModbusClient(host="127.0.0.1", auto_open=True, auto_close=True,port=502)

# reading holding registers (40001 = 0) so start from 0
regs = c.read_holding_registers(0, 2)

for var in regs:
    print(var)



if c.write_multiple_registers(0,[int(i) for i in range(0,10)]):
    print("write ok")
else:
    print("write error")



