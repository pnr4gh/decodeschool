union area
{
   int x, y;
};
 
int main()
{
    union area a;
 
    a.x = 2; 
    printf ("After making x = 2:\n x = %d, y = %d\n\n",
             a.x, a.y);
 
    t.y = 10;  
    printf ("After making Y = 10:\n x = %d, y = %d\n\n",
             a.x, a.y);
    return 0;
}
