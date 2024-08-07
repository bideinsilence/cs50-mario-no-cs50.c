# Harvard CS50's "Mario" problem
## without the cs50.c library

Problem to Solve:

In a file called mario.c in a folder called mario-more, implement a program in C that recreates that pyramid, using hashes (#) for bricks, as in the below:

   #  #
  ##  ##
 ###  ###
####  ####

And let’s allow the user to decide just how tall the pyramids should be by first prompting them for a positive int between, say, 1 and 8, inclusive.

I have't quite figured out how to use scanf to make the program reprompt when
pressing enter on a blank line - instead a new line is placed on the command
line and scanf appears to wait for more input: if a new value is typed and enter
pressed, scanf consumes that value
