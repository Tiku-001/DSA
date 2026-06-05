#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
// Function to check if the stack is empty
int isEmpty() {
return (top -1);
}
// Function to check if the stack is full
int isFull() {
return (top == MAX_SIZE -1);
}
// Function to add an element to the stack
void push(int value) {
if (isFull()) {
printf("Stack Overflow\n");
} else {
stack[++top] = value;
printf("Pushed %d onto the stack\n", value);
}
}
// Function to remove an element from the stack
int pop() {
if (isEmpty()) {
printf("Stack Underflow\n");
return -1; // Or some error code
} else {
}
int value = stack[top--];
printf("Popped %d from the stack\n", value);
return value;
}
// Function to get the top element without removing it
int peek() {
if (isEmpty()) {
printf("Stack is empty\n");
return -1;
} else {
return stack[top];
}
}
// Main function to demonstrate stack operations
int main() {
push(10);
push(20);
push(30);
printf("Top element is %d\n", peek());
pop();
printf("Top element is %d\n", peek());
pop();
pop();
}