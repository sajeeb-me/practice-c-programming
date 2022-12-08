#include<stdio.h>

struct Food
{
    char name[100];
    double price;
    double tax;
    int f_code;
};

struct Food input_food()
{
    struct Food single_food;

    printf("Food name: ");
    scanf("%s", single_food.name);
    printf("Food price: ");
    scanf("%lf", &single_food.price);
    printf("Food code: ");
    scanf("%d", &single_food.f_code);
    single_food.tax=single_food.price*0.05;

    printf("\n\n");

    return single_food;
};

void print_foods(struct Food f[], int n)
{
    printf("\n___________________________\n");
    for(int i=0; i<n; i++)
    {
        printf("___________________________\n");

        printf("Name: %s\n", f[i].name);
        printf("Price: %.2lf\n", f[i].price);
        printf("Tax: %.2lf\n", f[i].tax);
        printf("Food code: %d\n", f[i].f_code);

        printf("___________________________\n");
    }
    printf("___________________________\n");
}

void order_text()
{
    printf("Order your food by enter food_code or enter 0 to exit: ");
}

int check_food_code(struct Food f[], int n, int code)
{
    int check = 0;
    for(int i=0; i<n; i++)
    {
        if(f[i].f_code == code)
        {
            check = 1;
            break;
        }
    }

    return check;
}

void display_ordered_food(struct Food f[], int n, int ordered[], int idx)
{
    double total_price = 0, total_tax=0;
    for(int i=0; i<idx; i++)
    {
        struct Food food;
        for(int k=0; k<n; k++)
        {
            if(f[k].f_code==ordered[i])
            {
                food=f[k];
            }
        }
        printf("Food name = %s || Food price = %.2lf\n", food.name, food.price);
        total_tax += food.tax;
        total_price += (food.price+food.tax);
    }
    printf("______________________________________________\n");
    printf("Total tax: %.2lf", total_tax);
    printf("\n______________________________________________\n");
    printf("Total price: %.2lf", total_price);
}

int main()
{
    printf("How much food do you want to input: ");
    int n;
    scanf("%d", &n);

    struct Food food_item[n];

    for(int i=0; i<n; i++)
        food_item[i]=input_food();

    print_foods(food_item, n);

    order_text();

    int food_code;
    int ordered_food[1000], idx=0;

    while(scanf("%d", &food_code))
    {
        if(food_code==0)
            break;
        while(check_food_code(food_item, n, food_code)==0)
        {
            printf("Invalid food_code, please try again!\n");
            order_text();
            scanf("%d", &food_code);

            if(food_code==0)
                break;
        }
        if(check_food_code(food_item, n, food_code)==1)
        {
            ordered_food[idx]=food_code;
            idx++;
        }
        if(food_code==0)
            break;

        print_foods(food_item, n);
        order_text();
    }
    display_ordered_food(food_item,n,ordered_food,idx);

    return 0;
}
