# Car parking counter
C++ modules for inductive loop detector

โปรแกรมนับที่จอดรถ เขียนเป็นเชิงวัตถุ ดังนั้นวิธีการใช้งานก็เหมือนเรียก Counter มา 1 ตัว
```cpp
#include "./counter.cpp"

int main () {
  Counter counter
}
```

โดยปกติ จำนวนที่จอดรถทั้งหมดจะเริ่มจาก 500 ที่ (ค่าเริ่มต้น)

### การประกาศ Contructor
```cpp
Counter counter; 
```
แบบนี้จะได้จำนวนที่จอดรถว่าง 500 ที่ (ค่า default)
```cpp
Counter counter(866);
```
แบบนี้จะได้จำนวนที่จอดรถว่าง 866 ที่

### ฟังก์ชันที่ใช้งานได้
|Function|Description|Return|
|--|--|--|
|park()| เมื่อสั่งจอดรถจำนวนที่ว่างจะลดลง 1 ที่ |  void |
|unpark()| เมื่อสั่งจอดรถจำนวนที่ว่างจะเพิ่มขึ้น 1 ที่ | void |
|resetAvailableLots()| ตั้งค่าจำนวนที่ว่างกลับไปที่ค่าเริ่มต้น | void |
|setAvailableLots(int)| ตั้งจำนวนที่จอดรถ | void |
|getAvailableLots()| รับค่าจำนวนที่จอดรถ | string |


## ตัวอย่างการใช้งาน

#### counter.getAvailableLots()
ถ้าเต็มจำนวนที่กำหนดแล้ว จะขึ้นเตือนว่า **FULL** และไม่สามารถเรียกฟังก์ชัน park() ได้หรือไม่สามารถจอดรถได้นั่นเอง

#### counter.setAvailableLots(int)
ส่งค่าจำนวนเต็ม (integer) เข้าไปเพื่อตั้งค่าจำนวนที่ว่างรถ ถ้าเกินจำนวนที่จอดรถทั้งหมด หรือน้อยกว่า 0 โปรแกรมจะไม่ตั้งค่าให้