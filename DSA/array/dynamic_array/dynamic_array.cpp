#include <stdio.h>
#include <stdlib.h>


struct Array{
  int*A;
  int size;
  int length;
};

int Display(struct Array arr){
  for (int i=0; i<arr.length; i++){
    printf("%d", arr.A[i]);
  }
  return 0;
}

void Insert(struct Array *arr, int index, int x){
  if (index >=0 && index <=arr->length){
    for(int i=arr->length; i>index; i--){
      arr->A[i] = arr->A[i-1];
    }
    arr->A[i] = x;
    arr->length++; 
  }
}

int Delete(struct Array *arr, int index){
  if (index >=0 && index <=arr->length){
    for(int i=index; i<arr->length-1, i++){
      arr->A[i] = arr->A[i+1];
    }
    arr->length -= 1;
    return x; 
  }
  return 0;
}

int LinearSearch(struct Array *arr, int key){
  for (int i =0; i<arr->length; i++){
    if (arr->A[i] == key){
      return i;
    }
  }
  return -1;
}

int Sum(struct Array *arr){
  sum = 0;
  for (int i=0; i<arr->length; i++){
    sum += arr->A[i];
  }
  return sum;
}

int main(){
  int choice;
  int index, x;
  struct Array arr1;
  printf("Enter size of array");
  scanf("%d", &arr1.size);

  arr1.A = (int*)malloc(arr1.size*sizeof(int));
  arr1.length=0;
  do{
    printf("\n Menu:\n");
    printf("1. Insert:\n");
    printf("2. Delete:\n");
    printf("3. Search:\n");
    printf("4. Sum:\n");
  }
}
