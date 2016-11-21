//
// Created by xiong on 2016/11/22.
//
#include"Car.h"

Car::Car() {}

Car::Car(string name, double price, int capacity)
{
    this->name = name;
    this->price = price;
    this->capacity = capacity;
}

Car::Car(string name, double price, double goods)
{
    this->name = name;
    this->price = price;
    this->goods = goods;
}

Car::Car(string name, double price, int capacity, double goods)
{
    this->name = name;
    this->price = price;
    this->capacity = capacity;
    this->goods = goods;
}

string Car::getName()
{
    return name;
}

void Car::setName()
{
    this->name = name;
}

double Car::getPrice()
{
    return price;
}

void Car::setPrice()
{
    this->price = price;
}

int Car::getCapacity()
{
    return capacity;
}

void Car::setCapacity()
{
    this->capacity = capacity;
}

double Car::getGoods()
{
    return goods;
}

void Car::setGoods()
{
    this->goods = goods;
}
/*

  答答租车系统测试类
  @author：凌_惜
  @date：2016年11月4日 上午10:22:57

public class CarSystemTest {

public static void main(String[] args) {
        Car a1 = new Aodi("奥迪A4",500,4);
        Car a2 = new Mazd("马自达6",400,4);
        Car a3 = new Picx("皮卡雪6",450,4,2);
        Car a4 = new Jinl("金龙",800,20);
        Car a5 = new Songhj("松花江",400,4);
        Car a6 = new Yinwk("依维柯",1000,20);
        System.out.println("==========欢迎使用答答租车系统==========");
        System.out.println("您是否要租车：0.是  1.否");
        Scanner scan = new Scanner(System.in);
        int flag = scan.nextInt();
        if (flag == 1) {
            System.out.println("==========欢迎下次再来==========");
            return;
        }
        System.out.println("==========您可租车的类型及其价目表==========");
        System.out.println("序号\t汽车名称\t\t租金\t\t容量");
        System.out.println("1.\t"+a1.getName()+"\t\t"+a1.getPrice()+"元/天\t载人："+a1.getCapacity()+"人");
        System.out.println("2.\t"+a2.getName()+"\t\t"+a2.getPrice()+"元/天\t载人："+a2.getCapacity()+"人");
        System.out.println("3.\t"+a3.getName()+"\t\t"+a3.getPrice()+"元/天\t载人："+a3.getCapacity()+"人，载货："+a3.getGoods()+"吨");
        System.out.println("4.\t"+a4.getName()+"\t\t"+a4.getPrice()+"元/天\t载人："+a4.getCapacity()+"人");
        System.out.println("5.\t"+a5.getName()+"\t\t"+a5.getPrice()+"元/天\t载货："+a5.getGoods()+"吨");
        System.out.println("6.\t"+a6.getName()+"\t\t"+a6.getPrice()+"元/天\t载货："+a6.getGoods()+"吨");
        System.out.println("==========请输入您要租车的数量：===========");
        Scanner scan2 = new Scanner(System.in);
        int flag2 = scan2.nextInt();
        double totalPrice = 0; //总价格
        int totalCapacity = 0; //总容量
        double totalGoods = 0; //总载货量
        String[] arr = new String[6];
        for (int i = 1; i <= flag2; i++) {
            System.out.println("请输入第"+i+"辆车的序号：");
            Scanner scan3 = new Scanner(System.in);
            int flag3 = scan3.nextInt();
            switch (flag3) {
                case 1:
                    totalPrice += a1.getPrice();
                    totalCapacity += a1.getCapacity();
                    arr[0] = a1.getName();
                    break;
                case 2:
                    totalPrice += a2.getPrice();
                    totalCapacity += a2.getCapacity();
                    arr[1] = a2.getName();
                    break;
                case 3:
                    totalPrice += a3.getPrice();
                    totalCapacity += a3.getCapacity();
                    totalGoods += a3.getGoods();
                    arr[2] = a3.getName();
                    break;
                case 4:
                    totalPrice += a4.getPrice();
                    totalCapacity += a4.getCapacity();
                    arr[3] = a4.getName();
                    break;
                case 5:
                    totalPrice += a5.getPrice();
                    totalGoods += a5.getGoods();
                    arr[4] = a5.getName();
                    break;
                case 6:
                    totalPrice += a6.getPrice();
                    totalGoods += a6.getGoods();
                    arr[5] = a6.getName();
                    break;
            }
        }
        System.out.println("==========请输入您要租车的天数：===========");
        Scanner scan4 = new Scanner(System.in);
        int flag4 = scan4.nextInt();
        totalPrice *= flag4;
        System.out.println("**********您的账单：**********");
        StringBuilder builder = new StringBuilder();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != null && i <= 3) {
                builder.append(arr[i] + "\t");
            }
        }
        if (builder.length() != 0) {
            System.out.println("可载人的车有：");
            System.out.println(builder+"共载人："+totalCapacity+"人");
        }
        StringBuilder builder2 = new StringBuilder();
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != null && (i == 2 || i > 3)) {
                builder2.append(arr[i] + "\t");
            }
        }
        if (builder2.length() != 0) {
            System.out.println("可载货的车有：");
            System.out.println(builder2+"共载货："+totalGoods+"吨");
        }
        System.out.println("租车总价格为："+totalPrice+"元");
    }

}
*/
