#include "queue.h"

void CraetQueue(Queue *pq){
pq->front =0 ;
pq->rear=-1;
pq->size=0;
}

void AppendQueue(QueueEntry e,Queue *pq){
pq->rear = (pq->rear+1)%MAXQUEUE;
pq->entry[pq->rear]=e;
pq->size++;
}

void ServeQueue(QueueEntry *pe,Queue *pq){
     *pe=pq->entry[pq->front] ;
     pq->front=(pq->front+1)%MAXQUEUE;

    pq->size--;
}

int queueEmpty(Queue *pq){
return !pq->size;
}

int QueueFull(Queue *pq){
return (pq->size==MAXQUEUE);
}

int QueueSize(Queue *pq){
return pq->size;
}
void ClearQueue(Queue *pq){
pq->front =0 ;
pq->rear=-1;
pq->size=0;
}

void TraversaQueue(Queue *pq , void (*pf)(QueueEntry)){
int pos , s ;
for(pos=pq->front,s=0;s<pq->size;s++){
(*pf)(pq->entry[pos]);
pos=(pos+1)%MAXQUEUE;
}
}
