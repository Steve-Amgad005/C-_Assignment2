#pragma once

namespace $safeprojectname$ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class MyForm : public Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
				delete components;
		}

	private:
		Label^ lblUsername;
		Label^ lblPassword;
		TextBox^ txtUsername;
		TextBox^ txtPassword;
		Button^ btnLogin;
		LinkLabel^ lnkForget;
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->lblUsername = gcnew Label();
			this->lblPassword = gcnew Label();
			this->txtUsername = gcnew TextBox();
			this->txtPassword = gcnew TextBox();
			this->btnLogin = gcnew Button();
			this->lnkForget = gcnew LinkLabel();

			this->SuspendLayout();

			// lblUsername
			this->lblUsername->Text = L"Username";
			this->lblUsername->Location = Point(40, 30);
			this->lblUsername->Size = Drawing::Size(100, 20);

			// txtUsername
			this->txtUsername->Location = Point(40, 50);
			this->txtUsername->Size = Drawing::Size(200, 25);

			// lblPassword
			this->lblPassword->Text = L"Password";
			this->lblPassword->Location = Point(40, 85);
			this->lblPassword->Size = Drawing::Size(100, 20);

			// txtPassword
			this->txtPassword->Location = Point(40, 105);
			this->txtPassword->Size = Drawing::Size(200, 25);
			this->txtPassword->PasswordChar = '*';

			// btnLogin
			this->btnLogin->Text = L"Login";
			this->btnLogin->Location = Point(40, 150);
			this->btnLogin->Size = Drawing::Size(200, 32);
			this->btnLogin->Click += gcnew EventHandler(this, &MyForm::btnLogin_Click);

			// lnkForget (Forget Password)
			this->lnkForget->Text = L"Forgot password?";
			this->lnkForget->Location = Point(40, 190);
			this->lnkForget->AutoSize = true;
			this->lnkForget->LinkColor = Color::Gray;
			this->lnkForget->ActiveLinkColor = Color::Blue;
			this->lnkForget->VisitedLinkColor = Color::Purple;
			this->lnkForget->Click += gcnew EventHandler(this, &MyForm::lnkForget_Click);

			// MyForm
			this->ClientSize = Drawing::Size(284, 240);
			this->StartPosition = FormStartPosition::CenterScreen;
			this->Text = L"Login";

			this->Controls->Add(this->lblUsername);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->btnLogin);
			this->Controls->Add(this->lnkForget);

			this->ResumeLayout(false);
		}
#pragma endregion

	private:
		System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (txtUsername->Text == "admin" && txtPassword->Text == "1234")
			{
				MessageBox::Show("Login Success");
			}
			else
			{
				MessageBox::Show("Invalid Username or Password");
			}
		}

		System::Void lnkForget_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MessageBox::Show("Contact admin to reset your password");
		}
	};
}
