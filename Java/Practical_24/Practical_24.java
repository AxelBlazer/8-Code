import java.util.*;

public class Practical_24 
{
	public static void main(String[] args) 
	{
		MyPriorityQueue <String> queue = new MyPriorityQueue<>();
		queue.offer("11");
		queue.offer("22");
		queue.offer("33");

		MyPriorityQueue <String> queue1 = null;
		try 
		{
			queue1 = (MyPriorityQueue<String>)(queue.clone());
		} 
		catch (CloneNotSupportedException e) 
		{
			e.printStackTrace();
		}
		System.out.print(queue1);
	}

	static class MyPriorityQueue <E> extends PriorityQueue<E> implements Cloneable 
	{
		@Override
		public Object clone() throws CloneNotSupportedException 
		{
			MyPriorityQueue <E> clone = new MyPriorityQueue<>();
			this.forEach(clone::offer);
			return clone;
		}
	}
}

/*
Output :
[11, 22, 33]
*/
