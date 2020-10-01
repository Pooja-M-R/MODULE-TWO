INTRODUCTION TO ARRAYS



An array is an ordered sequence of finite data items of the same data type and that shares a common name. The common name is the array name and each individual data item is known as an element of array.

The elements of the array are stored in contiguous memory locations starting from a memory location allocated/stored in the array variable.

For example, an array of size 10 (int arr[10];) can be visualized as shown below.

arr[0]	arr[1]	arr[2]	arr[3]	arr[4]	arr[5]	arr[6]	arr[7]	arr[8]	arr[9]

An element of an array is retrieved/accessed using its index. For example, the value stored in the first position can be printed using the below code:

printf("%d", arr[0]); // remember that array's index starts from 0 and not 1
 
A one-dimensional array can be used to represent a list of data elements and is also known as a vector.

A two-dimensional array is used to represent a table of data items consisting of rows and columns and is also known as a matrix.
 
The syntax for declaring a one-dimensional array is given below:
data_type arrayname[size]; //a single array is declared

Here, data_type refers to the data type of the elements in the array and it can be a primitive data type.
arrayname1, arrayname2, .....etc refers to the identifiers which represent the array names.
size is an integer expression representing total number of elements in the array.

Let us consider an example
int num[5];
The above one-dimensional array declaration defines an integer array by name num of size 5, meaning it represents a block of 5 consecutive storage locations that store int values.

Here each element in the array can be accessed by num[0], num[1], num[2], num[3], num[4], where 0, 1, 2, 3, 4 represent the subscripts or indices of the respective elements in the array.
Each element in an array can be accessed by the name of the array followed by the subscript or directly by the address. The array variable holds the base address of that entire array.
