# hwo to create shared library(.so)
make sure CMAKELISTS.txt use shared flag like this:

add_library(MySharedLib SHARED library.cpp library.h)

then cd to lib folder,and execute
$cmake ./
$make

references
https://blog.csdn.net/cindywry/article/details/86063930?utm_medium=distribute.pc_relevant.none-task-blog-title-3&spm=1001.2101.3001.4242