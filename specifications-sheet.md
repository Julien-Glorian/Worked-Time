# Worked Time

This project has for goal to be able to count time. It will help for many usage
in my case, because I really want to have a way to count without make attention
when I'm taking a break.

## First iteration

### Functionalities

Here is a list of functionalities that I would like to have for the first
iteration :
* start and run a timer and it says worked time
* have a break during the work but no stopping completely the timer
* be able to demand worked time when I want
* when stopping the timer, add the worked time in a file at the end if I want, with the date of the day at end of work
* ~~demand a calculation of all time worked from the beginning or since a certain date~~ **iteration 2**
* because there is limitation of 9h59m59s on a line registered in the file (show below), the max will be 9h, and create other lines for the rest of time worked
* can specify for each time worked what I've done, not a complete description, just a word which specified the subject
* ~~demand a calculation of all time worked with a specified word~~ **iteration 2**
* ~~all specify words can be stored in a file to understand what we can do~~ useless
#### Specifications
* the code will be written in C++
* the code will execute directly on terminal, I don't need to have interface
* for the word subject, it must not have space, but no verification will be implemented in iteration 1 because there's no reader file

### Data structure for file

Here is the data structure I think it's the best to register all period of work :  
**AAAA-MM-DD Hh-MMm-SSs 30MaxCharactersSubjectLikeThis**  
With this data structure, each period of work is stored on only 52 characters max, so 52 bytes. I can do better, but I want the file to be easily readable.

## Iteration 2

### Major change about program
The major problem with the v1 is he has to run to count time. But if the computer crashed or the program is accidentally stopped, we lost our timer.  
More, we only can create one timer at a time, but if we have multitude task to time, it's impossible.
The two problems has the same solution : creation of a file which contains all the timer started. Each line represents a timer with his date departure.

I also want to improve the experience of use, with using different languages and some settings, like the number of information given by the program (detailed or minimal). The list of settings will also be stored in a file.

All instructions will be in one single word, to gain time each time we've to make a choice.

### Functionalities

The iteration 2 has to be more realistic with open-closed project, with the use of design patterns. Here is a list of features that will be implemented at the end of iteration 2 :
* demand a calculation of all time worked from the beginning or since a certain date
* demand a calculation of all time worked with a specified word 
* have at least two languages : English and French
* all instructions in one word
* adjust a timer if we've started to late (by forgetfulness, by impossibility, ...)

### Code specifications

* the state of the program will be stored via the state design pattern, to have a good start to evolve application
* the languages will be manage by a state design pattern, to add future languages to the program

### Necessaries
To work, the program must have access to three files :
* **settings.txt** which store all setting
* **worked-time.txt** which store all the timer terminated
* **timer.txt** which store all timer currently running