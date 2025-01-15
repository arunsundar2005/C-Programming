#include  <stdio.h>

struct structureAsArguments             // The structure can also be made as a local variable, but the same structure skeleton must be taken as a argument in this case 'structureAsArguments'
{
    int x;
    double y;
};

void print(struct structureAsArguments a);
int main()
{
    struct structureAsArguments s= {54, 959.66515684};
    print(s);
}

void print(struct structureAsArguments a)
{
    printf("The first element of the structure is : %d\n", a.x);
    printf("The second element of the structure is : %lf", a.y);
}