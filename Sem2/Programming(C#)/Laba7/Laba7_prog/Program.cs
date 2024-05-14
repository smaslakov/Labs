using Laba7_prog;


Circle circle1 = new Circle(3, 4, 5);
Circle circle2 = new Circle(1, 2, 3);

Console.WriteLine(circle1);
Console.WriteLine(circle2);

circle1++; 
circle2--; 

Console.WriteLine("After postfix increment and decrement:");
Console.WriteLine(circle1);
Console.WriteLine(circle2);

++circle1; 
--circle2; 

Console.WriteLine("After prefix increment and decrement:");
Console.WriteLine(circle1);
Console.WriteLine(circle2);

Circle circle3 = -circle1; 

Console.WriteLine("Negated circle:");
Console.WriteLine(circle3);

Circle circle4 = circle2 * 2; 

Console.WriteLine("Multiplied circle:");
Console.WriteLine(circle4);

Circle circle5 = circle4 / 3; 

Console.WriteLine("Divided circle:");
Console.WriteLine(circle5);

bool isEqual = circle1 == circle2;
bool isNotEqual = circle1 != circle2;
bool isLess = circle1 < circle2;
bool isGreater = circle1 > circle2;

Console.WriteLine("Comparison results:");
Console.WriteLine($"circle1 == circle2: {isEqual}");
Console.WriteLine($"circle1 != circle2: {isNotEqual}");
Console.WriteLine($"circle1 < circle2: {isLess}");
Console.WriteLine($"circle1 > circle2: {isGreater}");

double radius = (double)circle1;
Circle circle6 = (Circle)7.5;

Console.WriteLine("Conversion results:");
Console.WriteLine($"circle1 as double: {radius}");
Console.WriteLine($"7.5 as Circle: {circle6}");

double perimeter1 = circle1.Perimeter();
double area2 = circle2.Area();

Console.WriteLine("Perimeter and area:");
Console.WriteLine($"Perimeter of circle1: {perimeter1}");
Console.WriteLine($"Area of circle2: {area2}");