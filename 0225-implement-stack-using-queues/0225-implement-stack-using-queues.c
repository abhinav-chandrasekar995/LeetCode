typedef struct {
    int data[100];  
    int front;
    int rear;
} Queue;

void pushQ(Queue* q, int x) {
    q->data[q->rear++] = x;
}

int popQ(Queue* q) {
    return q->data[q->front++];
}

int sizeQ(Queue* q) {
    return q->rear - q->front;
}

int frontQ(Queue* q) {
    return q->data[q->front];
}
typedef struct {
    Queue q;
} MyStack;

MyStack* myStackCreate() {
    MyStack* stack = (MyStack*)malloc(sizeof(MyStack));
    stack->q.front = stack->q.rear = 0;
    return stack;
}

void myStackPush(MyStack* obj, int x) {
    pushQ(&obj->q, x);
    int sz = sizeQ(&obj->q);
    while (sz > 1) {
        pushQ(&obj->q, popQ(&obj->q));
        sz--;
    }
}

int myStackPop(MyStack* obj) {
    return popQ(&obj->q);
}

int myStackTop(MyStack* obj) {
    return frontQ(&obj->q);
}

bool myStackEmpty(MyStack* obj) {
    return sizeQ(&obj->q) == 0;
}

void myStackFree(MyStack* obj) {
    free(obj);
}
