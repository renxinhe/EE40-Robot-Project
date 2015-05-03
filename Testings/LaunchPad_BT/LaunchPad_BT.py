import serial

port = "/dev/tty.HC-05-DevB"
# port = "/dev/tty.RN42-58C7-SPP"
# bluetooth = serial.Serial(port,115200)
bluetooth = serial.Serial(port,9600)
while True:
    cmd = raw_input()
    bluetooth.write(cmd)



# print('hello world')
# bluetooth= serial.Serial(port,9600)
# print ('hello world 2')
# bluetooth.flushInput()
# print ('hello world 3')
# for i in range(100):
#     print("we are in the for loop",i)
#     inputs=bluetooth.readline()
#     print("we are in the inputs for loop",i)
#     inputasinteger= int(inputs)
#     if inputs:
#             print('we have inputs')
#             fileb= open("blue.txt",'wU')
#             fileb.write(inputasInteger*10)
#     time.sleep(.1)
#     print('sleeping')
# fileb.close()
# print('file has been closse')
# exit()