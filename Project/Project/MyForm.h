#pragma once

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ YourTasks;
	protected:
	private: System::Windows::Forms::Button^ Btn_AddTask;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->YourTasks = (gcnew System::Windows::Forms::ListBox());
			this->Btn_AddTask = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// YourTasks
			// 
			this->YourTasks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)));
			this->YourTasks->ForeColor = System::Drawing::Color::White;
			this->YourTasks->FormattingEnabled = true;
			this->YourTasks->Location = System::Drawing::Point(12, 55);
			this->YourTasks->Name = L"YourTasks";
			this->YourTasks->Size = System::Drawing::Size(377, 459);
			this->YourTasks->TabIndex = 0;
			// 
			// Btn_AddTask
			// 
			this->Btn_AddTask->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->Btn_AddTask->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Btn_AddTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F));
			this->Btn_AddTask->ForeColor = System::Drawing::Color::White;
			this->Btn_AddTask->Location = System::Drawing::Point(316, 434);
			this->Btn_AddTask->Name = L"Btn_AddTask";
			this->Btn_AddTask->Size = System::Drawing::Size(45, 45);
			this->Btn_AddTask->TabIndex = 1;
			this->Btn_AddTask->Text = L"+";
			this->Btn_AddTask->UseVisualStyleBackColor = false;
			this->Btn_AddTask->Click += gcnew System::EventHandler(this, &MyForm::Btn_AddTask_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(96, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"—писок дел";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(401, 526);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Btn_AddTask);
			this->Controls->Add(this->YourTasks);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Btn_AddTask_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	};
}
