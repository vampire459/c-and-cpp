# program is self explanatory
echo "Compiling and the program for testing"

gcc -s program.c
./a.out

echo "If the test has gone ok continue by pressing enter or press ctrl + c to exit"

echo "New program name [don't specify extension]: " 
read varname
mv program.c $varname.c
rm a.out
touch program.c

rm bin.c

echo "Now adding it to the local repo"
git add $varname.c

echo "List of all files in this dir:"
ls

echo "bye"