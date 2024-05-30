rm */*.bin
rm */*.exe
rm */*.out
git add .
git commit -m "$1"
git push
