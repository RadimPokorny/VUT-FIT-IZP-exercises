#include <stdio.h>
#include <stdlib.h>

print_items(int *numbers, int current_size){
    printf("Current size %d", current_size);
    if(current_size == 0){
        printf("No items");
        return;
    }

    for(int i = 0; i<current_size;++i){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
}

void add_item (int *numbers, int *current_size){
    printf("Add item to 1. place");
    scanf("%d", &numbers[*current_size]);
    *current_size = *current_size + 1;
}

void remove_last_item (int *current_size){
    printf("Removing last item");
   (*current_size)--;
}



int main(int argc, char *argv[]){
/*
    for( int arg_index = 0; arg_index < argc; arg_index++){

        printf("argv[%d] = %s\n",argc ,argv[arg_index]);

    }
    
    
    if(argc < 2){
        printf("Wrong argument count, expected 2 at least");
        // Indentifikace chyby aplikace
        return 1;
    }
    */

    int size = atoi(argv[1]);
    int *numbers = malloc(size * sizeof(int));

    int index = 0;
    int number_count = 0;

    for(index; index< size; index++){

        printf("%d\n", numbers[index]);
    }    

    print_items(numbers, number_count );
    add_item(numbers, &number_count);
    print_items(numbers, number_count);
    remove_last_item(number_count);
    print_items(numbers, number_count);

    return 0;
}
