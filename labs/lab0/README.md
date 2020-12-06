# Lab0-Env Prepare
### QEMU Emulator Install
> 这里我主要直接照着课程官网的教程[Tools Used in 6.828](https://pdos.csail.mit.edu/6.828/2018/tools.html)来的, 本人使用的系统是ubuntu18.04LTS, 官网用的是16.04, 安装qemu暂时没出什么问题, 下面给出我的安装过程
1. 先运行指令查看系统编译环境是否满足需求, 下面两个指令我这里得到的都是正常结果,但是我没有装gdb,所以直接apt装一个就行了<br>
```bash
objdump -i
gcc -m32 -print-libgcc-file-name
```

2. 下面开始装qemu
```bash
#这里我直接在我的git目录里面包含了课程提供的qemu的patch作为子模块
git submodule add https://github.com/mit-pdos/6.828-qemu.git
#安装依赖
apt install -y libsdl1.2-dev libtool-bin libglib2.0-dev libz-dev and libpixman-1-dev
#编译安装qemu
cd 6.828-qemu
./configure --disable-kvm --disable-werror --prefix=/usr/local --target-list="i386-softmmu x86_64-softmmu"
make && make install
```
--- 
