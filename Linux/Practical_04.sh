echo "Enter Any Number :"
read n
echo "Prime Numbers Are :"
for((i=2;i<=n;i++))
do
        flag=0
        for((j=2;j<i;j++))
        do
                if [ `expr $i % $j` -eq 0 ]
                then
                        flag=1
                fi
        done
        if [ $flag -eq 0 ]
        then
                echo "$i"
        fi
done

# output :
Enter Any Number :
5
Prime Numbers Are :
2
3
5
