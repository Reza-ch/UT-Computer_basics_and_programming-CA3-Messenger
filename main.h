#ifndef _main_h
#define _main_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
typedef struct post
{
    int post_id;
    int like;
    char *text;
    struct post *next;
} post;
typedef struct user
{
    char *username;
    char *password;
    post *post_head;
    struct user *next;
} user;
void dynamic_input(char **address, char a, char b);
user *scan_user_list(user *head, char *username);
post *scan_post_list(post *head, int post_id);
#endif