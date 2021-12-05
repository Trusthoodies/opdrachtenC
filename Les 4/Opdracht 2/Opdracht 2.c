int main()
{

    struct information
    {
        char naam[20];
        int leeftijd;
    };

    struct information *pointer = (struct information*)malloc(sizeof(struct information));
    int check = 1;
    int counter = 1;
    struct information*nieuwepointer;

    while (1)
    {
        nieuwepointer = pointer;
        nieuwepointer += (counter-1);

        printf("Geef een naam: ");
        scanf("%s", nieuwepointer->naam);

        
        printf("Geef een leeftijd: ");
        scanf("%d", &nieuwepointer->leeftijd);


        printf("Type 1 als je weer nieuwe informatie  wilt toevoegen: ");
        scanf("%d", &check);
        if (check != 1)
        {
            break;
        }
        printf("\n");

        struct information *pp = pointer;
        for (int i = 0; i < counter; i++)
        {
            printf("%s\n", pp->naam);
            printf("%d\n", pp->leeftijd);
            pp++;
        }

        counter++;

        pointer = (struct information*)realloc(pointer, counter * sizeof(struct information));
        if (pointer == NULL)
        {
            perror("Error");
            exit(-1);
        }
    }





    free(pointer);
    return 0;

}
