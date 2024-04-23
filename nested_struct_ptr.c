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

void read(struct mobile*);
void display(struct mobile*);

int main()
{
    struct mobile m1, *m;
    m=&m1;
    read(m);
    display(m);
    return 0;
}
void read(struct mobile *m)
{
    printf("Enter the version of mobile, name of mobile, version of application and name of the application: \n");
    scanf("%f%s%f%s", &m->mob_version, m->mob_name, &m->app_data.app_version, m->app_data.app_name);
}
void display(struct mobile *m)
{
    printf("The version of mobile = %f\nThe name of mobile = %s\nThe version of application = %f\nThe name of the application = %s\n", m->mob_version, m->mob_name, m->app_data.app_version, m->app_data.app_name);
}
