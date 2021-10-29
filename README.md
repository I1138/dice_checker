# Dice Checker #
## A C++ Demo Project For Checking D20 Balance ##

### How it works (In theory) ###

In theory, if a die is off balance, it will tend to be less likely to roll numbers on the heavy side of the die, and more likely to roll numbers on the light side.
While this is sometimes obvious (a die that always rolls the same number) it can sometimes be a bit more subtle.
This app is intended to check for more subtle trends that might not be apparent through checking for frequently appearing numbers.
Instead, this app tracks rolls and adjacent rolls (when the die rolls a value that is 1 face away) and opposite / opposite adjacent rolls (when the die rolls a value on the opposite face, or a face adjacent to an opposite face).
This should help identifying dice that are unbalanced toward a corner, and will therfore never tend to roll a particular value, but will not produce a uniform distribution of values.
For some dice, this could be equivalently established by floating the dice, or some other method of establishing the center of mass, however, such methods tend to require equipment or time and effort commitments, which rolling a die several dozen times does not.

### How it works (In code) ###

