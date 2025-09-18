### LAB TASK 05
## Nested Switch

#include<stdio.h>
#include<string.h>
struct courses {
    int eng_spec;
    int med_spec;
    int dep;
};
int main(void) {
    struct courses c1;
    printf("Choose your Deprtment");
    printf("1. Computer Science");
    printf("2. Engineering");
    scanf("%d", &c1.dep);
    switch (c1.dep) {
        case 1:
            printf("You chose Computer Science\n");
            printf("Choose Specialization\n");
            printf("1. Data Science\n");
            printf("2. SWE\n>");
            scanf("%d", &c1.eng_spec);
            switch (c1.eng_spec) {
                case 1:
                    printf("You chose Data Science as specialization\n");
                    break;
                case 2:
                    printf("You chose SWE as specialization\n");
                    break;
            }
            break;
        case 2:
            printf("You chose Engineering\n");
            printf("Choose Sepcialization \n");
            printf("1. Electrical Engineer\n");
            printf("2. Mechanical Engineer\n>");
            scanf("%d", &c1.med_spec);
            switch(c1.med_spec) {
                case 1:
                    printf("You chose Electrical Engineering as specialization\n");
                    break;
                case 2:
                    printf("You chose Mechanical Engineering as specialization\n");
                    break;
            }
            break;
        }
}
