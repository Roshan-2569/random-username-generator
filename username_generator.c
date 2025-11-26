#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(NULL));

    // List of adjectives
    char adjectives[][20] = {
        "Silent", "Crazy", "Brave", "Happy",
        "Swift", "Lone", "Magic", "Cosmic"
    };

    // List of nouns
    char nouns[][20] = {
        "Ninja", "Tiger", "Wizard", "Storm",
        "Shadow", "Phoenix", "Wolf", "Knight"
    };

    int adjCount = sizeof(adjectives) / sizeof(adjectives[0]);
    int nounCount = sizeof(nouns) / sizeof(nouns[0]);

    // Randomly choose one adjective and one noun
    int a = rand() % adjCount;
    int n = rand() % nounCount;

    // Random number at end (0-99)
    int num = rand() % 100;

    // Make final username
    char username[50];
    sprintf(username, "%s%s%d", adjectives[a], nouns[n], num);

    printf("\n🔹 Your Random Username is: %s\n", username);

    return 0;
}
