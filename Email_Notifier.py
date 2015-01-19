
import time
import serial
import smtplib

TO = 'tim_liu1996@outlook.com'
GMAIL_USER = 'timxliu96@gmail.com'
GMAIL_PASS = '*******'

SUBJECT = 'Home Status Alert!'
TEXT = 'Your bedroom lights have turned off!'

ser = serial.Serial('/dev/tty.usbmodem1a1231', 9600)

def send_email():
    print("Sending Email")
    smtpserver = smtplib.SMTP("smtp.gmail.com",587)
    smtpserver.ehlo()
    smtpserver.starttls()
    smtpserver.ehlo
    smtpserver.login(GMAIL_USER, GMAIL_PASS)
    header = 'To:' + TO + '\n' + 'From: ' + GMAIL_USER
    header = header + '\n' + 'Subject:' + SUBJECT + '\n'
    print header
    msg = header + '\n' + TEXT + ' \n\n'
    smtpserver.sendmail(GMAIL_USER, TO, msg)
    smtpserver.close()
while True:
    message = ser.readline()
    print(message)
    if message[0] == 'L' :
        send_email()
time.sleep(0.5)
