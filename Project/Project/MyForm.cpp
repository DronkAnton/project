#include "MyForm.h" // �������� ������������ ���� ��� ������ MyForm  

using namespace System; // ��������� ������������ ���� ��� �������������  
using namespace System::Windows::Forms; // ��������� ������������ ���� ��� Windows Forms  

[STAThreadAttribute] // ��������� �������� � �������  

int main(array<String^>^ args) { // ����� ����� � ����������, ��������� ������ ����� � �������� ����������  
    Application::SetCompatibleTextRenderingDefault(false); // ������������� ������������� � ������������ ������ �� ��������� � �������� false  
    Application::EnableVisualStyles(); // �������� ���������� ����� ��� ����������  
    Project::MyForm form; // ������� ��������� ������ MyForm �� ������������ ���� Project5(Project5 - �������� �������)  
    Application::Run(% form); // ��������� ���������� � ��������� �������� ���� ��������� ��������� ��� ��������� �����  
}
