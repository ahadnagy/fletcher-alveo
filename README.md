# fletcher-alveo
[![Build Status](https://dev.azure.com/abs-tudelft/fletcher/_apis/build/status/abs-tudelft.fletcher-alveo?branchName=master)](https://dev.azure.com/abs-tudelft/fletcher/_build/latest?definitionId=8&branchName=master)

Work-in-progress Fletcher Alveo platform support.

Platform support for the Alveo platform consists of:
- A driver a kernel module based on the [qdma driver](https://github.com/Xilinx/dma_ip_drivers) provided by Xilinx, which is built on top of [dpdk](https://github.com/DPDK/dpdk/).
- A Fletcher platform specific [runtime library](https://github.com/abs-tudelft/fletcher).

## Driver

The driver setup in this repository targets usage of the [Alveo u200 board](https://xilinx.com/u200) on a Centos 7.6.1810 host with Docker.

### Building the driver image

```
cd driver
docker build -t fletcher-alveo/driver .
```

### Using the driver image

The driver image is used as the base image for the runtime container.

## Runtime

The Fletcher platform specific runtime depends on the common library of Fletcher, dpdk libraries and the qdma driver.

### Building the runtime

Requirements
- Docker

```
cd runtime
docker built -t fletcher-alveo/runtime .
```

### Using the runtime

