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

  换lib之前
  ![image](https://user-images.githubusercontent.com/113034620/198005737-62c03517-4e24-4744-8c49-98e20da7a534.png)

  换了lib之后
  ![image](https://user-images.githubusercontent.com/113034620/198006109-f5546929-e159-466b-9881-8a9f9ca9bbfa.png)

  5）再跑一次，生成另一个log
  ![image](https://user-images.githubusercontent.com/113034620/198006681-2082d573-98c9-4332-aca8-cee010a81b8f.png)
 
 b.GreenRio core gate level netlist + Spike co-sim execution correctness 10%
 
 1）GreenRio core gate level netlist
 跑完synthesis获得的netlist（.v文件），路径如下：
  /work/stu/yaowei/workspace/OpenLane/designs/lab1_hehe/runs/RUN_2022.10.25_13.17.09/results/synthesis

 2）Spike co-sim execution correctness 
 ....
