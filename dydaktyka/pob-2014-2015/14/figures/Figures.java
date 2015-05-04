import java.util.Arrays;

class Point {
    double x = 0;
    double y = 0;
    
    Point() { }
    
    Point(double x, double y) {
        this.x = x;
        this.y = y;
    }
    
    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}

interface Moveable {
    public void move(double x, double y);
}

abstract class Figure implements Moveable, Comparable {
    Point position = new Point();
    int verticesAmount = 0;
    
    public Figure() {
    }
    
    public Figure(double x, double y, int n) {
        this.position = new Point(x, y);
        this.verticesAmount = n;
    }
    
    public abstract double area();
    
    public String toString() {
        return "position: " + position + " area: " + area();
    }
    
    public int compareTo(Object obj) {
        return ((Double)area()).compareTo(((Figure)obj).area());
    }
}

class Square extends Figure {
    double a = 0;
    
    public Square(double x, double y, double a) {
        super(x, y, 4);
        this.a = a;
    }
    
    public double area() {
        return a * a;
    }
       
    public void move(double x, double y) {
        this.position.x += x;
        this.position.y += y;
    }

    public String toString() {
        return "Circle position: " + position + " area: " + area();
    }
}

class Circle extends Figure implements Moveable {
    double radius = 0;
    
    static final double PI = 3.14;
    
    Circle(double x, double y, double radius) {
        super(x, y, 0);
        this.radius = radius;
    }
        
    public double area() {
        return PI * radius * radius;
    }
        
    public void move(double x, double y) {
        this.position.x += x;
        this.position.y += y;
    }

    public String toString() {
        return "Square position: " + position + " area: " + area();
    }
}

public class Figures {
    public static void main(String[] args) {
        // stworzenie tablicy figur
        Figure[] figures = { 
            new Circle(0, 0, 1),
            new Circle(1, 1, 2),
            new Square(2, 2, 1.5)
        };
        
        System.out.println("Figures:");
        
        for (Figure figure: figures) {
            System.out.println(figure);
        }
        
        // stworzenie tablicy obiektów implementujących interfejs Moveable
        Moveable[] moveables = { 
            new Circle(0, 0, 1),
            new Circle(1, 1, 2),
            new Square(2, 2, 1)
        };
        
        System.out.println("Moveables:");
        
        for (Moveable figure: moveables) {
            figure.move(2, 2);
            System.out.println(figure);
        }
        
        System.out.println("Sorted:");
        
        // sortowanie przy użyciu metody z biblioteki standardowej
        Arrays.sort(figures);
                
        for (Figure figure: figures) {
            System.out.println(figure);
        }
        
    }
}
