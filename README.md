# Examination Management System

The Examination Management System is a console-based program developed in C++ using an object-oriented approach. It provides functionality for managing and conducting examinations, managing students grades etc.

## Features

- User authentication: The system allows administrators and students to log in with their respective credentials.
- User roles: Teachers have access to administrative tasks such as creating exams, managing questions, and generating reports. Students can take exams and view their results.
- Exam management: Teachers can create and manage exams by adding questions, setting time limits, and assigning marks.
- Question bank: The system maintains a question bank where administrators can add, edit, and delete questions.
- Randomized question selection: The system randomly selects questions from the question bank for each exam, ensuring a fair distribution of questions.
- Timer: Students have a limited time to complete the exam, and the system automatically submits the exam when the time is up.
- Result generation: The system calculates and displays the result for each student after completing the exam.
- Data persistence: The system stores data in files, ensuring that information is preserved between sessions.

## Prerequisites

- C++ compiler
- Operating system that supports console-based applications

## Getting Started

1. Clone the repository:

   ```shell
   git clone https://github.com/basit-nazir-memon/Examination-Management-System.git
   ```

2. Compile the source code using your preferred C++ compiler:

   ```shell
   g++ main.cpp -o exam_system
   ```
   OR 
   Using any IDE (e.g. Visual Studio)

3. Run the executable:

   ```shell
   ./exam_system
   ```

4. Follow the on-screen instructions to navigate the system and perform various tasks.

## Usage

1. Log in to the system using your credentials.
2. As an administrator, you can create exams, manage questions, and generate reports.
3. As a student, you can take exams and view your results.
4. Make sure to follow the instructions and adhere to any time limits specified for the exams.

## License

This project is licensed under the MIT LICENSE.
