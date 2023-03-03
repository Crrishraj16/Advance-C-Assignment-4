#include <stdio.h>

#define MAX_ITEMS 10
#define MAX_FRIENDS 5

struct Party {
    float item_prices[MAX_ITEMS];
    int num_items;
    float expenses;
};

struct Friends {
    char name[20];
    float share;
};

int main() {
    struct Party party;
    struct Friends friends[MAX_FRIENDS];
    int num_friends;
    int i;

    printf("Enter the number of items used in the party: ");
    scanf("%d", &party.num_items);

    printf("Enter the prices of %d items:\n", party.num_items);
    for (i = 0; i < party.num_items; i++) {
        printf("Item %d: ", i+1);
        scanf("%f", &party.item_prices[i]);
        party.expenses += party.item_prices[i];
    }

    printf("Enter the number of friends to split the expenses: ");
    scanf("%d", &num_friends);

    for (i = 0; i < num_friends; i++) {
        printf("Enter the name of friend %d: ", i+1);
        scanf("%s", friends[i].name);
        friends[i].share = party.expenses / num_friends;
    }

    printf("Total expenses: Rs. %.2f\n", party.expenses);
    printf("Each friend should pay: Rs. %.2f\n", friends[0].share);
    printf("Shares of friends:\n");
    for (i = 0; i < num_friends; i++) {
        printf("%s: Rs. %.2f\n", friends[i].name, friends[i].share);
    }

    return 0;
}
