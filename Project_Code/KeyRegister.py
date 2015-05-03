import pygame, serial

""" Bluetooth set up """
port = "/dev/tty.HC-05-DevB"
bluetooth = serial.Serial(port,9600)

""" KeyListener set up """
pygame.init()
pygame.event.set_grab(True)
clock = pygame.time.Clock()

""" Main Loop """
while True:
	clock.tick(30)
	press = pygame.key.get_pressed()
	if press[pygame.K_UP]:
		print "UP"
		bluetooth.write("U")
	elif press[pygame.K_DOWN]:
		print "DOWN"
		bluetooth.write("D")
	elif press[pygame.K_LEFT]:
		print "LEFT"
		bluetooth.write("L")
	elif press[pygame.K_RIGHT]:
		print "RIGHT"
		bluetooth.write("R")
	elif press[pygame.K_SPACE]:
		print "STOP"
		bluetooth.write("0")
	else:
		print "NEUTRAL"
		bluetooth.write("0")
	pygame.event.clear()