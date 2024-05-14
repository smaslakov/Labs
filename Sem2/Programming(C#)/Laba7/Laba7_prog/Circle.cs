namespace Laba7_prog;

public class Circle
{
    private double center_x;
    private double center_y;
    private double radius;

    public Circle(double center_x, double center_y, double radius)
    {
        if (center_x == 0 && center_y == 0)
        {
            throw new ArgumentException("Invalid center coordinates. The center cannot be at the origin.");
        }

        if (radius <= 0)
        {
            throw new ArgumentException("Invalid radius value. The radius must be positive.");
        }

        this.center_x = center_x;
        this.center_y = center_y;
        this.radius = radius;
    }

    public double Perimeter()
    {
        return 2 * Math.PI * radius;
    }

    public double Area()
    {
        return Math.PI * radius * radius;
    }

    public static Circle operator ++(Circle circle)
    {
        circle.radius++;
        return circle;
    }
    
    public static Circle operator --(Circle circle)
    {
        if (circle.radius > 0)
        {
            circle.radius--;
        }
        return circle;
    }

    public static Circle operator -(Circle circle)
    {
        circle.radius = -circle.radius;
        return circle;
    }

    public static Circle operator *(Circle circle, double scalar)
    {
        circle.radius *= scalar;
        return circle;
    }

    public static Circle operator /(Circle circle, double scalar)
    {
        if (scalar != 0)
        {
            circle.radius /= scalar;
        }
        return circle;
    }

    public static bool operator ==(Circle circle1, Circle circle2)
    {
        if (ReferenceEquals(circle1, circle2))
        {
            return true;
        }

        if (circle1 is null || circle2 is null)
        {
            return false;
        }

        return circle1.Area() == circle2.Area();
    }

    public static bool operator !=(Circle circle1, Circle circle2)
    {
        return !(circle1 == circle2);
    }

    public static bool operator <(Circle circle1, Circle circle2)
    {
        if (circle1 is null || circle2 is null)
        {
            throw new ArgumentNullException();
        }

        return circle1.Area() < circle2.Area();
    }

    public static bool operator >(Circle circle1, Circle circle2)
    {
        if (circle1 is null || circle2 is null)
        {
            throw new ArgumentNullException();
        }

        return circle1.Area() > circle2.Area();
    }

    public static explicit operator Circle(double radius)
    {
        return new Circle(1, 1, radius);
    }

    public static explicit operator double(Circle circle)
    {
        return circle.radius;
    }

    public override string ToString()
    {
        return $"Circle with center ({center_x}, {center_y}) and radius {radius}";
    }
}