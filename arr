Write a function that takes an array of integers and a rotation count as input and rotates the elements of the array to the right by the given rotation count.
public class ArrayRotation {
    public static int[] rotateArray(int[] array, int rotationCount) {
        int length = array.length;
        rotationCount %= length;  // Ensure rotationCount is within array length

        int[] rotatedArray = new int[length];

        for (int i = 0; i < length; i++) {
            int rotatedIndex = (i + rotationCount) % length;
            rotatedArray[rotatedIndex] = array[i];
        }

        return rotatedArray;
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        int rotationCount = 2;

        int[] rotatedArray = rotateArray(array, rotationCount);

        for (int element : rotatedArray) {
            System.out.print(element + " ");
        }
        System.out.println();
    }
}
