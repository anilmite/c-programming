#include<stdio.h>
    struct Employee_t{
        int id;
        char name[255];
        float salary;
        char dept[60];
    };

typedef struct Employee_t Employee;
void readEmp(Employee emp[],int n);
void DispEmp(Employee emp[],int n);
Employee find_Highest_salary(Employee emp[],int n);

int main(){
    int Empcount;
    printf("Enter number of employee:");
    scanf("%d",&Empcount);
    Employee Employees[1000];
    readEmp(Employees,Empcount);
    DispEmp(Employees,Empcount);
    Employee Highest_salary_employee=find_Highest_salary(Employees,Empcount);
    printf("Employee with highest salary %s,%.2f,(%s)\n",Highest_salary_employee.name,
    Highest_salary_employee.salary,Highest_salary_employee.dept);
    return 0;
}

void readEmp(Employee emp[],int n){
    printf("Enter %d employee details\n",n);
    for(int i=0;i<n;i++){
    printf("Enter %d Employee Id, Name, Salary,Department:",i+1);
    scanf("%d %s %f %s", &emp[i].id,emp[i].name,&emp[i].salary,emp[i].dept);
}
}
void DispEmp(Employee emp[],int n){
    for(int i=0;i<n;i++){
        printf("Employee %d\n",i+1);
printf("Id:%d\t Name:%s\t Salary:%f\t Department:%s\n", emp[i].id,
    emp[i].name,emp[i].salary,emp[i].dept);
}
}

Employee find_Highest_salary(Employee emp[],int n){
    Employee emps=emp[0];
    for(int i=0;i<n;i++){
        if(emp[i].salary>emps.salary){
            emps=emp[i];
    }
}return emps;
}

