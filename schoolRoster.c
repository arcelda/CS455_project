#include <stdio.h>
#include <string.h>

typedef enum {
    TEACHER,
    STAFF,
    STUDENT
} Role;

typedef enum {
    MATH,
    SCIENCE,
    ENGLISH,
    READING,
    WRITING
} Department;

struct TEACHER {
    int salary;
    Department department;
};

struct STUDENT {
    char grade;
};

typedef enum {
    SCHOOL_COUNSELOR,
    DEAN,
    PRINCIPAL,
    ASSISTANT_PRINCIPAL,
    JANITOR,
    LIBRARIAN,
    ATHLETICS_DIRECTOR
} Position;

struct STAFF {
    int salary;
    Position position;
};

typedef struct {
    char street[50];
    char city[50];
    char state[3]; // 2-Letter state code and null terminator
    char zip[10];
} Address;

typedef struct {
    char first_name[25];
    char middle_name[25];
    char last_name[25];
} Name;

struct person {
    Name name;
    int age;
    Role role;
    Address address;
};
