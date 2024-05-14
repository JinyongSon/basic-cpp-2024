#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book {
    char title[100];
    char author[100];
    char publisher[100];
    char summary[100];
    int available;
    struct Book* next;
}book;

void addBook(book* node)
{
    book* newNode = (book*)malloc(sizeof(book));

    printf("책 제목을 입력하세요: ");
    scanf("%s", newNode->title);
    printf("책 저자를 입력하세요: ");
    scanf("%s", newNode->author);
    printf("책 출판사를 입력하세요: ");
    scanf("%s", newNode->publisher);
    printf("책 줄거리를 입력하세요: ");
    scanf("%s", newNode->summary);
    newNode->available = 1;
    newNode->next = NULL;

    while (node->next != NULL) {
        node = node->next;
    }
    node->next = newNode;
    printf("도서가 등록되었습니다\n");
}

void searchBook(book* node, char* name) {
    char borrowyn[100];
    char returnyn[100];
    book* curr = node->next;
    while (curr != NULL) {
        if (strcmp(curr->title, name) != 0 && strcmp(curr->author, name) != 0 && strcmp(curr->publisher, name) != 0) {
            curr = curr->next;
            if (curr == NULL) {
                printf("찾으려는 책이 없습니다\n");
            }
        }
        else if (strcmp(curr->title, name) == 0 || strcmp(curr->author, name) == 0 || strcmp(curr->publisher, name) == 0) {
            printf("제목: %s\n저자: %s\n출판사: %s\n줄거리: %s\n대여 가능 여부: %s\n",
                curr->title, curr->author, curr->publisher,
                curr->summary, curr->available ? "대여 가능" : "대여 중");
            if (curr->available == 1) {
                printf("대여 하시겠습니까?(y / n)");
                scanf("%s", borrowyn);
                while (getchar() != '\n');
                if (strcmp(borrowyn, "y") == 0 && curr->available == 1) {
                    curr->available = 0;
                    printf("대여 완료되었습니다\n");
                    break;
                }
                else if (strcmp(borrowyn, "y") == 0 && curr->available == 0) {
                    printf("이미 대여 중 입니다\n");
                    break;
                }
                else {
                    printf("다시 입력하세요\n");
                }
            }
            else if (curr->available == 0) {
                printf("반납 하시겠습니까?(y / n)");
                scanf("%s", returnyn);
                while (getchar() != '\n');
                if (strcmp(returnyn, "y") == 0 && curr->available == 0) {
                    curr->available = 1;
                    printf("반납 완료되었습니다\n");
                    break;
                }
                else if (strcmp(returnyn, "n") == 0) {
                    break;
                }
                else {
                    printf("다시 입력하세요\n");
                }
            }
            //break;
        }
    }
}

void deleteBook(book* node)
{
    book* curr = node;
    book* prev = NULL;
    char deltitle[100];
    printf("삭제할 제목을 입력하세요: ");
    scanf("%s", deltitle);

    while (curr != NULL) {
        if (strcmp(curr->title, deltitle) == 0) {
            if (prev == NULL) {
                node = curr->next;
            }
            else {
                prev->next = curr->next;
            }
            printf("도서가 삭제되었습니다.\n");
            free(curr);
        }
        prev = curr;
        curr = curr->next;
    }
}

void showBook(book* node)
{
    int i = 1;
    book* curr = node->next;
    if (curr != NULL) {
        printf("도서목록\n");
    }
    else if (curr == NULL) {
        printf("등록된 도서가 없습니다\n");
    }
    while (curr != NULL) {
        printf("%d. 제목: %s\n   저자: %s\n   출판사: %s\n   줄거리: %s\n   대여 가능 여부: %s\n"
            , i, curr->title, curr->author, curr->publisher
            , curr->summary, curr->available ? "대여 가능" : "대여 중");
        i++;
        curr = curr->next;
    }
}

void allFreeNode(book* node)
{
    book* curr = node->next;
    while (curr != NULL) {
        node->next = curr->next;
        free(curr);
        curr = node->next;
    }
}

void main()
{
    book* head = (book*)malloc(sizeof(book));
    head->next = NULL;

    while (true)
    {
        int num;
        int searchnum;
        char searchname[100];
        printf("**** 메뉴 ****\n");
        printf("1 도서등록\n");
        printf("2 도서검색\n");
        printf("3 도서삭제\n");
        printf("4 도서출력\n");
        printf("0 종료\n");
        printf("메뉴를 선택하세요: ");
        scanf("%d", &num);

        while (getchar() != '\n');

        if (num == 1) {
            addBook(head);
        }
        else if (num == 2) {
            while (true)
            {
                printf("검색 메뉴\n");
                printf("1 제목\n");
                printf("2 저자\n");
                printf("3 출판사\n");
                printf("메뉴를 선택하세요: ");
                scanf("%d", &searchnum);
                while (getchar() != '\n');
                if (searchnum == 1) {
                    printf("찾으려는 책 제목을 입력하세요: ");
                    scanf("%s", searchname);
                    searchBook(head, searchname);
                    break;
                }
                else if (searchnum == 2) {
                    printf("찾으려는 책 저자를 입력하세요: ");
                    scanf("%s", searchname);
                    searchBook(head, searchname);
                    break;
                }
                else if (searchnum == 3) {
                    printf("찾으려는 출판사를 입력하세요: ");
                    scanf("%s", searchname);
                    searchBook(head, searchname);
                    break;
                }
                else {
                    printf("다시 입력하세요\n");
                }
            }
            //            searchBook(head);
        }
        else if (num == 3) {
            deleteBook(head);
        }
        else if (num == 4) {
            showBook(head);
        }
        else if (num == 0) {
            printf("프로그램을 종료합니다\n");
            allFreeNode(head);
            break;
        }
        else {
            printf("다시 입력하세요\n");
        }
    }
}