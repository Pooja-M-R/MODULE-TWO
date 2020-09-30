int main()
{
    int arr[10];
    int i, num, evennum, oddnum;

    // Reads size and elements in array
    printf("Enter how many values you want to read : ");
    scanf("%d", &num);
    //printf("Enter %d elements in array: ", num);
    for(i=; i<; i)
    {
    printf("Enter the value of a[%d] : ",i);
        scanf("%d", &  [i]);
    }

    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers

    for(i=0; i<; i++)
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[]%2 == 0)
        {
            evennum++;
        }
        else
        {
            oddnum++; // increment oddnumber count
        }
}
printf("Total number of even numbers in the array : %d\n",  );
printf("Total number of odd numbers in the array : %d\n",   );
}
return(0);    
}
