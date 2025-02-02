# Maintenance Calories Calculator 🍽️🔥

A simple **C program** to calculate your **maintenance calories** using the **Mifflin-St Jeor equation** and activity levels. This tool helps you determine how many calories you need daily to maintain your current weight based on your age, gender, height, weight, and activity level.

---

## 📌 How It Works

1. **Select your gender** (Male/Female).

2. **Enter your age, height (cm), and weight (kg).**

3. **Choose your activity level** from the given options.

4. The program calculates your **Total Daily Energy Expenditure (TDEE)** using:

   \(TDEE = BMR \times Activity Factor\)

   Where **BMR** is calculated as:

   - **For Men:**\
     \(BMR = (10 \times \text{weight}) + (6.25 \times \text{height}) - (5 \times \text{age}) + 5\)
   - **For Women:**\
     \(BMR = (10 \times \text{weight}) + (6.25 \times \text{height}) - (5 \times \text{age}) - 161\)

5. **Your daily maintenance calories are displayed! 🎉**

---

## 💻 Setup & Usage

### **1️⃣ Compile the Program**

Use GCC (or any C compiler) to compile the program:

```sh
gcc maintenance_calories.c -o maintenance_calories
```

### **2️⃣ Run the Program**

```sh
./maintenance_calories
```

---

## 🎯 Activity Level Guide

| Activity Level        | Description                            | Activity Factor |
| --------------------- | -------------------------------------- | --------------- |
| **Sedentary**         | Little to no exercise                  | **1.2**         |
| **Lightly Active**    | Light exercise (1-3 days/week)         | **1.375**       |
| **Moderately Active** | Moderate exercise (3-5 days/week)      | **1.55**        |
| **Very Active**       | Hard exercise (6-7 days/week)          | **1.725**       |
| **Super Active**      | Intense daily exercise or physical job | **1.9**         |

---

## ✨ Example Run

```
Enter gender:
1. Male
2. Female
3. Other
1

Enter your age: 19
Your Height in cm: 178
Enter your weight in kg: 65

Select your activity level:
1. Sedentary
2. Lightly Active
3. Moderately Active
4. Very Active
5. Super Active
Enter your choice (1-5): 4

Your maintenance calories are: 2885.56 kcal
```

---


## 📜 License

This project is **open-source**. Feel free to modify and improve! 🚀

👨‍💻 Built with ❤️ by YOU!

