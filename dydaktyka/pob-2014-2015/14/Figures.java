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

abstract class Figure {             // klasa abstrakcyjna
    Point position = new Point();
    int verticesAmount = 0;
    
    // zadanie 01
    public Figure() {
    }
    
    public Figure(double x, double y, int n) {
        this.position = new Point(x, y);
        this.verticesAmount = n;
    }
    
    public abstract double area();  // metoda abstrakcyjna
    
    public String toString() {
        return "position: " + position + " area: " + area();
    }
}

class Square extends Figure {
    private double a = 0;
    
    public Square(double x, double y, double a) {
        this.a = a;
        // zadanie 03
        this.position = new Point(x, y);
        this.verticesAmount = 4;
    }
    
    public double area() {
        return a * a;
    }
}

// zadanie 02
class Circle {
    private double radius = 0;
}

public class Figures {
    public static void main(String[] args) {
        // zadanie 02
        Figure[] figures = { 
            //new Circle(0, 0, 1),
            //new Circle(1, 1, 2),
            new Square(2, 2, 1.0)
        };
        
        System.out.println("Figures:");

        for (Figure fig: figures) {
            System.out.println(fig);
        }
        
        // zadanie 07
        /*
        Moveable[] moveables = {
            // ...
        };
        
        System.out.println("Moveables:");

        for (Moveable fig: moveables) {
            // ...
        }
        */
        
        // zadanie 08
        /*
        // sortowanie przy użyciu metody z biblioteki standardowej
        Arrays.sort(figures);
                
        System.out.println("Sorted:");

        for (Figure fig: figures) {
            System.out.println(fig);
        }
        */
    }
}
