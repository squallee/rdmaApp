sudo apt-get update
sudo apt-get --yes --force-yes install ca-certificates build-essential autoconf automake libtool make cmake gcc-5-plugin-dev libpcap-dev libssl-dev kernel-package curl git linux-headers-generic lcov libmlx4-1 infiniband-diags ibutils ibverbs-utils perftest tgt targetcli iperf3 dkms dpatch libnl-route-3-200 libgfortran3 swig tk gfortran quilt chrpath libnuma1 libnuma-dev libpthread-workqueue-dev htop dstat python-libxml2
wget http://content.mellanox.com/ofed/MLNX_OFED-4.1-1.0.2.0/MLNX_OFED_LINUX-4.1-1.0.2.0-ubuntu16.04-x86_64.tgz
tar -xvf MLNX_OFED_LINUX-4.1-1.0.2.0-ubuntu16.04-x86_64.tgz
cd MLNX_OFED_LINUX-4.1-1.0.2.0-ubuntu16.04-x86_64
sudo ./mlnxofedinstall --force

