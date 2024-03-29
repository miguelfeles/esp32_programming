import machine
import time

LED = machine.Pin(2, machine.Pin.OUT)
BUTTON = machine.Pin(0, machine.Pin.IN)

while True:
    estado = BUTTON.value()
    if (estado == False):
        LED.value(1)
    else:
        LED.value(0)
    
