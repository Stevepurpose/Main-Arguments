# Runtime Argument Count
This repository demonstrates how to keep track of command line arguments used to run
code. Sometimes we pass arguments to `main` and these arguments have functions.
* `argc` is count of command line arguments.
* `argv[]` is an array of strings containing those arguments.
* `argv[0]` is the first value in the array. This is usually the name of the program.
* The rest of the arguments begin from `argv[1]` etc.