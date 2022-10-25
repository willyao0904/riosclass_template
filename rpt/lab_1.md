## lab1
**1、Spike model and co-sim - 50%**

a.Spike model (with risc-v pk) execution correctness: simulate programs atop the proxy kernel - 10%
![image](https://user-images.githubusercontent.com/113034620/197505171-73e4ee8a-7d34-4955-aaa7-2cbe0c970902.png)

b.GreenRio core RTL execution correctness: pass some ISA tests (Synopsys VCS environment)- 10%




**2、Open EDA flow - 40%**

  a.GreenRio core logic synthesis by yosys (use 2 libs as different conrer) - 30%
  
  1）配置openlane环境，跑通test
  ![image](https://user-images.githubusercontent.com/113034620/197780159-a0381932-9533-404e-9d3f-30837e9de8a6.png)
  ![image](https://user-images.githubusercontent.com/113034620/197780279-07c7da66-1c24-4926-ac78-1e5918e5c3c8.png)

  2)进入 OpenLane 环境
  ![image](https://user-images.githubusercontent.com/113034620/197779738-32992ff9-0e0c-4443-a745-08e70576b0d5.png)
  
  3)运行一個design（）
  ![image](https://user-images.githubusercontent.com/113034620/197783470-1383abab-891a-4326-a119-541950d935b8.png)

  4）在下面的lib中找其他的lib，把pdk里的lib换掉
  ![image](https://user-images.githubusercontent.com/113034620/197784997-38f59a4e-32e3-4930-baf3-b033acc3f797.png)
  换了lib之后
  ![image](https://user-images.githubusercontent.com/113034620/197785644-97fc24ed-efce-4d0e-9a6b-5b5cfc713143.png)
  
  5）再跑一次，生成另一个log
  ![image](https://user-images.githubusercontent.com/113034620/197786144-eb3c7de3-6042-4858-9879-649bad415399.png)
 
 b.GreenRio core gate level netlist + Spike co-sim execution correctness 10%
 
  跑完synthesis获得的netlist路径：
  /work/stu/yaowei/workspace/OpenLane/designs/lab1_hehe/runs/RUN_2022.10.25_13.28.29/results/synthesis/
