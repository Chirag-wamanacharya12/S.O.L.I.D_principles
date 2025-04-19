# SOLID Principles in Software Design

The SOLID principles are five essential guidelines that enhance software design, making code more maintainable and scalable. These principles include:

- Single Responsibility Principle (SRP)
- Open/Closed Principle (OCP)
- Liskov Substitution Principle (LSP)
- Interface Segregation Principle (ISP)
- Dependency Inversion Principle (DIP)

This document explains each principle with simple examples to help you understand their importance in creating robust and adaptable software systems.

## 1. Single Responsibility Principle (SRP)

This principle states that "A class should have only one reason to change," meaning that each class should have a single responsibility.

### Example:

In a bakery, the baker’s role is to focus on baking bread. If the baker also manages inventory, orders supplies, and cleans the bakery, this violates the SRP. The bakery should assign different roles to different individuals to focus on their specific responsibilities.

- **Classes:**
  - `BreadBaker`: Responsible solely for baking bread.
  - `InventoryManager`: Manages inventory.
  - `SupplyOrder`: Orders supplies.
  - `CustomerService`: Serves customers.
  - `BakeryCleaner`: Cleans the bakery.

The code for this example can be found in the file: `Single_Responsibility_Principle.cpp`

## 2. Open/Closed Principle (OCP)

This principle states that "Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification."

### Example:

Imagine a `PaymentProcessor` class that initially supports credit card payments. To extend functionality for PayPal, instead of modifying the existing class, create a new class `PayPalPaymentProcessor` that extends the `PaymentProcessor` class.

- **Classes:**
  - `PaymentProcessor`: Abstract base class for payment processors.
  - `CreditCardPaymentProcessor`: Handles credit card payments.
  - `PayPalPaymentProcessor`: Handles PayPal payments.

The code for this example can be found in the file: `Open_Closed_Principle.cpp`

## 3. Liskov Substitution Principle (LSP)

This principle states that "Derived or child classes must be substitutable for their base or parent classes."

### Example:

A `Square` is a rectangle with equal width and height. However, substituting a `Square` for a `Rectangle` can violate the LSP because changing one dimension of a square affects both, which is not the expected behavior for a rectangle.

- **Classes:**
  - `Rectangle`: The base class for rectangles.
  - `Square`: A derived class that overrides methods to ensure equal width and height.

The code for this example can be found in the file: `Liskov_Substitution_Principle.cpp`

## 4. Interface Segregation Principle (ISP)

This principle states that "Do not force any client to implement an interface which is irrelevant to them."

### Example:

Imagine a restaurant with a menu. A vegetarian customer should only be given the vegetarian menu, not a full menu with non-vegetarian items. This ensures that clients (customers) only implement what is relevant to them.

- **Interfaces:**
  - `IVegetarianMenu`: Interface for vegetarian items.
  - `INonVegetarianMenu`: Interface for non-vegetarian items.
  - `IDrinkMenu`: Interface for drink items.
- **Classes:**
  - `VegetarianMenu`: Implements the vegetarian menu.
  - `NonVegetarianMenu`: Implements the non-vegetarian menu.
  - `DrinkMenu`: Implements the drink menu.

The code for this example can be found in the file: `Interface_Segregation_Principle.cpp`

## 5. Dependency Inversion Principle (DIP)

This principle states that "High-level modules should not depend on low-level modules. Both should depend on abstractions."

### Example:

A software development team depends on an abstract version control system (e.g., Git) to manage code changes without needing to understand the implementation details of Git.

- **Interfaces:**
  - `IVersionControl`: Defines operations like commit, push, and pull.
- **Classes:**
  - `GitVersionControl`: Implements version control using Git.
  - `DevelopmentTeam`: Uses the `IVersionControl` interface, allowing it to work with any version control system.

The code for this example can be found in the file: `Dependency_Inversion_Principle.cpp`

## Why SOLID Principles Are Important

- **Maintainability**: SOLID principles make code easier to maintain. When each class has a clear responsibility, it's easier to make changes without affecting unrelated parts of the system.
- **Scalability**: These principles support growth in software. The Open/Closed Principle, for instance, allows developers to add new features without modifying existing code.
- **Flexibility**: By depending on abstractions, such as in the Dependency Inversion Principle, developers can easily change components without disrupting the entire system.

---

For more detailed code examples, refer to the respective files on GitHub.
