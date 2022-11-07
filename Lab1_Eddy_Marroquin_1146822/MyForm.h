#pragma once

namespace Lab1EddyMarroquin1146822 {

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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_operador1;
	private: System::Windows::Forms::TextBox^ txt_operador2;
	private: System::Windows::Forms::Button^ Calcular;
	private: System::Windows::Forms::Label^ Resultado;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_operador1 = (gcnew System::Windows::Forms::TextBox());
			this->txt_operador2 = (gcnew System::Windows::Forms::TextBox());
			this->Calcular = (gcnew System::Windows::Forms::Button());
			this->Resultado = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Operando 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 190);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Operando 2";
			// 
			// txt_operador1
			// 
			this->txt_operador1->Location = System::Drawing::Point(186, 127);
			this->txt_operador1->Name = L"txt_operador1";
			this->txt_operador1->Size = System::Drawing::Size(100, 22);
			this->txt_operador1->TabIndex = 2;
			// 
			// txt_operador2
			// 
			this->txt_operador2->Location = System::Drawing::Point(186, 187);
			this->txt_operador2->Name = L"txt_operador2";
			this->txt_operador2->Size = System::Drawing::Size(100, 22);
			this->txt_operador2->TabIndex = 3;
			// 
			// Calcular
			// 
			this->Calcular->Location = System::Drawing::Point(154, 269);
			this->Calcular->Name = L"Calcular";
			this->Calcular->Size = System::Drawing::Size(75, 23);
			this->Calcular->TabIndex = 4;
			this->Calcular->Text = L"Calcular";
			this->Calcular->UseVisualStyleBackColor = true;
			this->Calcular->Click += gcnew System::EventHandler(this, &MyForm::Calcular_Click);
			// 
			// Resultado
			// 
			this->Resultado->AutoSize = true;
			this->Resultado->Location = System::Drawing::Point(165, 332);
			this->Resultado->Name = L"Resultado";
			this->Resultado->Size = System::Drawing::Size(69, 16);
			this->Resultado->TabIndex = 5;
			this->Resultado->Text = L"Resultado";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 404);
			this->Controls->Add(this->Resultado);
			this->Controls->Add(this->Calcular);
			this->Controls->Add(this->txt_operador2);
			this->Controls->Add(this->txt_operador1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Lab1EPMM1146822";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Calcular_Click(System::Object ^ sender, System::EventArgs ^ e) {
		int operador1 = 0, operador2 = 0;
		int suma = 0;

		operador1 = Convert::ToInt32(txt_operador1->Text);
		operador2 = Convert::ToInt32(txt_operador2->Text);

		suma = operador1 + operador2;

		this->Resultado->Text = suma.ToString();



	}
	
	}
	;};
