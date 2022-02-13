typedef struct point {
    int x;
    char y;
    int z;
} Point;

void init_pt(Point *p) {
    p->x = 1;
    p->y = 'a';
    p->z = 3;
}

int main() {
    Point p1;
    init_pt(&p1);   
    return 0;
}