#define MAXQUEUE 100
#define QueueEntry int
typedef struct  queue {
int front ;
int rear ;
int size ;
QueueEntry entry[MAXQUEUE];
}Queue;

void CraetQueue(Queue *pq);
void AppendQueue(QueueEntry e,Queue *pq);
void ServeQueue(QueueEntry *pe,Queue *pq);
int queueEmpty(Queue *pq);

int QueueFull(Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraversaQueue(Queue *pq , void (*pf)(QueueEntry));
