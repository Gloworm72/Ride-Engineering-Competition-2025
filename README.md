# Ride Engineering Competition 2025 – *"Abandon Ship!"*

## Overview

As part of the 2025 Ride Engineering Competition hosted at Ohio State University, our team from the Themed Entertainment Association @ Notre Dame designed and built a working **model flat ride** called **"Abandon Ship!"**, competing against 20 top engineering schools from across the country.

Our ride followed **ASTM F2291-24 standards** and included:

- Risk assessments  
- Factory and site acceptance tests (FAT/SAT)  
- Service and maintenance plans  
- Full mechanical and electrical schematics  
- Custom control systems  

---

## My Role – Controls Team Lead

I led the **controls engineering** effort for our three-motor system, overseeing:

- **Electrical wiring** and layout  
- **Stepper motor logic and motion control**  
- **Emergency stop and fault handling**  
- **Custom operator panel wiring and configuration**  
- **Industrial-style programming using IEC 61131-3 Ladder Diagrams via OpenPLC**  

### Key Contributions:

- Designed and built a complete control system using **OpenPLC** running on an **Arduino Mega 2560**  
- Created a **dual NPN MOSFET failsafe circuit**: power flows only if both hardware (E-STOP) and software (Ladder Logic) conditions are satisfied  
- Developed a full set of **FAT/SAT test procedures (100+)**, simulating real-world commissioning of theme park attractions  
- Implemented **jogging, homing, auto sequence**, and **soft stop** behaviors entirely in Ladder Logic, supported by an Arduino Extension file written in C++  

---

## Award

Our team won **1st Place in Control Systems Design** for our:

- Robust safety integration  
- Use of an open-source industrial PLC platform  
- Modular and maintainable ladder logic programming  
- Real-world simulation of theme park control workflows  

---

## Tech Stack

- **OpenPLC** (Ladder Diagram logic)  
- **Arduino Mega 2560** (as PLC runtime hardware)  
- **NPN MOSFETs** for dual-fault-tolerant E-Stop enforcement  
- **Limit switches**, **stepper drivers**, and **manual control panel**  
- **FastAccelStepper** and **AccelStepper** libraries in Arduino Extension File 

---

## 🎥 Demo Videos

https://github.com/user-attachments/assets/7c2e9aac-2ed3-4455-9461-40316b5b8d52

https://github.com/user-attachments/assets/bdcaf291-79d7-495b-bd53-137e0fd260d0

---

## Acknowledgments

- Huge thank you to [Thiago Alves]([https://www.openplcproject.com/about](https://www.linkedin.com/in/thiago-alves-phd-23740743/)) for building and maintaining the [OpenPLC platform]([https://autonomylogic.com/]) — and for answering questions in the forum!
- Thank you to Charlie Wickham and the competition judges for organizing the event.
- And a massive shoutout to my teammates on TEA@ND for their hard work, creativity, and late nights!

---

## Images

![image](https://github.com/user-attachments/assets/c693e902-a095-4db0-b4e7-89fa89f459ca)

![image](https://github.com/user-attachments/assets/2add652d-e9b0-4e4e-92c0-16cbaa3800ed)

![image](https://github.com/user-attachments/assets/33f0d3f5-101b-4512-b588-1afae76c50d5)

![image](https://github.com/user-attachments/assets/4f69a9a7-1209-47ec-853d-57e400d4aef9)

![image](https://github.com/user-attachments/assets/720cd120-3390-4b77-a9a5-07500bc89763)

![image](https://github.com/user-attachments/assets/2cf5000b-b282-4c5a-802c-a2ff0daecd5f)

![image](https://github.com/user-attachments/assets/1c728092-7ad9-4172-b6fb-cc24733a7d7f)

![image](https://github.com/user-attachments/assets/0b64df1c-c121-4480-8df0-ecb788c6089f)

![image](https://github.com/user-attachments/assets/9c795ab9-8e23-487e-a2bf-8863f9828536)

![image](https://github.com/user-attachments/assets/545580d7-1009-48d4-92b4-1e8241ebff54)
