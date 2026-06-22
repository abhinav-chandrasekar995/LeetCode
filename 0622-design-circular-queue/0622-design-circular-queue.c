


typedef struct {
    int *queue;
    int capacity;
    int front;
    int rear;
    int size;
} MyCircularQueue;
bool myCircularQueueEnQueue(MyCircularQueue* obj, int value);
bool myCircularQueueDeQueue(MyCircularQueue* obj);
int myCircularQueueFront(MyCircularQueue* obj);
int myCircularQueueRear(MyCircularQueue* obj);
bool myCircularQueueIsEmpty(MyCircularQueue* obj);
bool myCircularQueueIsFull(MyCircularQueue* obj);
void myCircularQueueFree(MyCircularQueue* obj);

MyCircularQueue* myCircularQueueCreate(int k) {
    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof      (MyCircularQueue));
    obj->queue=(int*)malloc(sizeof(int)*k);
    obj->front=-1;
    obj->rear=-1;
    obj->size=0;
    obj->capacity=k;
    return obj;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
      if(myCircularQueueIsFull(obj))
      {
       return false;
      }
      if(obj->front==-1)
       obj->front=0;
      obj->rear=(obj->rear+1)%obj->capacity;
      obj->queue[obj->rear]=value;
      obj->size++;
      return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {
    if(myCircularQueueIsEmpty(obj))
    return false;
    if(obj->front==obj->rear)
    {
        obj->front=-1;
        obj->rear=-1;
    }
    else{
        obj->front=(obj->front+1)%obj->capacity;
    }
    obj->size=obj->size-1;
    return true;
}

int myCircularQueueFront(MyCircularQueue* obj) {
    int element=-1;
    if(obj->front==-1)
    return -1;
    else
    {
    element = obj->queue[obj->front];
    return element;
    }
}

int myCircularQueueRear(MyCircularQueue* obj) {
    int element=-1;
    if(obj->rear==-1)
    return -1;
    else
    {
    element = obj->queue[obj->rear];
    return element;
    }
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
   if((obj->front==-1))
   return true;
   else
   return false;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
     if((obj->front==obj->rear+1)||(obj->front==0&&obj->rear==obj->capacity-1))
     return true;
     else
     return false;
}

void myCircularQueueFree(MyCircularQueue* obj) {
    free(obj->queue);
    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/