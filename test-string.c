#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int countOccurrHelp(char *arr, char *find, long unsigned int length, int count) {
  int i = 0;
  int j = 0;
  while(*arr != '\0') {
     if(*arr == *find) {
        arr++;
        find++;
        i++;
        j++;
        if(i == length && j == length) {
          return count + 1;
        }
     }else {
        arr++;
     }
  }
  return count;
}

int countO2(char *arr, char *find, long unsigned int length, int count) {
  int i = 0;
  int j = 0;
  while(*arr != '\0') {
     if(*arr == find[j]) {
        arr++;
        //find++;
        i++;
        j++;
        if(i == length && j == length) {
          count = count + 1;
          i = 0;
          j = 0;
        }
     }else {
        if(*arr != find[j]) {
          i = 0;
          j = 0;
        }
        arr++;
     }
  }
  return count;
}

void sub(char *arr) {
  for(int i = 0; arr[i] != '\0'; i++) {
     arr[i] = arr[i+1];
  }
}

int main() {
  char arr[] = "Here is some input for my friendly program. This is my program, and it is friendly,";
  char fin[] = "my";
  int count = 0;
  int cow = countO2(arr, fin, strlen(fin),0);
  //int count = countOccurrHelp(arr,fin,strlen(fin),0);
  long unsigned int length = strlen(arr);
  printf("Count -> %d\n",cow);
  //for(int i = 0; i < length; i++) {
  //   count = countOccurrHelp(arr, fin, strlen(fin),count);
  sub(arr);
  printf("%s\n",arr);
  //   printf("Count -> %d , Arr -> %s\n", count, arr);
  //}
  //printf("Count = 2 , %d\n", count);
  //printf("Result -> %d\n", count);
  //sub(arr, 1);
  //printf("New -> %s\n", arr);
  //sub(arr, 2);
  //printf("New2-> %s\n", arr);
}
