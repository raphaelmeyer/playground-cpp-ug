# Filesystem library
An important addition to the C++17 standard is the filesystem library. The filesystem library is based on boost::filesystem
 and enables us to work with paths, files and directories.

The current compilers (gcc 7.2. is used for this exercise) provide an implementation of the library in the `std::experimental::filesystem` namespace and the actual header is `<experimental/filesystem>`.

@[Implement a program that searchs in the 'data' directory of the current directory for all files which contain 'copy' in its content and copy them to a new folder data_new.]({"stubs": ["src/Exercises/filesystem.cpp"],"command": "bash /project/target/check_filesystem.sh"})
