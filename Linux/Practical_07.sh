echo "Enter Any Number"
read n
echo "Enter Array Number"
for((i=0;i<n;i++))
do
        read no[$i]
done

for((i=0;i<n;i++))
do
        for((j=$i;j<n;j++))
        do
                if [ ${no[i]} -lt ${no[j]} ]

                        t=${no[i]}
                        no[i]=${no[$i]}                                 no[i]=$t
                fi
        done
done

for((i=0;i<n;i++))
do
        echo "${no[$i]}"
done

#Output
Enter Any Number
5
Enter Array Number
1
2
3
4
5

5
4
3
2
1
#
