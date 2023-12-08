class Node {
    int value;
    Node left;
    Node right;

    Node(int value) {
        this.value = value;
        right = null;
        left = null;
    }
}

class BinaryTree {
    Node root;

//---------- Adds value at proprer position in tree ---------------------
    private Node addRecurseve(Node current, int value) {
        if (current == null)
            return new Node(value);

        if (value < current.value)
            current.left = addRecurseve(current.left, value);
        else if (value > current.value)
            current.right = addRecurseve(current.right, value);
        else
            return current;

        return current;
    }

    public void add(int value) {
        root = addRecurseve(root, value);   
    }
//-----------------------------------------------------------------------

// --------- check if tree contains that value --------------------------
    private boolean containsNodeRecursive(Node current, int value) {
        if (current == null) 
            return false;
        if(current.value == value) 
            return true;
        
            return value < current.value
                ?containsNodeRecursive(current.left, value)
                :containsNodeRecursive(current.right, value);
    }

    public boolean containsNode(int value) {
        return containsNodeRecursive(root, value);
    }
//-----------------------------------------------------------------------

//----- Deleting node form the tree -------------------------------------
    private Node deleteRecursive(Node current, int value) {
        if(current == null) 
            return null;
        
        if(current.value == value) {
            int smallestValue = findSmallestValue(current.right);
            current.value = smallestValue;
            current.right = deleteRecursive(current.right, smallestValue);
        }

        if(current.value < value) {
            current.left = deleteRecursive(current.left, value);
            return current;
        }

        current.right = deleteRecursive(current.right, value);
        return current;
    }

    private int findSmallestValue(Node node) {
        return node.left == null ? node.value : findSmallestValue(node.left);
    }

    public void deleteNode(int value) {
        root = deleteRecursive(root, value);
    }
//-----------------------------------------------------------------------

//---------------------- Depth First Search -----------------------------
    public void travarseInOrder(Node node) {
        if (node != null) {
            travarseInOrder(node.left);
            System.out.println(" " + node.value);
            travarseInOrder(node.right);
        }
    }

    public void traversePreOrder(Node node) {
        if (node != null) {
            System.out.println(" " + node.value);
            traversePreOrder(node.left);
            traversePreOrder(node.right);
        }
    }

//-----------------------------------------------------------------------
}

public class BinaryTreeDemo {
    public static void main(String[] args) {
        BinaryTree bt = new BinaryTree();

        bt.add(2);
        bt.add(3);
        bt.add(4);
        bt.add(1);
        bt.add(5);
        bt.add(0);
        bt.add(7);

        System.out.println("In Order : ");
        bt.travarseInOrder(bt.root);   
        
        System.out.println("Pre Order : ");
        bt.traversePreOrder(bt.root);        
    }

    
}