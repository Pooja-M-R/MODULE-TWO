INTRODUCTION TO ARRAYS

In a programming language the data that has to be processed is loaded in memory and held in variables. When we want to process an integer value, we declare an int variable and assign a value to it.

Assume we want to write a program that prints the total marks scored by students in a class (say, for a total of 30 students).

One way of doing it is to declare 30 int variables, which is not scalable when we think of multiple classes or a complete school.

In such cases, when we want to store multiple values of the same data type, C provides us a derived data type called array.

An array is an ordered sequence of finite data items of the same data type and that shares a common name. The common name is the array name and each individual data item is known as an element of array.

The elements of the array are stored in contiguous memory locations starting from a memory location allocated/stored in the array variable.

For example, an array of size 10 (int arr[10];) can be visualized as shown below.

arr[0]	arr[1]	arr[2]	arr[3]	arr[4]	arr[5]	arr[6]	arr[7]	arr[8]	arr[9]

Essentially an array can be thought of as a sequence of buckets. The first bucket is identified with number 0, the second bucket with 1 and so on. This number is called the index (or) subscript.

For example, if we want to store a value 369 at the first index, the code is arr[0] = 369;.
Similarly, if we want to store a value 567 in the second bucket, the code will be arr[1] = 567; and so on.
If we want to store a value 111 in the last bucket, the code will be arr[9] = 111;.

An element of an array is retrieved/accessed using its index. For example, the value stored in the first bucket can be printed using the below code:

 printf("%d", arr[0]); // remember that array's index starts from 0 and not 1Fill in the missing code in the below program to print the elements of the given array.
