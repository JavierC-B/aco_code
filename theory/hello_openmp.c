// gcc -o p -fopenmp hello_openmp.c 
#include <stdio.h>
#include <omp.h>

void main(){
  #pragma omp parallel
  {
    int ID = omp_get_thread_num(); // returns the thread number
    printf("Hello world from thread %d \n", ID);
  }
}
  
