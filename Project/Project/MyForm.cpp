#include "MyForm.h" // Включает заголовочный файл для класса MyForm  

using namespace System; // Указывает пространство имен для использования  
using namespace System::Windows::Forms; // Указывает пространство имен для Windows Forms  

[STAThreadAttribute] // позволяет работать с текстом  

int main(array<String^>^ args) { // Точка входа в приложение, принимает массив строк в качестве аргументов  
    Application::SetCompatibleTextRenderingDefault(false); // Устанавливает совместимость с отображением текста по умолчанию в значение false  
    Application::EnableVisualStyles(); // Включает визуальные стили для приложения  
    Project::MyForm form; // Создает экземпляр класса MyForm из пространства имен Project5(Project5 - название проекта)  
    Application::Run(% form); // Запускает приложение и запускает основной цикл обработки сообщений для указанной формы  
}
