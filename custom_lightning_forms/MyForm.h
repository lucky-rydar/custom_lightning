#pragma once
#include <opencv2/opencv.hpp>
#include "Config.h"
#include "ColorProcessor.h"
#include "CustomLightning.h"

namespace customlightningforms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			lightning = new CustomLightning();
			cfg = new Config("config.txt");
		}

	protected:

		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ StaticModeButton;

	private: System::Windows::Forms::Button^ GameModeButton;
	private: System::Windows::Forms::Button^ RandomModeButton;



	private: System::Windows::Forms::Button^ PulseModeButton;

	private: System::Windows::Forms::Button^ WallpaperModeButton;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::BindingSource^ bindingSource1;

	private: System::ComponentModel::IContainer^ components;

		   CustomLightning* lightning;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon2;
		   Config* cfg;




#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->components = (gcnew System::ComponentModel::Container());
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->panelMenu = (gcnew System::Windows::Forms::Panel());
			   this->StaticModeButton = (gcnew System::Windows::Forms::Button());
			   this->GameModeButton = (gcnew System::Windows::Forms::Button());
			   this->RandomModeButton = (gcnew System::Windows::Forms::Button());
			   this->PulseModeButton = (gcnew System::Windows::Forms::Button());
			   this->WallpaperModeButton = (gcnew System::Windows::Forms::Button());
			   this->panelLogo = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			   this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			   this->notifyIcon2 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			   this->panelMenu->SuspendLayout();
			   this->panelLogo->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // panelMenu
			   // 
			   this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->panelMenu->Controls->Add(this->StaticModeButton);
			   this->panelMenu->Controls->Add(this->GameModeButton);
			   this->panelMenu->Controls->Add(this->RandomModeButton);
			   this->panelMenu->Controls->Add(this->PulseModeButton);
			   this->panelMenu->Controls->Add(this->WallpaperModeButton);
			   this->panelMenu->Controls->Add(this->panelLogo);
			   this->panelMenu->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panelMenu->Location = System::Drawing::Point(0, 0);
			   this->panelMenu->Name = L"panelMenu";
			   this->panelMenu->Size = System::Drawing::Size(284, 389);
			   this->panelMenu->TabIndex = 1;
			   // 
			   // StaticModeButton
			   // 
			   this->StaticModeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->StaticModeButton->Dock = System::Windows::Forms::DockStyle::Top;
			   this->StaticModeButton->FlatAppearance->BorderSize = 0;
			   this->StaticModeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->StaticModeButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->StaticModeButton->ForeColor = System::Drawing::Color::Gainsboro;
			   this->StaticModeButton->Location = System::Drawing::Point(0, 220);
			   this->StaticModeButton->Name = L"StaticModeButton";
			   this->StaticModeButton->Size = System::Drawing::Size(284, 30);
			   this->StaticModeButton->TabIndex = 5;
			   this->StaticModeButton->Text = L"Static Mode";
			   this->StaticModeButton->UseVisualStyleBackColor = false;
			   this->StaticModeButton->Click += gcnew System::EventHandler(this, &MyForm::StaticModeButton_Click);
			   // 
			   // GameModeButton
			   // 
			   this->GameModeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->GameModeButton->Dock = System::Windows::Forms::DockStyle::Top;
			   this->GameModeButton->FlatAppearance->BorderSize = 0;
			   this->GameModeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->GameModeButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->GameModeButton->ForeColor = System::Drawing::Color::Gainsboro;
			   this->GameModeButton->Location = System::Drawing::Point(0, 190);
			   this->GameModeButton->Name = L"GameModeButton";
			   this->GameModeButton->Size = System::Drawing::Size(284, 30);
			   this->GameModeButton->TabIndex = 4;
			   this->GameModeButton->Text = L"Game Mode";
			   this->GameModeButton->UseVisualStyleBackColor = false;
			   // 
			   // RandomModeButton
			   // 
			   this->RandomModeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->RandomModeButton->Dock = System::Windows::Forms::DockStyle::Top;
			   this->RandomModeButton->FlatAppearance->BorderSize = 0;
			   this->RandomModeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->RandomModeButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->RandomModeButton->ForeColor = System::Drawing::Color::Gainsboro;
			   this->RandomModeButton->Location = System::Drawing::Point(0, 160);
			   this->RandomModeButton->Name = L"RandomModeButton";
			   this->RandomModeButton->Size = System::Drawing::Size(284, 30);
			   this->RandomModeButton->TabIndex = 3;
			   this->RandomModeButton->Text = L"Random Mode";
			   this->RandomModeButton->UseVisualStyleBackColor = false;
			   this->RandomModeButton->Click += gcnew System::EventHandler(this, &MyForm::RandomModeButton_Click);
			   // 
			   // PulseModeButton
			   // 
			   this->PulseModeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->PulseModeButton->Dock = System::Windows::Forms::DockStyle::Top;
			   this->PulseModeButton->FlatAppearance->BorderSize = 0;
			   this->PulseModeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->PulseModeButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PulseModeButton->ForeColor = System::Drawing::Color::Gainsboro;
			   this->PulseModeButton->Location = System::Drawing::Point(0, 130);
			   this->PulseModeButton->Name = L"PulseModeButton";
			   this->PulseModeButton->Size = System::Drawing::Size(284, 30);
			   this->PulseModeButton->TabIndex = 2;
			   this->PulseModeButton->Text = L"Pulse Mode";
			   this->PulseModeButton->UseVisualStyleBackColor = false;
			   // 
			   // WallpaperModeButton
			   // 
			   this->WallpaperModeButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->WallpaperModeButton->Dock = System::Windows::Forms::DockStyle::Top;
			   this->WallpaperModeButton->FlatAppearance->BorderSize = 0;
			   this->WallpaperModeButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->WallpaperModeButton->Font = (gcnew System::Drawing::Font(L"Britannic Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->WallpaperModeButton->ForeColor = System::Drawing::Color::Gainsboro;
			   this->WallpaperModeButton->Location = System::Drawing::Point(0, 100);
			   this->WallpaperModeButton->Name = L"WallpaperModeButton";
			   this->WallpaperModeButton->Size = System::Drawing::Size(284, 30);
			   this->WallpaperModeButton->TabIndex = 1;
			   this->WallpaperModeButton->Text = L"Wallpaper Mode";
			   this->WallpaperModeButton->UseVisualStyleBackColor = false;
			   this->WallpaperModeButton->Click += gcnew System::EventHandler(this, &MyForm::WallpaperModeButton_Click);
			   // 
			   // panelLogo
			   // 
			   this->panelLogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(68)));
			   this->panelLogo->Controls->Add(this->pictureBox1);
			   this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			   this->panelLogo->Location = System::Drawing::Point(0, 0);
			   this->panelLogo->Name = L"panelLogo";
			   this->panelLogo->Size = System::Drawing::Size(284, 100);
			   this->panelLogo->TabIndex = 0;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(284, 100);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // notifyIcon1
			   // 
			   this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			   this->notifyIcon1->Text = L" ликните дл€ того что бы открыть приложение.\r\n";
			   this->notifyIcon1->Visible = true;
			   this->notifyIcon1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::notifyIcon1_MouseClick);
			   // 
			   // notifyIcon2
			   // 
			   this->notifyIcon2->Text = L"notifyIcon2";
			   this->notifyIcon2->Visible = true;

			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(284, 389);
			   this->Controls->Add(this->panelMenu);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MinimumSize = System::Drawing::Size(300, 428);
			   this->Name = L"MyForm";
			   this->Text = L"Keyboard Customer";



			   this->panelMenu->ResumeLayout(false);
			   this->panelLogo->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion


	private: System::Void WallpaperModeButton_Click(System::Object^ sender, System::EventArgs^ e)
	{

		ColorProcessor colProc(*cfg);


		colProc.calculateAverange();
		lightning->setColor(colProc.getColor());

	}

	private: System::Void StaticModeButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ColorDialog colDi;
		colDi.ShowDialog();

		Color color = colDi.Color;
		lightning->setColor(color.R, color.G, color.B);
	}
	private: System::Void RandomModeButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int red, green, blue;
		red = rand() % 255;
		green = rand() % 255;
		blue = rand() % 255;

		lightning->setColor(red, green, blue);
	}

		   // on click on icon
	private: System::Void notifyIcon1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		//notifyIcon1->Visible = false;
		if (this->Visible)
		{
			this->Hide();
		}
		else
		{
			this->Show();
			this->TopMost = true;
			this->TopMost = false;
		}

	}


	};
}

