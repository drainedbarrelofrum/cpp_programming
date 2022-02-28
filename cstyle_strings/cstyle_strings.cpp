// for legacy works with C code and C strings 
#include <cstring>          // to work with C strings
#include <cstdio>           // to work with C strings
#include <cstdlib>          // to work with C strings

int main() {
    const char *s1 = "Hello, World!";               // it is going to be on a stack, not like with malloc
    printf("%s\n", s1);

    char *s2 = strdup(s1);                          // this will duplicate of s1 and allocates the memory for that
    strncpy(s2, "Hy, World!", strlen(s1));          // strdup calls malloc implicitly and creates a memory for that
    printf("%s\n", s2);                             // it prevents the buffer overflow 

    int len = (strlen(s1) + strlen(s2) + 10);           // 
    char *s3 = (char *)malloc(len * sizeof(char));      // based on the lenfth of the s1 and s2 strings (+ extra space at the end), we allocate memory manually with malloc 
                                                        // everytime you have malloc, make sure you free the memory at the end of your function, code
    

    sprintf(s3, "%s %s", s2, s1);           // this do the same as 3 lines below
//    strncpy(s3, s2, len);                   // strncpy and strncat to gives some characters 
//    strncat(s3, " ", len);
//    strncat(s3, s1, len);

    printf("%s\n", s3);

    free(s3);
    free(s2);
    
    return 0;
}