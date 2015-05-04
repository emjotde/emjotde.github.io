package figures;

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
    double a = 0;
    
    public Square(double x, double y, double a) {
        this.a = a;
        // zadanie 08
        this.position = new Point(x, y);
        this.verticesAmount = 4;
    }
    
    public double area() {
        return a * a;
    }
}

class Circle extends Figure {
    private double radius = 0;
    
    Circle(double x, double y, double radius) {
        super(x, y, 0);         // wywolanie konstruktora nadklasy
        this.radius = radius;
    }
    
    public double area() {
        return 3.14 * radius * radius;
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
        
        // zadanie 10
        /*
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
        */
        
        // zadanie 11
        /*
        System.out.println("Sorted:");
        
        // sortowanie przy użyciu metody z biblioteki standardowej
        Arrays.sort(figures);
                
        for (Figure figure: figures) {
            System.out.println(figure);
        }
        */
    }
}