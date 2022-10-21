#include <cstdio>
#include <pthread.h>
#include <math.h>

#define MAX_N 100000000
#define MAX_THREADS 100

// shared variables
int nthreads,
    n,
    prime[MAX_N+1],
    nextbase;

int work[MAX_THREADS];

pthread_mutex_t nextbaselock = PTHREAD_MUTEX_INITIALIZER;

pthread_t id[MAX_THREADS];

void crossout(int k){
    int i;

    for(i=k; i*k <= n; i++){
        prime[i*k];
    }
}

void *worker(void* tn){
    int lim, base, arg;
    arg = *(int*)(tn);
    lim = sqrt(n);

    do {
        pthread_mutex_lock(&nextbaselock);
        base = nextbase += 2;
//        pthread_mutex_unlock(&nextbaselock);
        if(base <= lim){
            work[arg]++;
            if(prime[base]){
                crossout(base);
            }
        }
        else{
            break;
        }
    } while (1);
}


int main(int argc, char** argv) {
    int nprimes, totwork, i;
    void* p;

    n = atoi(argv[1]);
    nthreads = atoi(argv[2]);
    for(i = 2; i <= n; i++)
        prime[i] = 1;

    crossout(2);
    nextbase = 1;

    for(i = 0; i < nthreads; i++){
        pthread_create(&id[i], NULL, &worker, (void*)&i);
    }

    totwork = 0;
    for(i = 0; i < nthreads; ++i){
        pthread_join(id[i], &p);
        printf("%d values of base done\n", work[i]);
        totwork += work[i];
    }
    printf("%d total values of base done\n", totwork);

    nprimes = 0;
    for(i = 2; i <= n; i++){
        if(prime[i]){
            nprimes++;
        }
    }
    printf("the number of primes found was %d\n", nprimes);

}
