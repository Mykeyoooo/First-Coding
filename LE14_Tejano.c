#include <stdio.h>
#include <string.h>

int main () {
    FILE *fp;
    
    int id = 0;
    int choice = 1;
    char name[50] = " ";
    char section[50] = " ";
    
    fp= fopen("student_records.txt", "a+");
    if(fp == NULL) {
        
        return 1;
    }
    
    while (choice == 1){
        printf("Enter Student Number: ");
        scanf("%d", &id);
        getchar();
        
        printf("Enter Complete Name: ");
        fgets(name, sizeof(name), stdin);
        
        printf("Enter Section: ");
        fgets(section, sizeof(section), stdin);
        
        fprintf(fp, "ID NUMBER: %d\nComplete Name: %sSection: %s", id, name, section);
        printf("Add another student? [Enter 1 for Yes, 0 for No]: ");
        scanf("%d", &choice);
        printf("Record added and saves successfull\n");
        
        }
        fclose(fp);
        return 0;

}
