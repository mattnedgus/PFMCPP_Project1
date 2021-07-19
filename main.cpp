#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase



/* My exampes */

/*apologies some were a bit tongue-in-cheek as I was running out of things to think of in the context of a working day - I don't really have a 5PM alarm! */


//  1)
//  Noun:       spindle
//  action 1:   moves along X
spindle.moveAlongX();
//  action 2:   turn on
spindle.turnOn(); 
//  action 3:   maintain set speed
spindle.maintainSetSpeed();

//  2)
//  Noun:       motor
//  action 1:   speeds up
motor.speedsUp();
//  action 2:   calculate speed
motor.calculateSpeed(); 
//  action 3:   slow to a stop
motor.slowToAStop();

//  3)
//  Noun:       vacuum  
//  action 1:   turn on
vacuum.turnOn();
//  action 2:   clean filter
vacuum.cleanFilter(); 
//  action 3:   issue fault warning
vacuum.issueFaultWarning();

//  4)
//  Noun:       tool
//  action 1:   start spindle
tool.startSpindle();
//  action 2:   change current tool
tool.changeCurrentTool(); 
//  action 3:   zero tool height
tool.zeroToolHeight();

//  5)
//  Noun:       workshopDoor
//  action 1:   open 
workshopDoor.open();
//  action 2:   close halfway
workshopDoor.closeHalfway(); 
//  action 3:   change colour
workshopDoor.changeColour();

//  6)
//  Noun:       aircon
//  action 1:   measure room temperature
aircon.measureRoomTemperature();
//  action 2:   increase fan speed
aircon.increaseFanSpeed();
//  action 3:   decrease temperature
aircon.decreaseTemperature(); 

//  7)
//  Noun:       computer
//  action 1:   upgrade software
computer.upgradeSoftware();
//  action 2:   replace
computer.replace();
//  action 3:   shutdown
computer.shutdown(); 

//  8)
//  Noun:       radio
//  action 1:   change station
radio.changeStation();
//  action 2:   volume up
radio.volumeUp();
//  action 3:   get Audible
radio.getAudible();

//  9)
//  Noun:       kettle
//  action 1:   fill
kettle.fill();
//  action 2:   boil  
kettle.boil();
//  action 3:   mash 
kettle.mash();
 
//  10)
//  Noun:       bell
//  action 1:   rings
bell.rings();
//  action 2:   play tune
bell.playTune();
//  action 3:   play rhythm
bell.playRhythm();



 


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
