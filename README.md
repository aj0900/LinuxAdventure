# The Wizard of OS: Linux Learner's Adventure

## Christian Panici, Miguel Gonzalez, AJ Javed

Full project proposal available at: https://docs.google.com/document/d/134Qwa8wwQyl2liPa47SbT-2e_rv1rcY4dngqKlOC0GA/edit?usp=sharing

### Summary:
Learning Linux is a valuable skill for any programmer, but it can be intimidating to get the hang of the different commands. This text-based game relies on the standard Linux file system structure to flesh out the game world, and the user must wield several of the core Linux commands to get around. By playing our game, the user will become more comfortable with some of the major commands used in Linux while hopefully enjoying themselves a bit along the way.

### How to Run:

Specific instructions for areas are explained further within the game. To get started,
follow the instructions provided by GitHub to clone this repository to your system. Once that's
done, use the following command to enter the project directory:

>> cd LinuxAdventure

From there, use the following command to read the first instructions file:

>> cat instructions.txt

Additional commands will be explained thoroughly as you progress. Enjoy!

### Inspiration:
Coming into our Operating Systems class, many of us had little to no exposure to Linux. As most of our work involved leveraging this system,
it was imperative that we got ourselves acquainted with it fairly quickly. While learning Linux is far less difficult than it may seem at first glance,
we felt like our learning process lacked any sort of structure, and we mostly just figured things out as we went along. This is by no means a "bad" way
to learn, but it may be more challenging for those with less technical experience and lead to unnecessary frustration. By creating this game, we hope
to offer those who are just getting started with Linux a clear, contained resource for getting the hang of various core commands and general
Linux-isms that will be crucial to know in order to use the system efficiently. We present the material in the context of a story in order to add a bit of
fun to the experience, and we communicate the technical information in a way that is easily digestible and readily applicable to contexts beyond the game
itself. By also including small coding tasks in C, we offer a comprehensive rundown to the basics of lower-level programming.

### Material Covered:
We touch upon the following Linux commands in this game:

	pwd, ls, cd, cat, nano, touch, cc, alias, echo, clear, rm, grep, mv, mkdir, sort, cal

In addition, we cover a variety of concepts such as:

	killing processes, directory naming conventions, hidden files, using command options,
	running executables 

### Future Work:
We are always looking for more creative ways to incorporate different commands and 
Linux-isms in this game. If you have an idea and are comfortable with git, feel free to
make a pull request with any additional areas you had in mind!

### TO-DOs:
- Need to include more commands/Linux-isms
- Need to iron out how git lesson will be included

  Should they check out a branch at very beginning?

### Main Linux Commands to Target:

1. ~~pwd (print working directory)~~

  User can call if they forget where they are.

2. ~~ls (list contents of current directory)~~

  User will need to call for every 'room' to see what's around.

3. ~~cd (change directory)~~

  User will need to call to navigate 'rooms'.

4. ~~cat (copy file to stdout)~~

  User will need to call to read 'instructions' files.

5. ~~./executable (run executable)~~

  User will need to run smaller programs within certain rooms.

6. ~~nano~~

  User will write small pieces of code.

7. ~~touch~~

  User will need to create files at certain points.

8. ~~gcc/cc/some compiler~~

  User would have to compile any program they write

9. ~~alias~~

  User can define shortcuts for repeated commands

10. git commands

  Possibly let user add name to list and commit to master
  
  Possible command:
  - git branch 
  - git add
  - git checkout (??)
  - git commit/push

11. chmod

  Need to change permissions to run a file?

12. ~~echo~~

13. ~~clear~~

14. ~~ctrl-c (kill process)~~
  Have intentional endless loop
15. ~~rm filename~~
16. ~~grep~~
17. ~~mv~~

    Have player move file from one directory to another
  
18. ~~mkdir~~
19. ~~sort~~
20. ~~cal~~
21. ~~ls -a~~ 
