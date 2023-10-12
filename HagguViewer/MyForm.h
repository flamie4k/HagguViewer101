#pragma once

namespace HagguViewer {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();

            // Initialize imagePaths and currentIndex
            System::IO::Directory::SetCurrentDirectory(System::IO::Path::GetDirectoryName(Application::ExecutablePath));
             imagePaths = gcnew array<String^>{
                    "HagguPics\\001.jpg",
                    "HagguPics\\002.jpg",
                    "HagguPics\\003.jpg",
                    "HagguPics\\004.jpg",
                    "HagguPics\\005.jpg",
                    "HagguPics\\006.jpg",
                    "HagguPics\\007.jpg",
                    "HagguPics\\008.jpg",
                    "HagguPics\\009.jpg",
                    "HagguPics\\010.jpg",
                    "HagguPics\\011.jpg",
                    "HagguPics\\012.jpg",
                    "HagguPics\\013.jpg",
                    "HagguPics\\014.jpg",
                    "HagguPics\\015.jpg",
                    "HagguPics\\016.jpg",
                    "HagguPics\\017.jpg",
                    "HagguPics\\018.jpg",
                    "HagguPics\\019.jpg",
                    "HagguPics\\020.jpg",
                    "HagguPics\\021.jpg",
                    "HagguPics\\022.jpg",
                    "HagguPics\\023.jpg",
                    "HagguPics\\024.jpg",
                    "HagguPics\\025.jpg"
                    };
            currentIndex = 0;
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Button^ button1;
        array<String^>^ imagePaths; // Array of image file paths
        int currentIndex;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 28));
            this->label1->Location = System::Drawing::Point(560, 25);
            this->label1->Name = L"label1";
            this->label1->Padding = System::Windows::Forms::Padding(10);
            this->label1->Size = System::Drawing::Size(434, 80);
            this->label1->TabIndex = 0;
            this->label1->Text = L"HagguViewer101";
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
            this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
            this->pictureBox1->Location = System::Drawing::Point(193, 128);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Padding = System::Windows::Forms::Padding(10);
            this->pictureBox1->Size = System::Drawing::Size(1089, 500);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
            this->pictureBox1->TabIndex = 1;
            this->pictureBox1->TabStop = false;
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->button1->Location = System::Drawing::Point(605, 654);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(300, 50);
            this->button1->TabIndex = 2;
            this->button1->Text = L"Next Haggu Pic Pls";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16));
            this->label2->Location = System::Drawing::Point(1143, 128);
            this->label2->Name = L"label2";
            this->label2->Padding = System::Windows::Forms::Padding(10);
            this->label2->Size = System::Drawing::Size(139, 55);
            this->label2->TabIndex = 3;
            this->label2->Text = L"Counter";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(1179, 183);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(69, 27);
            this->label3->TabIndex = 4;
            this->label3->Text = L"";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(12, 27);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->ClientSize = System::Drawing::Size(1482, 743);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->label1);
            this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12));
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(4, 6, 4, 6);
            this->Name = L"MyForm";
            this->Padding = System::Windows::Forms::Padding(10);
            this->Text = L"HagguViewer101";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    protected: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
        if (imagePaths != nullptr && imagePaths->Length > 0) {
            pictureBox1->BackgroundImage = Image::FromFile(imagePaths[currentIndex]);
        }
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        if (imagePaths != nullptr && currentIndex >= 0 && currentIndex < imagePaths->Length) {
            pictureBox1->BackgroundImage = Image::FromFile(imagePaths[currentIndex]);
            label3->Text = (currentIndex+1).ToString();
            currentIndex = (currentIndex + 1) % imagePaths->Length;
        }
        else {
            //meant to be empty
        }
    }
    };
}
