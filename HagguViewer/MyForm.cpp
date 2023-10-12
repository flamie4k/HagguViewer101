#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HagguViewer::MyForm form;
    Application::Run(% form);
        /*array<String^>^ imagePaths = gcnew array<String^> {
                        Application::StartupPath + "\\HagguPics\\001.jpg",
                        Application::StartupPath + "\\HagguPics\\002.jpg",
                        Application::StartupPath + "\\HagguPics\\003.jpg",
                        Application::StartupPath + "\\HagguPics\\004.jpg",
                        Application::StartupPath + "\\HagguPics\\005.jpg",
                        Application::StartupPath + "\\HagguPics\\006.jpg",
                        Application::StartupPath + "\\HagguPics\\007.jpg",
                        Application::StartupPath + "\\HagguPics\\008.jpg",
                        Application::StartupPath + "\\HagguPics\\009.jpg",
                        Application::StartupPath + "\\HagguPics\\010.jpg",
                        Application::StartupPath + "\\HagguPics\\011.jpg",
                        Application::StartupPath + "\\HagguPics\\012.jpg",
                        Application::StartupPath + "\\HagguPics\\013.jpg",
                        Application::StartupPath + "\\HagguPics\\014.jpg",
                        Application::StartupPath + "\\HagguPics\\015.jpg",
                        Application::StartupPath + "\\HagguPics\\016.jpg",
                        Application::StartupPath + "\\HagguPics\\017.jpg",
                        Application::StartupPath + "\\HagguPics\\018.jpg",
                        Application::StartupPath + "\\HagguPics\\019.jpg",
                        Application::StartupPath + "\\HagguPics\\020.jpg",
                        Application::StartupPath + "\\HagguPics\\021.jpg",
                        Application::StartupPath + "\\HagguPics\\022.jpg",
                        Application::StartupPath + "\\HagguPics\\023.jpg",
                        Application::StartupPath + "\\HagguPics\\024.jpg",
                        Application::StartupPath + "\\HagguPics\\025.jpg"
                    };
    */
}
