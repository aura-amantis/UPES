/* On a single track two vehicles are running. As vehicles are going in same direction 
there is no problem. If the vehicles are running in different direction there is a 
chance of collision. To avoid collisions write a Java program using exception handling. 
You are free to make necessary assumptions. */

class Car
{
    private String direction;
    private int magnitude;
    public Car (String d, int m)
    {
        direction = d;
        magnitude = m;
    }

    public String getDirection ()
    {
        return direction;
    }
    public int getMagnitude() {
        return magnitude;
    }
}
public class Collision
{
    public static void main(String[] args) {
	    try {
            Car car1 = new Car("Left", 10);
            Car car2 = new Car("Right", 10);
            if (car1.getDirection().equals(car2.getDirection()) ) {
                System.out.println("Cars will not collide");
            }
            else throw new Exception ("Cars will collide");
        }
        catch (Exception e) {
            System.out.println(e);
        }
    }
}
