# sim800n 
<img width="485" alt="image" src="https://github.com/user-attachments/assets/ef66defa-9ab9-46f2-81ae-66366a8b9c72" />

本项目是sim800(文曲星cc800模拟器)的verilog版。 利用verilator来在电脑上模拟运行。（不需要fpga开发板）

原作者： 曾半仙

本repo改动：
1. 支持最新的verilator5
2. 去除不重要的non-posix代码，让项目可以在mac和linux上轻易编译出来
3. 增加了从.v转换成.cpp的脚本和说明


### Instructions

##### 直接编译，用已经从.v转好的.cpp：
```
cmake .
make
./a.out
```


##### 用从.v生成的.cpp编译项目
如果你的verilator是Verilator 5.032或接近版本, 按照以下步骤:
```
rm -r obj_dir  #删除生成好的cpp文件
sh gen.sh      #从.v生成的.cpp
cmake .
make
./a.out
```

否则需要找到你的verilator安装目录，拷贝`share/verilator/include/` 替换repo中原来的`verilator/include`:

```
rm -r verilator/include                                      #删除原verlator的include
cp -r /YOUR_PATH/share/verilator/include verilator/          #把新的include拷贝过来
rm -r obj_dir

sh gen.sh
cmake .
make
./a.out
```
