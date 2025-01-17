#pragma once
#include "AddTeacher.h"
#include "AddStudent.h"
#include "AddCourse.h"
#include "AddRoom.h"
#include "Add Slot.h"
            #include "SearchByCourse.h"
#include "SearchByTeacher.h"
// #include "SearchByDay.h"
// #include "SearchByCourse.h"
#include "SearchByRoom.h"
#include "SearchBYSection.h"

namespace TimeTableGenerator {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for Dashboard
    /// </summary>
    public ref class Dashboard : public System::Windows::Forms::Form
    {
    public:
        Dashboard(void)
        {
            InitializeComponent();
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~Dashboard()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::ComboBox^ viewcombobox;
    private: System::Windows::Forms::ComboBox^ AddcomboBox;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::LinkLabel^ linkLabel1;

    protected:

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->viewcombobox = (gcnew System::Windows::Forms::ComboBox());
            this->AddcomboBox = (gcnew System::Windows::Forms::ComboBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(448, 30);
            this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(220, 46);
            this->label1->TabIndex = 0;
            this->label1->Text = L"DashBoard";
            // 
            // viewcombobox
            // 
            this->viewcombobox->FormattingEnabled = true;
            this->viewcombobox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"Search By Day", L"Search By Course", L"Search By Room",
                    L"Search As Teacher", L"Search As Student", L" "
            });
            this->viewcombobox->Location = System::Drawing::Point(148, 161);
            this->viewcombobox->Margin = System::Windows::Forms::Padding(4);
            this->viewcombobox->Name = L"viewcombobox";
            this->viewcombobox->Size = System::Drawing::Size(300, 24);
            this->viewcombobox->TabIndex = 6;
            // 
            // AddcomboBox
            // 
            this->AddcomboBox->FormattingEnabled = true;
            this->AddcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"Add Slot", L"Add Teacher", L"Add Course", L"Add Room",
                    L"Add Student", L" "
            });
            this->AddcomboBox->Location = System::Drawing::Point(664, 161);
            this->AddcomboBox->Margin = System::Windows::Forms::Padding(4);
            this->AddcomboBox->Name = L"AddcomboBox";
            this->AddcomboBox->Size = System::Drawing::Size(300, 24);
            this->AddcomboBox->TabIndex = 7;
            this->AddcomboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::AddcomboBox_SelectedIndexChanged_1);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(268, 114);
            this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(56, 24);
            this->label2->TabIndex = 8;
            this->label2->Text = L"View";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(788, 114);
            this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(48, 24);
            this->label3->TabIndex = 9;
            this->label3->Text = L"Add";
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(430, 335);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(192, 36);
            this->button1->TabIndex = 10;
            this->button1->Text = L"Select";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
            // 
            // linkLabel1
            // 
            this->linkLabel1->AutoSize = true;
            this->linkLabel1->Location = System::Drawing::Point(907, 403);
            this->linkLabel1->Name = L"linkLabel1";
            this->linkLabel1->Size = System::Drawing::Size(147, 16);
            this->linkLabel1->TabIndex = 11;
            this->linkLabel1->TabStop = true;
            this->linkLabel1->Text = L"BACK TO LOGIN PAGE";
            this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dashboard::linkLabel1_LinkClicked);
            // 
            // Dashboard
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1086, 445);
            this->Controls->Add(this->linkLabel1);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->AddcomboBox);
            this->Controls->Add(this->viewcombobox);
            this->Controls->Add(this->label1);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Dashboard";
            this->Text = L"Admin Dash";
            this->Load += gcnew System::EventHandler(this, &Dashboard::Dashboard_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Dashboard_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void AddcomboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (AddcomboBox->Text == "Add Teacher") {
            AddTeacher^ addTeacher = gcnew AddTeacher(this);
            addTeacher->Show();
            this->Hide();
        }
        else if (AddcomboBox->Text == "Add Slot") {
            timetable^ addSlot = gcnew timetable(this);
            addSlot->Show();
            this->Hide();
        }
        else if (AddcomboBox->Text == "Add Student") {
            AddStudent^ addStudent = gcnew AddStudent(this);
            addStudent->Show();
            this->Hide();
        }
        else if (AddcomboBox->Text == "Add Course") {
            AddCourse^ addCourse = gcnew AddCourse(this);
            addCourse->Show();
            this->Hide();
        }
        else if (AddcomboBox->Text == "Add Room") {
            AddRoom^ addRoom = gcnew AddRoom(this);
            addRoom->Show();
            this->Hide();
        }
        else if (viewcombobox->Text == "Search By Day") {
            // Uncomment the next two lines if you implement SearchByDay form
            // SearchByDay^ searchByDay = gcnew SearchByDay(this);
            // searchByDay->Show();
            // this->Hide();
        }
        else if (viewcombobox->Text == "Search By Course") {
            
            SearchByCourse^ searchByCours = gcnew SearchByCourse(this);
		
                searchByCours ->Show();
            this->Hide();
        }
        else if (viewcombobox->Text == "Search By Room") {
            SearchByRoom^ searchByRoom = gcnew SearchByRoom(this);
            searchByRoom->Show();
            this->Hide();
        }
        else if (viewcombobox->Text == "Search As Teacher") {
            SearchByTeacher^ searchByTeacher = gcnew SearchByTeacher(this);
            searchByTeacher->Show();
            this->Hide();
        }
        else if (viewcombobox->Text == "Search As Student") {
            SearchBYSection^ searchBySection = gcnew SearchBYSection(this);
            searchBySection->Show();
            this->Hide();
        }
        else {
            MessageBox::Show("Please select an option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
        this->Hide();
    }
    private: System::Void AddcomboBox_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
