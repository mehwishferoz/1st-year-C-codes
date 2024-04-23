//Read and display book details
//Sort using USBN number
//Search book using USBN number
#include<stdio.h>
#include<stdlib.h>
int i;
typedef struct sapna
{
    char name[100];
    char author[100];
    int usbn;
}book;

void read (book b[5])
{
    printf("Enter the book details: \n");
    for(i=0;i<5;i++)
    {
        printf("Enter name, author and USBN number of book%d: \n", i+1);
        scanf("%s%s%d", &b[i].name, &b[i].author, &b[i].usbn);
    }
}
void display(book b[5])
{
    for(i=0;i<5;i++)
    {
        printf("The details of book %d are: \nName = %s\nAuthor = %s\nUSBN number = %d\n", i+1, b[i].name, b[i].author, b[i].usbn);
    }
}
void sort(book b[5])
{
    int temp=0;
    printf("Sorted books according to the USBN number: \n");
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(b[j].usbn<b[i].usbn)
            {
                temp=b[j].usbn;
                b[j].usbn=b[i].usbn;
                b[i].usbn=temp;
            }
        }
    }
    display(b);
}
int search(book b[5])
{
    int key,flag=0;
    printf("Enter the USBN of book to be searched: \n");
    scanf("%d", &key);
    for(i=0;i<5;i++)
    {
        if(b[i].usbn==key)
        {
            flag=1;
        }
    }
    return flag;
}

int main()
{
    int s;
    book b[5];
    read(b);
    printf("\n");
    display(b);
    printf("\n");
    sort(b);
    printf("\n");
    s=search(b);
    if(s==1)
        printf("Book found\n");
    else
        printf("Book not found\n");
    return 0;
}

