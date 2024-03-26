## Worked Time

This project has for goal to be able to count time. It will help for many usage
in my case, because I really want to have a way to count without make attention
when I'm taking a break.

### Functionalities

Here is a list of functionalities that I would like to have for the first
iteration :
* start and run a timer and it says worked time
* have a break during the work but no stopping completely the timer
* be able to demand worked time when I want
* when stopping the timer, add the worked time in a file at the end, with the date
of the day at beginning of work
* demand a calculation of all time worked from the beginning or since a certain
date
* because there is limitation of 9h59m59s on a line registered in the file (show 
below), the max will be 9h, and create other lines for the rest of time worked
#### Specifications
* the code will be written in C++
* the code will execute directly on terminal, I don't need to have interface

### Data structure for file

Here is the data structure I think it's the best to register all period of work :  
**AAAA-MM-DD Hh-MMm-SSs**  
With this data structure, each period of work is stored on only 21 characters, so
21 bytes. I can do better, but I want the file to be easily readable.