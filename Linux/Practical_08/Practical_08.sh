echo "Executable Files"
find . -type f -executable

echo "Zero File Size"
find . -type f size 0

echo "Directories"
find . -maxdepth 1 -type d

#Output
Executable Files
./Practical_08.sh
./.bashrc
./Practical_07.sh
./Practical_02.sh
./Practical_03.sh
./Practical_04.sh
./.profile
./Practical_05.sh
./Practical_01.sh
./Practical_06.sh
Zero File Size

Directories
.
