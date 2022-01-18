#include <stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include<errno.h>
#include <unistd.h>
int main(int argc, char **argv){
    char buf[2048];
    size_t nbytes;
    ssize_t bytes_read;

    nbytes = sizeof(buf);

    for (int i = 1; i < argc; i++){
        int files = open(argv[i], O_RDWR);
        bytes_read = read(files, buf, nbytes);
        write(files, buf, nbytes);
        close(files);
      }
}
