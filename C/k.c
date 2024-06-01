#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_USERS 100

// Struct to represent a book
typedef struct {
  char title[50];
  char author[50];
  char publisher[50];
  char isbn[20];
  int borrowed; // 0 if not borrowed, 1 if borrowed
} Book;

// Struct to represent a user
typedef struct {
  char name[50];
  char address[100];
  int borrowed_books[MAX_BOOKS]; // List of borrowed book indices
  int num_borrowed; // Number of borrowed books
} User;

// Global arrays to store books and users
Book books[MAX_BOOKS];
User users[MAX_USERS];

int num_books = 0; // Number of books in the library
int num_users = 0; // Number of users

// Function prototypes
void add_book();
void borrow_book();
void return_book();
void print_books();
void print_users();

int main() {
  // Display menu and handle user input
  int input;
  do {
    printf("1. Add book\n");
    printf("2. Borrow book\n");
    printf("3. Return book\n");
    printf("4. Print books\n");
    printf("5. Print users\n");
    printf("6. Quit\n");
    printf("Enter a selection: ");
    scanf("%d", &input);

    switch (input) {
      case 1:
        add_book();
        break;
      case 2:
        borrow_book();
        break;
      case 3:
        return_book();
        break;
      case 4:
        print_books();
        break;
      case 5:
        print_users();
        break;
      case 6:
        break;
      default:
        printf("Invalid input\n");
    }
  } while (input != 6);

  return 0;
}


