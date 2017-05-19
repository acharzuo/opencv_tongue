
# 编译并执行一个.cpp文件

dist="dist"

echo 即将编译$1
if [ ! -d $dist ] then 
  mkdir $dist
fi
g++ $1.cpp `pkg-config opencv --libs --cflags opencv` -o $dist/$1

echo 编译完成
