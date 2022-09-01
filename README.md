The C Programming Language 
===

Code examples and exercises from
Book by Brian W. Kernighan and Dennis M. Ritchie

Abstract
---

This playground project is a follow up on a book examples and exercises given 
in the book "The C Programming Language".

All code collected in a tree-formed directory structure where `chN` is a short 
for the corresponding chapter and `subN_N` is a short for sub-chapter in it.

[TOC]

### Chapter 1. A tutorial introduction

This chapter will give you brief introduction to the C language basic syntax. 
Introduce you to main compilation command. And will give an overview on basic 
language concepts, such as function block, library inclusion, variable 
declaration and assignment, and so on.

#### 1.1 Getting Started

* C programm entry point;
* Base syntax overview;
* And purpose of \n in output.

ANSI compatible compiler allowed not to define return type for main function.

The programm can be compiled via: `cc hello.c`, or `gcc -ansi hello.c`

#### 1.2 Variables and Arithmetic Expressions

* Multiline comments;
* Variables declaration, assignment, and numeric types;
* Looping via while;
* String formating with %d for integers and %f for float.

#### 1.3 The for statement

* For loop.

#### 1.4 Symbolic Contants

* #define declaration - basically this is a macro;

#### 1.5 Character Input / Output

* getchar / putchar;
* Special EOF signal;
* Post-assignment comparison;
* Post-/Pre-increment / decrement;
* If and else conditioning and logical or `||` operator.

#### 1.6 Arrays

* Arrays and indexing;
* If else-if else branching.

#### 1.7 Functions

* Function declaration and definition;
* Function invocation;
* Return operator.

#### 1.8 Arguments - Call by Value

* Function arguments are passed by value.

#### 1.9 Character Arrays

* Char array and string terminator `\0`;
* Hidden passing by reference.

#### 1.10 External Variables and Scope

* Global access via extern;
* Extern can be omitted if variable declared in a upper scope and used after.
