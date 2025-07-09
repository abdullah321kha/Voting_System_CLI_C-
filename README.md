 Voting Eligibility Checker (C++)

A simple and interactive C++ program that checks **voting eligibility** in the **United States** based on three key factors:

* Age
* U.S. Citizenship
* Voter Registration Status

---

Description

This program prompts the user to enter their age, whether they are a U.S.-born citizen, and whether they are registered to vote. It then uses a set of conditional statements to determine if the person is eligible to vote and displays a message accordingly.

It helps users understand why they are or aren’t eligible to vote and encourages proper registration and participation.

---

## Features

* Checks if the user meets all voting criteria.
* Provides clear messages for:

  * Eligible voters
  * Underage users
  * Unregistered citizens
  * Non-citizens
  * Invalid or incomplete inputs
* Easy to understand and modify.

---

## 🧠 Concepts Used

* User input (`cin`)
* Output messages (`cout`)
* Conditional logic (`if`, `else if`, `else`)
* Boolean variables
* Logical operators (`&&`, `||`)

---

## 🛠️ How to Use

1. **Compile the code** using any C++ compiler:

   ```bash
   g++ voting_eligibility_checker_CLI_C++.cpp -o vote
   ```

2. **Run the program**:

   ```bash
   ./vote
   ```

3. **Input Guidelines**:

   * Age: Any positive integer (e.g., 18, 25)
   * U.S.-Born Citizen: `1` for Yes, `0` for No
   * Registered to Vote: `1` for Yes, `0` for No

---

## 🧾 Sample Input/Output

```
Enter the age:
20
Are you a USA-born citizen? Yes/No:
1
Are you registered? Yes/No:
1

You can vote!
Your age, citizenship, and registration status all meet the requirements.
Please remember to check your local voting schedule and polling station.
Make your voice heard – every vote counts!
```


