import serial.tools.list_ports

ports = serial.tools.list_ports.comports()
serialInst = serial.Serial()

serialInst.baudrate = 9600
serialInst.port = '/dev/cu.usbmodem1401'
serialInst.open()

while True: 
    command = input("LED pink/red/green? invalid response will show blue bc why not: ")
    serialInst.write(command.encode('utf-8'))

    if command =='exit':
        exit()
