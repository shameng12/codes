#include <stdio.h>

#define MAX 3  // Number of students

// Structure to store student information
struct Student {
    int roll_no;
    int age;
    float percentage;
};

// Function prototypes
void create(struct Student s[], int n);
void display(struct Student s[], int n);

int main() {
    struct Student students[MAX];
    int choice;

    printf("=== Student Database Management ===\n");

    // Create records
    create(students, MAX);

    // Display records
    display(students, MAX);

    return 0;
}

// Function to create student records
void create(struct Student s[], int n) {
    printf("\nEnter details of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Percentage: ");
        scanf("%f", &s[i].percentage);
    }
}

// Function to display student records
void display(struct Student s[], int n) {
    printf("\n=== Student Details ===\n");
    printf("Roll No\tAge\tPercentage\n");
    printf("-----------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t%.2f\n", s[i].roll_no, s[i].age, s[i].percentage);
    }
}


algoritm:

Step 1: Start the program.
Step 2: Define a structure named Student with fields:
  roll_no, age, and percentage.
Step 3: Declare an array of structure variables, e.g. students[3].
Step 4: Call the Create function to input details for all 3 students.
  → For each student:
   a. Input roll number.
   b. Input age.
   c. Input percentage.
Step 5: Call the Display function to show all student details.
  → For each student:
   a. Print roll number, age, and percentage.
Step 6: Stop the program.
