#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ARRAY_SIZE = 20;
int LETTERS_SIZE = 26;
int PER_MIN = 60;

int main()
{
    /*generate random letters*/
    char letters[ARRAY_SIZE + 1];
    char inputs[ARRAY_SIZE + 1];
    double time_spent;
    double type_speed;
    double accuracy;

    srand(time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        letters[i] = (rand() % LETTERS_SIZE) + 'a';
    }
    letters[ARRAY_SIZE] = '\0';

    printf("random letters: %s\n", letters);

    /*calculate time spent & type speed*/
    clock_t begin = clock();
    printf("type the letters: ");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        scanf("%c", &inputs[i]);
    }
    clock_t end = clock();

    inputs[ARRAY_SIZE] = '\0';
    time_spent = ((double)(end - begin) / CLOCKS_PER_SEC);
    type_speed = (ARRAY_SIZE / time_spent) * PER_MIN;

    /*calculate accuracy*/
    float correct = 0.0;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (inputs[i] == letters[i])
            correct++;
    }
    accuracy = correct / ARRAY_SIZE * 100;

    /*print results*/
    printf("inputs: %s\n", inputs);
    printf("accuracy: %.2f \n", accuracy);
    printf("time: %f seconds\n", time_spent);
    printf("type speed(char per min): %f\n" , type_speed);
}
