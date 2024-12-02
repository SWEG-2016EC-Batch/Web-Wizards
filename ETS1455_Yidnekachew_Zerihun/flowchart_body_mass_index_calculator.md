```mermaid
graph TD
    A([Start]) --> B[/Input Weight in kilograms/]
    B --> C[/Input Height in meters/]
    C --> D{Is height > 0 && weight >= 0}
    D --> |Y|E
    E --> F[Calculate BMI = weight / height / height]
    F --> G{Is BMI < 18?}
    G --> H[Category: Underweight]
    G --> I{Is BMI <= 25?}
    I --> J[Category: Normal weight]
    I --> K[Category: Overweight]
    H --> L[/Output BMI and Category/]
    J --> L[/Output BMI and Category/]
    K --> L[/Output BMI and Category/]
    L --> M{Another Person?}
    M --> |Other character| N([End])
    M --> |0| B
    
