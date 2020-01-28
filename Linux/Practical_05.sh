echo "Enter Any Number"
read n
echo "Fibonaci Series Is"
t=0
j=1
for((i=0;i<n;i++))
do
        echo "$t"
        sum=$((t+j))
        t=$j
        j=$sum
done

#Output
Enter Any Number
8
Fibonaci Series Is
0
1
1
2
3
5
8
13
