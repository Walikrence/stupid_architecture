# stupid_architecture
stupid_architecture

stupid架构

用于模块分离

全局服global_server可以调用各个不同的模块
具体为三个模块
module_A
module_B
module_C
初始化的时候子模块向global_server注册。
初始化结束后所有服务之间互相调用都可以通过global_server来完成

编译
```sh
g++ -std=c++11 module.cpp -o main
```
运行
```sh
./main
```
