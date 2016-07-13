#include <assert.h>

int *map(int (*f)(), int *l, int len) {
    int i;
    for (i=0; i<len; i++) {
        l[i] = f(l[i]);
    }
    return l; 
}

int fold(int (*f)(), int *l, int s, int len) {
    int i;
    int t = s;
    for (i=0; i<len; i++) {
        t = f(l[i],t);                
    }
    return t;
}

int m(int x) { 
    return 2 * x; 
}

int f(int el, int acc) { 
    return el + acc; 
}

void main(void) {
    int len,result;
    int list[] = {1,2,3,4};
    len = sizeof(list) / sizeof(list[0]);
    result = fold(&f, map(&m, list, len), 5, len); 
    assert(result == 25);
}
