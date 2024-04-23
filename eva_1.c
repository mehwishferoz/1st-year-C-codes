#include<stdio.h>

typedef struct transaction
{
    char senders_name[20], recievers_name[20];
    int transaction_ID, contact_num;
    float amount;
} t;

int i;

void read(t*, int);
void display(t*, int);
void sort(t*, int);
void morethan_1lakh(t*, int);

int main()
{
    t t1[20], *p;
    p=t1;
    int N;
    printf("Enter the number of transactions: \n");
    scanf("%d", &N);
    read(p,N);
    display(p,N);
    sort(p,N);
    morethan_1lakh(p,N);
    return 0;
}

void read(t *p, int N)
{
    printf("\nEnter the transaction details: \n");
    for(i=0;i<N;i++)
    {
        printf("Details of Transaction %d: \n", i+1);
        printf("Sender's name\tReciever's name\tTransaction ID\tContact number\tAmount\n");
        scanf("%s%s%d%d%f", (p+i)->senders_name, (p+i)->recievers_name, &(p+i)->transaction_ID, &(p+i)->contact_num, &(p+i)->amount);
    }
}

void display(t *p, int N)
{
    printf("\nEntered transaction details: \n");
    for(i=0;i<N;i++)
    {
        printf("Sender's name = %s\tReciever's name = %s\tTransaction ID = %d\tContact number = %d\tAmount = %f\n", (p+i)->senders_name, (p+i)->recievers_name, (p+i)->transaction_ID, (p+i)->contact_num, (p+i)->amount);
    }
}

void sort(t *p, int N)
{
    t temp;
    printf("\nStructure sorted according to transaction ID: \n");
    for(i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if((p+j)->transaction_ID<(p+i)->transaction_ID)
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    display(p,N);
}

void morethan_1lakh(t *p, int N)
{
    int count=0;
    for(i=0;i<N;i++)
    {
        if((p+i)->amount > 100000)
        {
            count++;
        }
    }
    printf("\nNumber of transactions where amount transferred is more than 1 lakh = %d", count);
}
