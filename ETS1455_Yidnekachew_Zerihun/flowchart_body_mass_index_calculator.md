```mermaid
graph TD
    A([Start]) --> B[/Input Weight in kilograms/]
    B --> C[/Input Height in meters/]
    C --> D{Is height > 0 && weight >= 0}
    D --> |Y|F[Calculate BMI = weight / height / height]
    F --> G{Is BMI < 18?}
    G --> H[Category: Underweight]
    G --> I{Is BMI <= 25?}
    I --> J[Category: Normal weight]
    I --> K[Category: Overweight]
    H --> L[/Output BMI and Category/]
    J --> L[/Output BMI and Category/]
    K --> L[/Output BMI and Category/]
    D --> |N| M{Is height <= 0 && weight >= 0}
    M --> |Yes|N[/Output U input invalid height/]
    N --> R
    M --> |No|O{Is height > 0 && weight < 0}
    O --> |Yes|P[/Output U input invalid weight/]
    P --> R
    O --> |No|Q[/Output U input invalid weight and height/]
    Q --> R{Another Person?}
    R --> |Other character| S([End])
    R --> |0| B
    









 
    
