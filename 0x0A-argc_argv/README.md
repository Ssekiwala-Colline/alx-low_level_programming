argc (ARGument Count) is int and stores number of command-line arguments passed by the user including the name of the program. So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
The value of argc should be non negative.
argv(ARGument Vector) is array of character pointers listing all the arguments.
If argc is greater than zero,the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
Argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.
