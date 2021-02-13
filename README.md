git clone --branch 3.9 https://github.com/python/cpython
cd cpython
./configure --with-pydebug
make -j2 -s

make regen-pegen