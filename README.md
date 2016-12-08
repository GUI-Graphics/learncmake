## [CMake Tutorials](https://cmake.org/cmake-tutorial/)

*注意点*
* 最好对不同的CMakeLists使用不同的build文件夹,不然每次都要将之前CMake产生的文件清空.
* 可以通过以cmake -DUSE_MY_SUM=ON传递选项,选项第一次被设置后就存在Cache中不再变化,除非手动设置.
* install时,安装目录需要事先已经存在,不然会导致安装失败.

剩下的例子比较偏,可以参照原文.
