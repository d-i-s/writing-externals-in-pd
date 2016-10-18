# emufest
Available materials for EMUFest 2016, lecture on October 26th, Rome.
This repository provides a 'myexternal' folder where you can find the simplest external you can do in Pd.

Before EMUFest 2016, you *must* compile it. You need:

1) Pd. Please downaload the lastest Vanilla version (0.47.1) from here: http://msp.ucsd.edu/software.html . We will use Vanilla; *no Pd Extended*.

2) a text editor (Emacs, Textedit, vim, gedit, notepad, ...: https://en.wikipedia.org/wiki/List_of_text_editors )

3) a compiler (GCC, clang, ...: https://en.wikipedia.org/wiki/List_of_compilers#C_compilers )

or an IDE (Xcode, Code::Blocks, ...: https://en.wikipedia.org/wiki/Comparison_of_integrated_development_environments#C.2FC.2B.2B )

Actually, the best solution is to install make and use the provided makefile template. Make here: https://en.wikipedia.org/wiki/Make_(software) .

When you have 1+2+3+make, open the terminal. Go to emufest-master/myexternal folder (that is probably in Download folder) and then type make. For example:
$ cd Download/emufest-master/myexternal/ (assuming you are in home and this folder is in download)
$ make
If everything works, you should compile myexternal properly.

If you have questions, open an issue or send me an email and I will do it for you: mm dot markidis at gmail dot com .
