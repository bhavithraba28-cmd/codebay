#include<bits/stdc++.h>
using namespace std;

struct Patient {
    int id;
    string name;
    int age;
    string disease;
    Patient* next;
};

struct Doctor {
    int id;
    string name;
    string specialization;
    Doctor* next;
};

struct Appointment {
    int id;
    Patient* patient;
    Doctor* doctor;
    string date;
    Appointment* next;
};

Patient* patienthead = nullptr;
Doctor* doctorhead = nullptr;
Appointment* appointmenthead = nullptr;

Patient* findpatient(int id) {
    Patient* temp = patienthead;
    while (temp != nullptr) 
    {
        if (temp->id == id) 
        return temp;
        temp = temp->next;
    }
    return nullptr;
}
Doctor* finddoctor(int id) {
    Doctor* temp = doctorhead;
    while (temp != nullptr)
    {
        if (temp->id == id) 
        return temp;
        temp = temp->next;
    }
    return nullptr;
}

void addpatient() {
    Patient* p = new Patient;

    cout << "Enter Patient ID: ";
    cin >> p->id;
    if(findpatient(p->id) != nullptr)
    {
        cout << "Patient with this ID already exists.\n";
        delete p;
        return;
    }
    cout << "Enter Patient Name: ";
    cin >> ws;
    getline(cin, p->name);
    cout << "Enter Age: ";
    cin >> p->age;
    if(p->age <= 0)
    {
        cout << "Invalid age entered.\n";
        delete p;
        return;
    }
    cout << "Enter Disease: ";
    cin >> ws;
    getline(cin, p->disease);
    if(p->disease.empty())
    {
        cout << "Disease cannot be empty.\n";
        delete p;
        return;
    }
   
    p->next = patienthead;
    patienthead = p;

    cout << "Patient added successfully.\n";
}

void adddoctor() {
    Doctor* d = new Doctor;

    cout << "Enter Doctor ID: ";
    cin >> d->id;
    if(finddoctor(d->id) != nullptr) 
    {
        cout << "Doctor with this ID already exists.\n";
        delete d;
        return;
    }
    cout << "Enter Doctor Name: ";
    cin >> ws;
    getline(cin, d->name);
    cout << "Enter Specialization: ";
    cin >> ws;
    getline(cin, d->specialization);

    d->next = doctorhead;
    doctorhead  = d;

    cout << "Doctor added successfully.\n";
}

bool isValidDate(string date) {
    if (date.length() != 10) return false;
    if (date[2] != '-' || date[5] != '-') return false;

    for (int i = 0; i < 10; i++) 
    {
        if (i == 2 || i == 5) continue;
        if (!isdigit(date[i])) return false;
    }

    int day = stoi(date.substr(0, 2));
    int month = stoi(date.substr(3, 2));
    int year = stoi(date.substr(6, 4));

    if (day < 1 || day > 31) return false;
    if (month < 1 || month > 12) return false;
    if (year < 2000 || year > 2100) return false;

    return true;
}

void bookappointment() {
    int appointmentId, patientId, doctorId;
    string date;

    cout << "Enter Appointment ID: ";
    cin >> appointmentId;
    if(findpatient(appointmentId) != nullptr) 
    {
        cout << "Appointment with this ID already exists.\n";
        return;
    }
    cout << "Enter Patient ID: ";
    cin >> patientId;
    cout << "Enter Doctor ID: ";
    cin >> doctorId;

    Patient* p = findpatient(patientId);
    Doctor* d = finddoctor(doctorId);

    if (p == nullptr) 
    {
        cout << "Patient not found.\n";
        return;
    }

    if (d == nullptr) 
    {
        cout << "Doctor not found.\n";
        return;
    }

    do {
    cout << "Enter Appointment Date (DD-MM-YYYY): ";
    cin >> ws;
    getline(cin, date);

    if (!isValidDate(date)) 
    {
        cout << "Invalid date format. Please enter as DD-MM-YYYY\n";
    }

} while (!isValidDate(date));

    Appointment* a = new Appointment;
    a->id = appointmentId;
    a->patient = p;
    a->doctor = d;
    a->date = date;
    a->next = appointmenthead;
    appointmenthead = a;

    cout << "Appointment booked successfully.\n";
}

void viewpatients() {
    if (patienthead == nullptr) 
    {
        cout << "No patient records found.\n";
        return;
    }

    Patient* temp = patienthead;
    cout << "\n--- Patient Records ---\n";
    while (temp != nullptr) 
    {
        cout << "ID: " << temp->id
             << ", Name: " << temp->name
             << ", Age: " << temp->age
             << ", Disease: " << temp->disease << "\n";
        temp = temp->next;
    }
}

void viewdoctors() 
{
    if (doctorhead == nullptr) 
    {
        cout << "No doctor records found.\n";
        return;
    }

    Doctor* temp = doctorhead;
    cout << "\n--- Doctor Records ---\n";
    while (temp != nullptr) 
    {
        cout << "ID: " << temp->id
             << ", Name: " << temp->name
             << ", Specialization: " << temp->specialization << "\n";
        temp = temp->next;
    }
}

void viewappointments() 
{
    if (appointmenthead == nullptr) 
    {
        cout << "No appointment records found.\n";
        return;
    }

    Appointment* temp = appointmenthead;
    cout << "\n--- Appointment Records ---\n";
    while (temp != nullptr) 
    {
        cout << "Appointment ID: " << temp->id
             << ", Patient: " << temp->patient->name
             << ", Doctor: " << temp->doctor->name
             << ", Date: " << temp->date << "\n";
        temp = temp->next;
    }
}

void freeMemory() {
    while (appointmenthead != nullptr) 
    {
        Appointment* temp = appointmenthead;
        appointmenthead = appointmenthead->next;
        delete temp;
    }

    while (patienthead != nullptr) 
    {
        Patient* temp = patienthead;
        patienthead = patienthead->next;
        delete temp;
    }

    while (doctorhead != nullptr) 
    {
        Doctor* temp = doctorhead;
        doctorhead = doctorhead->next;
        delete temp;
    }
}

int main() {
    int choice;

    do {
        cout << "\n===== Hospital Management System =====\n";
        cout << "1. Add Patient\n";
        cout << "2. Add Doctor\n";
        cout << "3. Book Appointment\n";
        cout << "4. View Patients\n";
        cout << "5. View Doctors\n";
        cout << "6. View Appointments\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: addpatient(); break;
            case 2: adddoctor(); break;
            case 3: bookappointment(); break;
            case 4: viewpatients(); break;
            case 5: viewdoctors(); break;
            case 6: viewappointments(); break;
            case 7: cout << "Closing the program.\n"; break;
            default: cout << "Invalid choice...\n" << "Please provide correct choice.\n"; break;
        }
    } while (choice != 7);

    freeMemory();
    return 0;
}