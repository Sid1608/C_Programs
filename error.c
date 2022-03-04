main()
{
    int salary;
    float der_allowance,hr_allowance,gross_salary;
    printf("Enter your salary");
    der_allowance=(40/100*salary);
    hr_allowance=(20/100*salary);

    gross_salary=salary-(der_allowance+hr_allowance);
    printf("your gross salary is ",gross_salary);

}
