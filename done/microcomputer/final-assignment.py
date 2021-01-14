import radio
import random
from microbit import display, Image, button_a, button_b, sleep

# Turn ON Radio
radio.on()

# set message
bta = "AAA"
btb = "BBB"


while True:
    # send message if presse button A
    if button_a.was_pressed():
        radio.send(bta)
        display.scroll(bta, wait=True, loop=False)

    # send message if presse button B
    if button_b.was_pressed():
        radio.send(btb)
        display.scroll(btb, wait=True, loop=False)
    # show receive message
    incoming = radio.receive()
    if incoming:
        display.scroll(incoming)