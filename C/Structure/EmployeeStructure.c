// build employee structure
#include<stdio.h>

struct Employee scanData(struct Employee);

void displayData(struct Employee);

struct Address{
    char street[50],city[50], state[50], pin[50];
};

struct Employee{
    int id;
    char salary[15],name[50],dsg[50],orgName[50];
    struct Address a;
};

void main(){

    struct Employee e[3];

    for (int i = 0; i < 3;i++){

        e[i] = scanData(e[i]);

    }

    for (int i = 0; i < 3;i++){
        displayData(e[i]);
    }

}

struct Employee scanData(struct Employee e){
    printf("\nEnter EmpId: ");
    scanf("%d", &e.id);

    printf("\nEnter Name: ");
    scanf("%s", &e.name);

    printf("\nEnter Salary: ");
    scanf("%s", &e.salary);

    printf("\nEnter designation: ");
    scanf("%s", &e.dsg);

    printf("\nEnter Organization Name: ");
    scanf("%s", &e.orgName);

    printf("\nEnter street: ");
    scanf("%s", &e.a.street);

    printf("\nEnter city: ");
    scanf("%s", &e.a.city);

    printf("\nEnter state: ");
    scanf("%s", &e.a.state);

    printf("\nEnter pin: ");
    scanf("%s", &e.a.pin);

    return e;
}

void displayData(struct Employee e){
    printf("Employee details: ");
    printf("EmpId: %d\tName: %s\tSalary: %s\tDesignation: %s\tOrganization Name: %s\tStreet: %s\tCity: %s\tState: %s\tPin: %s", e.id, e.name, e.salary, e.dsg,e.orgName,e.a.street,e.a.city,e.a.state,e.a.pin);
    printf("\n");
}