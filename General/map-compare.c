#include <stdio.h>

int main() {
    // Define the map link
    char mapLink[] = "https://maps.app.goo.gl/bXKu4j1ZA38NJGfh7";

    // Print the map link in the terminal with underlining
    printf("Map link: \033[4m%s\033[0m\n", mapLink);

    return 0;
}
