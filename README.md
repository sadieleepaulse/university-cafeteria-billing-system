# ☕Cafeteria Order System (C++)

## Project Overview

This project is a C++ console application developed for a university cafeteria.

The program allows customers to select menu items, calculates the total bill, applies a discount when applicable, and saves the final bill to a text file for record-keeping.

---

## 🎯Features

- Capture customer name and surname
- Display cafeteria menu
- Allow selection of up to 8 menu items
- Validate user selections
- Calculate total bill
- Apply a 10% discount on orders above R100
- Display billing information
- Save customer details and final bill to a text file
- Error handling for file operations

---

## 🛠️Technologies Used

- C++
- File handling (`fstream`)
- Input Validation
- Conditional Statements
- Loops

---

## 📂Repository Structure

```text
cafeteria-order-system-cpp/
│
├── CafeteriaOrderSystem.cpp
├── CafeteriaBill.txt
├── README.md
│
└── screenshots/
├── program-output.png
└── bill-file.png
```

---

## 🍽️Menu

| Item | Price |
|--------|--------|
| Coffee | R15.00 |
| Sandwich | R30.00 |
| Salad | R25.00 |
| Juice | R10.00 |
| Muffin | R20.00 |
| Pizza Slice | R35.00 |
| Soup | R18.00 |
| Burger | R40.00 |

---

## ⚙️Program Workflow

1. Enter customer name and surname.
2. Display cafeteria menu.
3. Select up to 8 menu items.
4. Validate user input.
5. Calculate the total bill.
6. Apply a 10% discount if the bill exceeds R100.
7. Display the billing summary.
8. Save the final bill to a text file.

---

## 📉Discount Rules

### Constants

```cpp
const double DISCOUNT_RATE = 0.10;
const double DISCOUNT_THRESHOLD = 100.00;
```

### Discount Formula

```text
Discount = Total Bill x 10%
```

The discount is only applied when the total bill exceeds R100.00.

---

## 📸Program Output

Example execution:

```text
Enter Name: Jane
Enter Surname: Doe

Total Bill: R120.00
Discount Applied: R12.00
Final Bill: R108.00

Bill written to cafeteria-bill.txt
```

Screenshot:

<img width="792" height="384" alt="program-output" src="https://github.com/user-attachments/assets/54ae9a1c-e7de-4106-b124-b7b8d448cef9" />

---

## 📄File Output

The system stores customer billing information in:

```text
cafeteria-bill.txt
```

Example:

```text
Name: Jane
Surname: Doe
Final Bill: R108.00
```

Screenshot:

<img width="312" height="226" alt="bill-file" src="https://github.com/user-attachments/assets/2641faad-813e-4684-a6df-3f47256a7374" />

---

## ▶️Running the Program

### Compile

```bash
g++ CafeteriaOrderSystem.cpp -o CafeteriaOrderSystem
```

### Run

```bash
./CafeteriaOrderSystem
```

---

## 📚Concepts Demonstrated

This project demonstrates:

- Variables and Constants
- Input and Output
- Loops
- Conditional Statements
- Switch Statements
- File Handling
- Input Validation
- Basic Billing Systems

---

## 🔮Future Enhancements

- Add quantities for each item
- Generate itemized receipts
- Store multiple customer records
- Implement receipt numbers
- Create a graphical user interface
- Connect to a database for order storage
