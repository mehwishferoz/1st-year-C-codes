#include<stdio.h>

struct application
{
    float app_version;
    char app_name[20];
};

struct mobile
{
    float mob_version;
    char mob_name[50];
    struct application app_data;
};

struct mobile read(struct mobile);
void display(struct mobile);

int main()
{
    struct mobile m1;
    m1=read(m1);
    display(m1);
    return 0;
}
struct mobile read(struct mobile m1)
{
    printf("Enter the version of mobile, name of mobile, version of application and name of the application: \n");
    scanf("%f%s%f%s", &m1.mob_version, m1.mob_name, &m1.app_data.app_version, m1.app_data.app_name);
    return m1;
}
void display(struct mobile m1)
{
    printf("The version of mobile = %f\nThe name of mobile = %s\nThe version of application = %f\nThe name of the application = %s\n", m1.mob_version, m1.mob_name, m1.app_data.app_version, m1.app_data.app_name);
}
