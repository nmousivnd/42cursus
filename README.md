Description

This project is a library of useful functions implemented in C. It includes various string manipulation functions, memory management functions, character checking functions, and additional bonus functions. The library is created as part of the 42 school curriculum.
Usage and compilation:
To compile the library, you can use the following commands:

    make or make all - Compiles the library.
    make clean - Removes the object files generated during compilation.
    make fclean - Removes the compiled library and the object files.
    make re - Performs a clean recompilation of the library.
    make bonus - Compiles the library including the bonus part. (because this version is the latest, for original libft I suggest switching branch)

To include the libft library in your project and use it in your code, follow these steps:

-Compile the libft library using the provided Makefile. This will generate the libft.a file.

-Place the libft.a file in a directory of your choice, for example, lib.

-In your project directory, create a directory called include if it doesn't already exist.

-Copy the header files from the libft library into the include directory. These header files typically have a .h extension, such as libft.h.

-In your source code files where you want to use the libft library functions, include the corresponding header file using the following directive:

    #include "libft.h"

During compilation, you need to link your project with the libft library. Add the following flag to your compilation command:

    -L/path/to/lib -lft
Replace /path/to/lib with the actual path to the directory where you placed the libft.a file.

For example, if you placed the libft.a file in a directory called lib inside your project directory, the compilation command would look like this:

gcc your_program.c -L./lib -lft -o your_program
Now you can use the functions provided by the libft library in your code.

For example, if you want to use the strlen function from the library, you can call it like this:

    size_t length = ft_strlen("Hello, world!");

Make sure to prefix the library functions with ft_ to differentiate them from standard library functions.

That's it! You have successfully included the libft library in your project and can use its functions in your code. 🎉

Default Compilation Flags

The Makefile uses the following compilation flags:

        -Wall -Wextra -Werror - Enables additional warnings and treats warnings as errors.
        -I. - Specifies the include directory for header files.
