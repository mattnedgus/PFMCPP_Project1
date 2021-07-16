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
//  action 1:   spindle moves in X
spindle.moveX();
//  action 2:   spindle checks on/off status
spindle.isSpinning(); 
//  action 3:   spindle maintains set speed
spindle.maintainSpeed();

//  2)
//  Noun:       motorZ1
//  action 1:   check position of encoder
motorZ1.checkAngle();
//  action 2:   calculate speed of motor z1
motorZ1.CalculateSpeed(); 
//  action 3:   motorZ1 slows to a stop
motorZ1.stop();

//  3)
//  Noun:     vacuum  
//  action 1:   check if vacuum is on
vacuum.isOn();
//  action 2:   vacuum is full
vacuum.isFull(); 
//  action 3:   vacuum issues warning
vacuum.warning();

//  4)
//  Noun:       tool
//  action 1:   get current cutting tool number
tool.getCurrentNumber();
//  action 2:   change curent tool
tool.change(); 
//  action 3:   check tool height
tool.zeroHeight();

//  5)
//  Noun:       workshopDoor
//  action 1:   workshop door is closed?
workshopDoor.isClosed();
//  action 2:   workshop door is moving
workshopDoor.isMoving(); 
//  action 3:   respray the workshop door
workshopDoor.changeColour();

//  6)
//  Noun:       aircon
//  action 1:   measure the room temperature
aircon.measureTemperature();
//  action 2:   increase aircon fan speed
aircon.increaseFanSpeed;
//  action 3:   aircon checks filter condition
aircon.needsFilterChange(); 

//  7)
//  Noun:       computer
//  action 1:   upgrade computer software
computer.upgrade();
//  action 2:   replace the computer
computer.replace();
//  action 3:   HP has been a headache for 2 1/2 months
computer.getAMacInstead(); 

//  8)
//  Noun:       radio
//  action 1:   change the radio station
radio.changeStation();
//  action 2:   turn the radio volume up
radio.volumeUp();
//  action 3:   swap out the monotony for Audible
radio.getAudible();

//  9)
//  Noun:       kettle
//  action 1:   fill the kettle
kettle.fill();
//  action 2:   boil kettle  
kettle.boil();
//  action 3:   kettle mashes tea  
kettle.mash();
 
//  10)
//  Noun:       bell
//  action 1:   bell checks whether 5PM yet
bell.is5PM();
//  action 2:   bell sounds for hometime
bell.soundsHometime();
//  action 3:   bell checks functional status
bell.isBroken();



 


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
