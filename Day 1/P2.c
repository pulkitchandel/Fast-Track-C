float areaOfcircle(float radius_circle){
   float area_circle;
   area_circle = 3.14 * radius_circle * radius_circle;

   return area_circle;
}

int main() {
    float radius;

    // take radius as input
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);

    printf("Area of circle : %.2f", areaOfcircle(radius));

   return 0;
}
