# from __future__ import print_function
# #from curses import tigetflag
# from errno import ELIBACC, EMSGSIZE
# #import imp
# import ctypes
# from multiprocessing.connection import Listener
# from click import command



import speech_recognition as sr
import pyttsx3
import pywhatkit
import datetime 
import wikipedia
import pyjokes
 
Listener= sr.Recognizer()
engine=pyttsx3.init()
voices=engine.getProperty('voices')
engine.setProperty('voice',voices[1].id)

def alexatalk():
    engine.say("hey, I am alexa ")
    engine.say(" how may i help you")
    engine.runAndWait()


def talk(text):
    engine.say(text)
    engine.runAndWait()

def take_command():
    try:
        with sr.Microphone() as source:
            print("listning...")
            voice= Listener.listen(source)
            command=Listener.recognize_google(voice)
            command=command.lower()
            if "alexa" in command:
                command=command.replace("alexa","")
            
    except:
        pass
    return command


def run_alexa():
    command=take_command()
    if "play" in command:
        song=command.replace("play"," ")
        talk("playing" + song)
        print("playing"+ song)
        pywhatkit.playonyt(song)
    elif "time" in command:
        time=datetime.datetime.now().strftime('%I: %M %p')
        print(time)
        talk("Current Time Is  "+ time)  
    elif "like to date" in command:
        print(command)
        talk("Sorry I'm in a relationship with google  hehe")
    elif "i love you" in command:
        print(command)
        talk("I can't feel romantic love but i think you are wonderfull")
    elif "who are you" in command:
        print(command)
        talk("I am your personal assistant just let me know what to do")
    elif "tell me a secret" in command:
        print(command)
        talk("Gosh, this is an embarrasing one.. I have a secret crush on you please don't tell anyone")
    elif"how are you" in command:
        print(command)
        talk("i'm doing great, Thanks for asking")
    elif"going on" in command:
        print(command)
        talk("just checking in, is your day going well, or bad?")
    elif "who is" in command:
            person=command.replace("who is","")
            info=wikipedia.summary(person,2)
            print(command)
            talk(info)
    elif "joke" in command:
        print(command)
        talk(pyjokes.get_joke())
    # elif"bilawal bhutto" or "bhutto" in command:
    #     print(command)
    #     talk("bliwaalll bhuttooo is a daughter of asif ali zardaaari")
        
    else:
        talk("sorry didn't understand ")

alexatalk()
while True:
    run_alexa()
