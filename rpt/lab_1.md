## lab1
**1、Spike model and co-sim - 50%**

a.Spike model (with risc-v pk) execution correctness: simulate programs atop the proxy kernel - 10%

Run test on proxy kernel, output Hello World correctly
![image](https://user-images.githubusercontent.com/113034620/197505171-73e4ee8a-7d34-4955-aaa7-2cbe0c970902.png)



b.GreenRio core RTL execution correctness: pass some ISA tests (Synopsys VCS environment)- 10%

c.Spike model + GreenRio RTL co-simulation system - 30%
You need to run the elf file on the spike emulator and print the log - 5%
You need to have GreenRio run the risc-v elf in an RTL simulation environment and get the corresponding results: register states, values, etc. -5%



**2、Open EDA flow - 40%**

  a.GreenRio core logic synthesis by yosys (use 2 libs as different conrer) - 30%
  
  1）Configure the openlane environment and run test
  
  ![image](https://user-images.githubusercontent.com/113034620/197780159-a0381932-9533-404e-9d3f-30837e9de8a6.png)
  ![image](https://user-images.githubusercontent.com/113034620/197780279-07c7da66-1c24-4926-ac78-1e5918e5c3c8.png)

  2)Enter the OpenLane environment
  ![image](https://user-images.githubusercontent.com/113034620/197779738-32992ff9-0e0c-4443-a745-08e70576b0d5.png)
  
  3)Run design
  ![image](https://user-images.githubusercontent.com/113034620/197783470-1383abab-891a-4326-a119-541950d935b8.png)

  4）Find another lib in the libs below and replace the lib in pdk
  ![image](https://user-images.githubusercontent.com/113034620/197784997-38f59a4e-32e3-4930-baf3-b033acc3f797.png)

  Before changing the lib
  
  ![image](https://user-images.githubusercontent.com/113034620/198005737-62c03517-4e24-4744-8c49-98e20da7a534.png)

   After changing the lib
  
  ![image](https://user-images.githubusercontent.com/113034620/198006109-f5546929-e159-466b-9881-8a9f9ca9bbfa.png)

  5）Run it one more time, generate another log
  ![image](https://user-images.githubusercontent.com/113034620/198006681-2082d573-98c9-4332-aca8-cee010a81b8f.png)
 
 b.GreenRio core gate level netlist + Spike co-sim execution correctness 10%
 
 1）GreenRio core gate level netlist
 
  After synthesis ,we can obtain the netlist (.v file) as follows:
  /work/stu/yaowei/workspace/OpenLane/designs/lab1_hehe/runs/RUN_2022.10.25_13.17.09/results/synthesis

 2）Spike co-sim execution correctness 
 ....
