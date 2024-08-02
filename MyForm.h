#include <string>
#include <ctime> 
#include <sstream>
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include "msclr\marshal_cppstd.h"
#include "MessageForUser.h"
#include "WeightInfo.h"
#include "Question.h"
#include "MetersInfo.h"
//#include "MyData.h"
//#include <thread> 
#pragma once

namespace TextileDisassemblyApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::IO::Ports;
    using namespace System::IO;
    /*using namespace System::Net;
    using namespace System::Threading;
    using namespace System::Threading::Tasks;*/
    class MyData {
    private:
        static bool weight;// = true;
        static double totalImpulses;//= 0.0;
        static double scalingFactor;//= 0.032;
        static double metersUV;//= 0.0;
        //static const char* address2;//* ;
        static int key_m;//= 37;
        static int global;
        static int total_weight;
        static int total;
        static int port;//= 14370;
        static int a;//= 0;
        static int b;//= 1;
        static int f;//= 0;
        static int d;//= 1;
        static double countM;//= 0.0;
        static double countM2;//= 0.0;
        static int cuts;//= 1;
        static int cuts_garant;//= 1;
        static int quantityUV;//= 0;
        static double if_weight_totalImpulses;//= 0.0;
        static bool flag;//= false;
        static short valid_scan;//= 0;
        static short valid_scan_o;//= 0;
        static int noMore;//= 0;
        static bool flag_include;//flag_include;
        static int q_trim;//= 0;
        static double m_trim;//= 0.0;
        static bool first_start;//= false;




    public:

        static int globalR() {
            return global;
        }
        static void global_(int value) {
            global = value;
        }

        //
        static bool weightR() {
            return weight;
        }
        static void weight_(bool value) {
            weight = value;
        }


        //
        static bool first_startR() {
            return first_start;
        }
        static void first_start_(bool value) {
            first_start = value;
        }

        //first_start
        static bool flag_includeR() {
            return flag_include;
        }
        static void flag_include_(bool value) {
            flag_include = value;
        }

        //
        static bool flagR() {
            return flag;
        }
        static void flag_(bool value) {
            flag = value;
        }

        //
        static double totalImpulsesR() {
            return totalImpulses;
        }
        static void totalImpulses_(double value) {
            totalImpulses = value;
        }

        //
        static double m_trimR() {
            return m_trim;
        }
        static void m_trim_(double value) {
            m_trim = value;
        }


        //
        static double scalingFactorR() {
            return scalingFactor;
        }
        static void scalingFactor_(double value) {
            scalingFactor = value;
        }

        //
        static double metersUVR() {
            return metersUV;
        }
        static void metersUV_(double value) {
            metersUV = value;
        }

        //
        static double countMR() {
            return countM;
        }
        static void countM_(double value) {
            countM = value;
        }

        //
        static double countM2R() {
            return countM2;
        }
        static void countM2_(double value) {
            countM2 = value;
        }

        //
        static double if_weight_totalImpulsesR() {
            return if_weight_totalImpulses;
        }
        static void if_weight_totalImpulses_(double value) {
            if_weight_totalImpulses = value;
        }

        //
        static int q_trimR() {
            return q_trim;
        }
        static void q_trim_(int value) {
            q_trim = value;
        }

        //
        static int total_weightR() {
            return total_weight;
        }
        static void total_weight_(int value) {
            total_weight = value;
        }

        //
        static int totalR() {
            return total;
        }
        static void total_(int value) {
            total = value;
        }

        //
        static int cutsR() {
            return cuts;
        }
        static void cuts_(int value) {
            cuts = value;
        }

        //
        static int noMoreR() {
            return noMore;
        }
        static void noMore_(int value) {
            noMore = value;
        }

        //
        static int quantityUVR() {
            return quantityUV;
        }
        static void quantityUV_(int value) {
            quantityUV = value;
        }

        //
        static int key_mR() {
            return key_m;
        }
        static void key_m_(int value) {
            key_m = value;
        }

        //
        static int portR() {
            return port;
        }
        static void port_(int value) {
            port = value;
        }

        //
        static int aR() {
            return a;
        }
        static void a_(int value) {
            a = value;
        }

        //
        static int bR() {
            return b;
        }
        static void b_(int value) {
            b = value;
        }

        //
        static int fR() {
            return f;
        }
        static void f_(int value) {
            f = value;
        }

        //
        static int dR() {
            return d;
        }
        static void d_(int value) {
            d = value;
        }

        //
        static int cuts_garantR() {
            return cuts_garant;
        }
        static void cuts_garant_(int value) {
            cuts_garant = value;
        }



        //
        static short valid_scanR() {
            return valid_scan;
        }
        static void valid_scan_(short value) {
            valid_scan = value;
        }


        //
        static short valid_scan_oR() {
            return valid_scan_o;
        }
        static void valid_scan_o_(short value) {
            valid_scan_o = value;
        }

        //
        /*static const char* address2R() {
            return address2;
        }
        static void address2_(const char* value) {
            address2 = value;
        }*/



    };
	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
    ///
    bool MyData::weight = true;
    bool MyData::flag = false;
    bool MyData::flag_include = true;
    bool MyData::first_start = false;
    double MyData::totalImpulses = 0.0;
    double MyData::scalingFactor = 0.032;
    double MyData::countM = 0.0;
    double MyData::countM2 = 0.0;
    double MyData::if_weight_totalImpulses = 0.0;
    double MyData::metersUV = 0.0;
    double MyData::m_trim = 0.0;
    int MyData::quantityUV = 0;
    int MyData::total = 0;
    int MyData::global = 0;
    int MyData::total_weight = 0;
    int MyData::cuts = 0;
    int MyData::noMore = 0;
    int MyData::key_m = 37;
    int MyData::port = 14370;
    int MyData::a = 0;
    int MyData::b = 1;
    int MyData::f = 0;
    int MyData::d = 1;
    int MyData::cuts_garant = 1;
    int MyData::q_trim = 1;
    short MyData::valid_scan = 0;
    short MyData::valid_scan_o = 0;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; 
			this->WindowState = FormWindowState::Maximized; 
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
    private:ShowWindowOrWeigth::WeightInfoClass^ recordWeight;
    private:MI::MetersInfo^ metersClass; 
    private:QuestionWindow::Question^ question;
    private: System::Windows::Forms::ColorDialog^ colorDialog1;
    protected:


    private: System::Windows::Forms::Button^ bt_trim;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ bt_print;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::TextBox^ tInfo2;
    private: System::Windows::Forms::Button^ bto_minus;
    private: System::Windows::Forms::Button^ bto_plus;
    private: System::Windows::Forms::Button^ btuv_0;

    private: System::Windows::Forms::TextBox^ textBox13;




    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::TextBox^ textBox11;

    private: System::Windows::Forms::Button^ bts_5;
    private: System::Windows::Forms::Button^ bts_4;
    private: System::Windows::Forms::Button^ bts_2;
    private: System::Windows::Forms::Button^ bts_1;
    private: System::Windows::Forms::Button^ bts_3;
    private: System::Windows::Forms::Button^ btuv_4;
    private: System::Windows::Forms::Button^ btuv_2;
    private: System::Windows::Forms::Button^ btuv_1;
    private: System::Windows::Forms::Button^ btuv_3;
    private: System::Windows::Forms::Button^ bt_uv_minus;
    private: System::Windows::Forms::Button^ bt_uv_plus;
    private: System::Windows::Forms::TextBox^ tInfo;
    private: System::Windows::Forms::Label^ li8;
    private: System::Windows::Forms::Label^ li7;
    private: System::Windows::Forms::Label^ li1;
    private: System::Windows::Forms::Label^ li2;
    private: System::Windows::Forms::Label^ li3;
    private: System::Windows::Forms::Label^ li4;
    private: System::Windows::Forms::Label^ li5;
    private: System::Windows::Forms::Label^ li6;



    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Button^ bt2_;
    private: System::Windows::Forms::Button^ bt0;
    private: System::Windows::Forms::Button^ bt_slash;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ bt5;
    private: System::Windows::Forms::Button^ bt1;
    private: System::Windows::Forms::Button^ bt8;
    private: System::Windows::Forms::Button^ bt4;
    private: System::Windows::Forms::Button^ bt7;
    private: System::Windows::Forms::Button^ bt_point;
    private: System::Windows::Forms::Button^ bt6;
    private: System::Windows::Forms::Button^ bt_plus;
    private: System::Windows::Forms::Button^ bt3_;
    private: System::Windows::Forms::Button^ bt9;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::TextBox^ textBox14;
    private: System::Windows::Forms::Button^ btShutDown;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ tMachine;
    private: System::Windows::Forms::TextBox^ tControler;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Button^ btWriteData;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ lquantityUV;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::ComboBox^ cboxPrinter;
    private: System::Windows::Forms::Label^ lmetersUV;
    private: System::Windows::Forms::ComboBox^ comboUV;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox33;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::IO::Ports::SerialPort^ Serial;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::ComboBox^ comboS;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ btnSend;
    private: System::Windows::Forms::TextBox^ tboxTransmitData;
    private: System::Windows::Forms::Button^ btnRefresh;
    private: System::Windows::Forms::Button^ btnConnect;
    private: System::Windows::Forms::ComboBox^ cboxBaud;
    private: System::Windows::Forms::ComboBox^ cboxCom;
    private: System::Windows::Forms::TextBox^ tboxReceiveOutput;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox13;
    private: System::ComponentModel::IContainer^ components;

private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ l_meters_trim;

private: System::Windows::Forms::Label^ l_quantity_trim;
private: System::Windows::Forms::Button^ bt_trim_plus;
private: System::Windows::Forms::Button^ bt_trim_minus;
private: System::Windows::Forms::CheckBox^ checkBox1;



private: System::Windows::Forms::Control^ control;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
            this->components = (gcnew System::ComponentModel::Container());
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
            this->bt_trim = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->bt_print = (gcnew System::Windows::Forms::Button());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->tInfo2 = (gcnew System::Windows::Forms::TextBox());
            this->bto_minus = (gcnew System::Windows::Forms::Button());
            this->bto_plus = (gcnew System::Windows::Forms::Button());
            this->btuv_0 = (gcnew System::Windows::Forms::Button());
            this->textBox13 = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->bts_5 = (gcnew System::Windows::Forms::Button());
            this->bts_4 = (gcnew System::Windows::Forms::Button());
            this->bts_2 = (gcnew System::Windows::Forms::Button());
            this->bts_1 = (gcnew System::Windows::Forms::Button());
            this->bts_3 = (gcnew System::Windows::Forms::Button());
            this->btuv_4 = (gcnew System::Windows::Forms::Button());
            this->btuv_2 = (gcnew System::Windows::Forms::Button());
            this->btuv_1 = (gcnew System::Windows::Forms::Button());
            this->btuv_3 = (gcnew System::Windows::Forms::Button());
            this->bt_uv_minus = (gcnew System::Windows::Forms::Button());
            this->bt_uv_plus = (gcnew System::Windows::Forms::Button());
            this->tInfo = (gcnew System::Windows::Forms::TextBox());
            this->li8 = (gcnew System::Windows::Forms::Label());
            this->li7 = (gcnew System::Windows::Forms::Label());
            this->li1 = (gcnew System::Windows::Forms::Label());
            this->li2 = (gcnew System::Windows::Forms::Label());
            this->li3 = (gcnew System::Windows::Forms::Label());
            this->li4 = (gcnew System::Windows::Forms::Label());
            this->li5 = (gcnew System::Windows::Forms::Label());
            this->li6 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->bt2_ = (gcnew System::Windows::Forms::Button());
            this->bt0 = (gcnew System::Windows::Forms::Button());
            this->bt_slash = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->bt5 = (gcnew System::Windows::Forms::Button());
            this->bt1 = (gcnew System::Windows::Forms::Button());
            this->bt8 = (gcnew System::Windows::Forms::Button());
            this->bt4 = (gcnew System::Windows::Forms::Button());
            this->bt7 = (gcnew System::Windows::Forms::Button());
            this->bt_point = (gcnew System::Windows::Forms::Button());
            this->bt6 = (gcnew System::Windows::Forms::Button());
            this->bt_plus = (gcnew System::Windows::Forms::Button());
            this->bt3_ = (gcnew System::Windows::Forms::Button());
            this->bt9 = (gcnew System::Windows::Forms::Button());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox14 = (gcnew System::Windows::Forms::TextBox());
            this->btShutDown = (gcnew System::Windows::Forms::Button());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tMachine = (gcnew System::Windows::Forms::TextBox());
            this->tControler = (gcnew System::Windows::Forms::TextBox());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->btWriteData = (gcnew System::Windows::Forms::Button());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->lquantityUV = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->cboxPrinter = (gcnew System::Windows::Forms::ComboBox());
            this->lmetersUV = (gcnew System::Windows::Forms::Label());
            this->comboUV = (gcnew System::Windows::Forms::ComboBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox33 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->Serial = (gcnew System::IO::Ports::SerialPort(this->components));
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->comboS = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->btnSend = (gcnew System::Windows::Forms::Button());
            this->tboxTransmitData = (gcnew System::Windows::Forms::TextBox());
            this->btnRefresh = (gcnew System::Windows::Forms::Button());
            this->btnConnect = (gcnew System::Windows::Forms::Button());
            this->cboxBaud = (gcnew System::Windows::Forms::ComboBox());
            this->cboxCom = (gcnew System::Windows::Forms::ComboBox());
            this->tboxReceiveOutput = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
            this->l_meters_trim = (gcnew System::Windows::Forms::Label());
            this->l_quantity_trim = (gcnew System::Windows::Forms::Label());
            this->bt_trim_plus = (gcnew System::Windows::Forms::Button());
            this->bt_trim_minus = (gcnew System::Windows::Forms::Button());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
            this->SuspendLayout();
            // 
            // colorDialog1
            // 
            this->colorDialog1->Color = System::Drawing::Color::Red;
            // 
            // bt_trim
            // 
            this->bt_trim->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_trim->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_trim->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_trim->ForeColor = System::Drawing::Color::Sienna;
            this->bt_trim->Location = System::Drawing::Point(1075, 873);
            this->bt_trim->Name = L"bt_trim";
            this->bt_trim->Size = System::Drawing::Size(212, 71);
            this->bt_trim->TabIndex = 221;
            this->bt_trim->Text = L"������";
            this->bt_trim->UseVisualStyleBackColor = false;
            this->bt_trim->Click += gcnew System::EventHandler(this, &MyForm::bt_trim_Click_1);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Cornsilk;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->ForeColor = System::Drawing::Color::Sienna;
            this->button1->Location = System::Drawing::Point(2, 781);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(231, 101);
            this->button1->TabIndex = 219;
            this->button1->Text = L"��������";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // 
            // bt_print
            // 
            this->bt_print->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_print->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_print->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_print->ForeColor = System::Drawing::Color::Sienna;
            this->bt_print->Location = System::Drawing::Point(1515, 424);
            this->bt_print->Name = L"bt_print";
            this->bt_print->Size = System::Drawing::Size(282, 78);
            this->bt_print->TabIndex = 218;
            this->bt_print->Text = L"������";
            this->bt_print->UseVisualStyleBackColor = false;
            this->bt_print->Click += gcnew System::EventHandler(this, &MyForm::bt_print_Click);
            // 
            // textBox6
            // 
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox6->Location = System::Drawing::Point(1931, 277);
            this->textBox6->Multiline = true;
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(132, 25);
            this->textBox6->TabIndex = 217;
            this->textBox6->Text = L"0.0";
            this->textBox6->UseSystemPasswordChar = true;
            // 
            // tInfo2
            // 
            this->tInfo2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tInfo2->Location = System::Drawing::Point(1576, 67);
            this->tInfo2->Multiline = true;
            this->tInfo2->Name = L"tInfo2";
            this->tInfo2->Size = System::Drawing::Size(132, 25);
            this->tInfo2->TabIndex = 216;
            // 
            // bto_minus
            // 
            this->bto_minus->BackColor = System::Drawing::Color::Cornsilk;
            this->bto_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bto_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bto_minus->ForeColor = System::Drawing::Color::Sienna;
            this->bto_minus->Location = System::Drawing::Point(1368, 250);
            this->bto_minus->Name = L"bto_minus";
            this->bto_minus->Size = System::Drawing::Size(83, 83);
            this->bto_minus->TabIndex = 215;
            this->bto_minus->Text = L"-";
            this->bto_minus->UseVisualStyleBackColor = false;
            this->bto_minus->Click += gcnew System::EventHandler(this, &MyForm::bto_minus_Click);
            // 
            // bto_plus
            // 
            this->bto_plus->BackColor = System::Drawing::Color::Cornsilk;
            this->bto_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bto_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bto_plus->ForeColor = System::Drawing::Color::Sienna;
            this->bto_plus->Location = System::Drawing::Point(1245, 249);
            this->bto_plus->Name = L"bto_plus";
            this->bto_plus->Size = System::Drawing::Size(83, 83);
            this->bto_plus->TabIndex = 214;
            this->bto_plus->Text = L"+";
            this->bto_plus->UseVisualStyleBackColor = false;
            this->bto_plus->Click += gcnew System::EventHandler(this, &MyForm::bto_plus_Click);
            // 
            // btuv_0
            // 
            this->btuv_0->BackColor = System::Drawing::Color::Cornsilk;
            this->btuv_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btuv_0->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btuv_0->ForeColor = System::Drawing::Color::Sienna;
            this->btuv_0->Location = System::Drawing::Point(1368, 584);
            this->btuv_0->Name = L"btuv_0";
            this->btuv_0->Size = System::Drawing::Size(83, 83);
            this->btuv_0->TabIndex = 213;
            this->btuv_0->Text = L"0";
            this->btuv_0->UseVisualStyleBackColor = false;
            this->btuv_0->Click += gcnew System::EventHandler(this, &MyForm::btuv_0_Click);
            // 
            // textBox13
            // 
            this->textBox13->BackColor = System::Drawing::SystemColors::Window;
            this->textBox13->Location = System::Drawing::Point(1075, 772);
            this->textBox13->Multiline = true;
            this->textBox13->Name = L"textBox13";
            this->textBox13->ReadOnly = true;
            this->textBox13->Size = System::Drawing::Size(212, 97);
            this->textBox13->TabIndex = 209;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->ForeColor = System::Drawing::Color::Sienna;
            this->label10->Location = System::Drawing::Point(350, 503);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(418, 53);
            this->label10->TabIndex = 204;
            this->label10->Text = L"�������� ������";
            // 
            // textBox11
            // 
            this->textBox11->BackColor = System::Drawing::SystemColors::Window;
            this->textBox11->Location = System::Drawing::Point(260, 500);
            this->textBox11->Multiline = true;
            this->textBox11->Name = L"textBox11";
            this->textBox11->ReadOnly = true;
            this->textBox11->Size = System::Drawing::Size(593, 61);
            this->textBox11->TabIndex = 203;
            // 
            // bts_5
            // 
            this->bts_5->BackColor = System::Drawing::Color::Cornsilk;
            this->bts_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bts_5->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bts_5->ForeColor = System::Drawing::Color::Sienna;
            this->bts_5->Location = System::Drawing::Point(1357, 116);
            this->bts_5->Name = L"bts_5";
            this->bts_5->Size = System::Drawing::Size(94, 96);
            this->bts_5->TabIndex = 200;
            this->bts_5->Text = L"5";
            this->bts_5->UseVisualStyleBackColor = false;
            this->bts_5->Click += gcnew System::EventHandler(this, &MyForm::bts_5_Click_1);
            // 
            // bts_4
            // 
            this->bts_4->BackColor = System::Drawing::Color::Cornsilk;
            this->bts_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bts_4->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bts_4->ForeColor = System::Drawing::Color::Sienna;
            this->bts_4->Location = System::Drawing::Point(1245, 116);
            this->bts_4->Name = L"bts_4";
            this->bts_4->Size = System::Drawing::Size(94, 96);
            this->bts_4->TabIndex = 196;
            this->bts_4->Text = L"4";
            this->bts_4->UseVisualStyleBackColor = false;
            this->bts_4->Click += gcnew System::EventHandler(this, &MyForm::bts_4_Click_1);
            // 
            // bts_2
            // 
            this->bts_2->BackColor = System::Drawing::Color::Cornsilk;
            this->bts_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bts_2->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bts_2->ForeColor = System::Drawing::Color::Sienna;
            this->bts_2->Location = System::Drawing::Point(1016, 115);
            this->bts_2->Name = L"bts_2";
            this->bts_2->Size = System::Drawing::Size(94, 96);
            this->bts_2->TabIndex = 198;
            this->bts_2->Text = L"2";
            this->bts_2->UseVisualStyleBackColor = false;
            this->bts_2->Click += gcnew System::EventHandler(this, &MyForm::bts_2_Click_1);
            // 
            // bts_1
            // 
            this->bts_1->BackColor = System::Drawing::Color::Cornsilk;
            this->bts_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bts_1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bts_1->ForeColor = System::Drawing::Color::Sienna;
            this->bts_1->Location = System::Drawing::Point(902, 116);
            this->bts_1->Name = L"bts_1";
            this->bts_1->Size = System::Drawing::Size(95, 95);
            this->bts_1->TabIndex = 197;
            this->bts_1->TabStop = false;
            this->bts_1->Text = L"1";
            this->bts_1->UseVisualStyleBackColor = false;
            this->bts_1->Click += gcnew System::EventHandler(this, &MyForm::bts_1_Click);
            // 
            // bts_3
            // 
            this->bts_3->BackColor = System::Drawing::Color::Cornsilk;
            this->bts_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bts_3->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bts_3->ForeColor = System::Drawing::Color::Sienna;
            this->bts_3->Location = System::Drawing::Point(1132, 115);
            this->bts_3->Name = L"bts_3";
            this->bts_3->Size = System::Drawing::Size(94, 96);
            this->bts_3->TabIndex = 199;
            this->bts_3->Text = L"3";
            this->bts_3->UseVisualStyleBackColor = false;
            this->bts_3->Click += gcnew System::EventHandler(this, &MyForm::bts_3_Click_1);
            // 
            // btuv_4
            // 
            this->btuv_4->BackColor = System::Drawing::Color::Cornsilk;
            this->btuv_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btuv_4->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btuv_4->ForeColor = System::Drawing::Color::Sienna;
            this->btuv_4->Location = System::Drawing::Point(1256, 584);
            this->btuv_4->Name = L"btuv_4";
            this->btuv_4->Size = System::Drawing::Size(83, 83);
            this->btuv_4->TabIndex = 178;
            this->btuv_4->Text = L"4";
            this->btuv_4->UseVisualStyleBackColor = false;
            this->btuv_4->Click += gcnew System::EventHandler(this, &MyForm::btuv_4_Click);
            // 
            // btuv_2
            // 
            this->btuv_2->BackColor = System::Drawing::Color::Cornsilk;
            this->btuv_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btuv_2->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btuv_2->ForeColor = System::Drawing::Color::Sienna;
            this->btuv_2->Location = System::Drawing::Point(1027, 584);
            this->btuv_2->Name = L"btuv_2";
            this->btuv_2->Size = System::Drawing::Size(83, 83);
            this->btuv_2->TabIndex = 181;
            this->btuv_2->Text = L"2";
            this->btuv_2->UseVisualStyleBackColor = false;
            this->btuv_2->Click += gcnew System::EventHandler(this, &MyForm::btuv_2_Click);
            // 
            // btuv_1
            // 
            this->btuv_1->BackColor = System::Drawing::Color::Cornsilk;
            this->btuv_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btuv_1->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btuv_1->ForeColor = System::Drawing::Color::Sienna;
            this->btuv_1->Location = System::Drawing::Point(902, 584);
            this->btuv_1->Name = L"btuv_1";
            this->btuv_1->Size = System::Drawing::Size(83, 83);
            this->btuv_1->TabIndex = 177;
            this->btuv_1->TabStop = false;
            this->btuv_1->Text = L"1";
            this->btuv_1->UseVisualStyleBackColor = false;
            this->btuv_1->Click += gcnew System::EventHandler(this, &MyForm::btuv_1_Click);
            // 
            // btuv_3
            // 
            this->btuv_3->BackColor = System::Drawing::Color::Cornsilk;
            this->btuv_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btuv_3->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btuv_3->ForeColor = System::Drawing::Color::Sienna;
            this->btuv_3->Location = System::Drawing::Point(1143, 585);
            this->btuv_3->Name = L"btuv_3";
            this->btuv_3->Size = System::Drawing::Size(83, 83);
            this->btuv_3->TabIndex = 183;
            this->btuv_3->Text = L"3";
            this->btuv_3->UseVisualStyleBackColor = false;
            this->btuv_3->Click += gcnew System::EventHandler(this, &MyForm::btuv_3_Click);
            // 
            // bt_uv_minus
            // 
            this->bt_uv_minus->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_uv_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_uv_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_uv_minus->ForeColor = System::Drawing::Color::Sienna;
            this->bt_uv_minus->Location = System::Drawing::Point(141, 584);
            this->bt_uv_minus->Name = L"bt_uv_minus";
            this->bt_uv_minus->Size = System::Drawing::Size(83, 83);
            this->bt_uv_minus->TabIndex = 195;
            this->bt_uv_minus->Text = L"-";
            this->bt_uv_minus->UseVisualStyleBackColor = false;
            this->bt_uv_minus->Click += gcnew System::EventHandler(this, &MyForm::bt_uv_minus_Click);
            // 
            // bt_uv_plus
            // 
            this->bt_uv_plus->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_uv_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_uv_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_uv_plus->ForeColor = System::Drawing::Color::Sienna;
            this->bt_uv_plus->Location = System::Drawing::Point(42, 584);
            this->bt_uv_plus->Name = L"bt_uv_plus";
            this->bt_uv_plus->Size = System::Drawing::Size(83, 83);
            this->bt_uv_plus->TabIndex = 176;
            this->bt_uv_plus->Text = L"+";
            this->bt_uv_plus->UseVisualStyleBackColor = false;
            this->bt_uv_plus->Click += gcnew System::EventHandler(this, &MyForm::bt_uv_plus_Click);
            // 
            // tInfo
            // 
            this->tInfo->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tInfo->Location = System::Drawing::Point(1576, 34);
            this->tInfo->Multiline = true;
            this->tInfo->Name = L"tInfo";
            this->tInfo->Size = System::Drawing::Size(132, 25);
            this->tInfo->TabIndex = 194;
            this->tInfo->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            // 
            // li8
            // 
            this->li8->AutoSize = true;
            this->li8->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li8->ForeColor = System::Drawing::Color::Sienna;
            this->li8->Location = System::Drawing::Point(1794, 397);
            this->li8->Name = L"li8";
            this->li8->Size = System::Drawing::Size(86, 18);
            this->li8->TabIndex = 193;
            this->li8->Text = L"��� �����:";
            // 
            // li7
            // 
            this->li7->AutoSize = true;
            this->li7->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li7->ForeColor = System::Drawing::Color::Sienna;
            this->li7->Location = System::Drawing::Point(1668, 397);
            this->li7->Name = L"li7";
            this->li7->Size = System::Drawing::Size(90, 18);
            this->li7->TabIndex = 192;
            this->li7->Text = L"�� ������:";
            // 
            // li1
            // 
            this->li1->AutoSize = true;
            this->li1->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li1->ForeColor = System::Drawing::Color::Sienna;
            this->li1->Location = System::Drawing::Point(1463, 158);
            this->li1->Name = L"li1";
            this->li1->Size = System::Drawing::Size(68, 55);
            this->li1->TabIndex = 191;
            this->li1->Text = L"�:";
            // 
            // li2
            // 
            this->li2->AutoSize = true;
            this->li2->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li2->ForeColor = System::Drawing::Color::Sienna;
            this->li2->Location = System::Drawing::Point(1463, 219);
            this->li2->Name = L"li2";
            this->li2->Size = System::Drawing::Size(65, 55);
            this->li2->TabIndex = 190;
            this->li2->Text = L"�:";
            // 
            // li3
            // 
            this->li3->AutoSize = true;
            this->li3->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li3->ForeColor = System::Drawing::Color::Sienna;
            this->li3->Location = System::Drawing::Point(1459, 278);
            this->li3->Name = L"li3";
            this->li3->Size = System::Drawing::Size(72, 55);
            this->li3->TabIndex = 189;
            this->li3->Text = L"�:";
            // 
            // li4
            // 
            this->li4->AutoSize = true;
            this->li4->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li4->ForeColor = System::Drawing::Color::Sienna;
            this->li4->Location = System::Drawing::Point(1459, 333);
            this->li4->Name = L"li4";
            this->li4->Size = System::Drawing::Size(76, 55);
            this->li4->TabIndex = 188;
            this->li4->Text = L"�:";
            // 
            // li5
            // 
            this->li5->AutoSize = true;
            this->li5->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li5->ForeColor = System::Drawing::Color::Sienna;
            this->li5->Location = System::Drawing::Point(1467, 397);
            this->li5->Name = L"li5";
            this->li5->Size = System::Drawing::Size(68, 18);
            this->li5->TabIndex = 187;
            this->li5->Text = L"������:";
            // 
            // li6
            // 
            this->li6->AutoSize = true;
            this->li6->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->li6->ForeColor = System::Drawing::Color::Sienna;
            this->li6->Location = System::Drawing::Point(1551, 397);
            this->li6->Name = L"li6";
            this->li6->Size = System::Drawing::Size(84, 18);
            this->li6->TabIndex = 186;
            this->li6->Text = L"�� ���-��:";
            // 
            // panel1
            // 
            this->panel1->Controls->Add(this->bt2_);
            this->panel1->Controls->Add(this->bt0);
            this->panel1->Controls->Add(this->bt_slash);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->bt5);
            this->panel1->Controls->Add(this->bt1);
            this->panel1->Controls->Add(this->bt8);
            this->panel1->Controls->Add(this->bt4);
            this->panel1->Controls->Add(this->bt7);
            this->panel1->Controls->Add(this->bt_point);
            this->panel1->Controls->Add(this->bt6);
            this->panel1->Controls->Add(this->bt_plus);
            this->panel1->Controls->Add(this->bt3_);
            this->panel1->Controls->Add(this->bt9);
            this->panel1->Location = System::Drawing::Point(1473, 523);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(447, 539);
            this->panel1->TabIndex = 179;
            // 
            // bt2_
            // 
            this->bt2_->BackColor = System::Drawing::Color::Cornsilk;
            this->bt2_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt2_->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt2_->ForeColor = System::Drawing::Color::Sienna;
            this->bt2_->Location = System::Drawing::Point(124, 325);
            this->bt2_->Name = L"bt2_";
            this->bt2_->Size = System::Drawing::Size(87, 87);
            this->bt2_->TabIndex = 83;
            this->bt2_->Text = L"2";
            this->bt2_->UseVisualStyleBackColor = false;
            this->bt2_->Click += gcnew System::EventHandler(this, &MyForm::bt2__Click);
            // 
            // bt0
            // 
            this->bt0->BackColor = System::Drawing::Color::Cornsilk;
            this->bt0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt0->ForeColor = System::Drawing::Color::Sienna;
            this->bt0->Location = System::Drawing::Point(5, 452);
            this->bt0->Name = L"bt0";
            this->bt0->Size = System::Drawing::Size(206, 80);
            this->bt0->TabIndex = 85;
            this->bt0->Text = L"0";
            this->bt0->UseVisualStyleBackColor = false;
            this->bt0->Click += gcnew System::EventHandler(this, &MyForm::bt0_Click);
            // 
            // bt_slash
            // 
            this->bt_slash->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_slash->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt_slash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_slash->ForeColor = System::Drawing::Color::Sienna;
            this->bt_slash->Location = System::Drawing::Point(5, 1);
            this->bt_slash->Name = L"bt_slash";
            this->bt_slash->Size = System::Drawing::Size(441, 65);
            this->bt_slash->TabIndex = 71;
            this->bt_slash->Text = L"<--- BACKSPACE";
            this->bt_slash->UseVisualStyleBackColor = false;
            this->bt_slash->Click += gcnew System::EventHandler(this, &MyForm::bt_slash_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Cornsilk;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->ForeColor = System::Drawing::Color::Sienna;
            this->button2->Location = System::Drawing::Point(357, 325);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(87, 207);
            this->button2->TabIndex = 75;
            this->button2->Text = L"OK";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // bt5
            // 
            this->bt5->BackColor = System::Drawing::Color::Cornsilk;
            this->bt5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt5->ForeColor = System::Drawing::Color::Sienna;
            this->bt5->Location = System::Drawing::Point(124, 204);
            this->bt5->Name = L"bt5";
            this->bt5->Size = System::Drawing::Size(87, 87);
            this->bt5->TabIndex = 80;
            this->bt5->Text = L"5";
            this->bt5->UseVisualStyleBackColor = false;
            this->bt5->Click += gcnew System::EventHandler(this, &MyForm::bt5_Click);
            // 
            // bt1
            // 
            this->bt1->BackColor = System::Drawing::Color::Cornsilk;
            this->bt1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt1->ForeColor = System::Drawing::Color::Sienna;
            this->bt1->Location = System::Drawing::Point(3, 325);
            this->bt1->Name = L"bt1";
            this->bt1->Size = System::Drawing::Size(87, 87);
            this->bt1->TabIndex = 82;
            this->bt1->TabStop = false;
            this->bt1->Text = L"1";
            this->bt1->UseVisualStyleBackColor = false;
            this->bt1->Click += gcnew System::EventHandler(this, &MyForm::bt1_Click);
            // 
            // bt8
            // 
            this->bt8->BackColor = System::Drawing::Color::Cornsilk;
            this->bt8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt8->ForeColor = System::Drawing::Color::Sienna;
            this->bt8->Location = System::Drawing::Point(124, 87);
            this->bt8->Name = L"bt8";
            this->bt8->Size = System::Drawing::Size(87, 87);
            this->bt8->TabIndex = 77;
            this->bt8->Text = L"8";
            this->bt8->UseVisualStyleBackColor = false;
            this->bt8->Click += gcnew System::EventHandler(this, &MyForm::bt8_Click);
            // 
            // bt4
            // 
            this->bt4->BackColor = System::Drawing::Color::Cornsilk;
            this->bt4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt4->ForeColor = System::Drawing::Color::Sienna;
            this->bt4->Location = System::Drawing::Point(5, 204);
            this->bt4->Name = L"bt4";
            this->bt4->Size = System::Drawing::Size(87, 87);
            this->bt4->TabIndex = 79;
            this->bt4->Text = L"4";
            this->bt4->UseVisualStyleBackColor = false;
            this->bt4->Click += gcnew System::EventHandler(this, &MyForm::bt4_Click);
            // 
            // bt7
            // 
            this->bt7->BackColor = System::Drawing::Color::Cornsilk;
            this->bt7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt7->ForeColor = System::Drawing::Color::Sienna;
            this->bt7->Location = System::Drawing::Point(5, 87);
            this->bt7->Name = L"bt7";
            this->bt7->Size = System::Drawing::Size(87, 87);
            this->bt7->TabIndex = 76;
            this->bt7->Text = L"7";
            this->bt7->UseVisualStyleBackColor = false;
            this->bt7->Click += gcnew System::EventHandler(this, &MyForm::bt7_Click);
            // 
            // bt_point
            // 
            this->bt_point->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_point->ForeColor = System::Drawing::Color::Sienna;
            this->bt_point->Location = System::Drawing::Point(237, 452);
            this->bt_point->Name = L"bt_point";
            this->bt_point->Size = System::Drawing::Size(87, 80);
            this->bt_point->TabIndex = 86;
            this->bt_point->Text = L".";
            this->bt_point->UseVisualStyleBackColor = false;
            this->bt_point->Click += gcnew System::EventHandler(this, &MyForm::bt_point_Click);
            // 
            // bt6
            // 
            this->bt6->BackColor = System::Drawing::Color::Cornsilk;
            this->bt6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt6->ForeColor = System::Drawing::Color::Sienna;
            this->bt6->Location = System::Drawing::Point(237, 204);
            this->bt6->Name = L"bt6";
            this->bt6->Size = System::Drawing::Size(87, 87);
            this->bt6->TabIndex = 81;
            this->bt6->Text = L"6";
            this->bt6->UseVisualStyleBackColor = false;
            this->bt6->Click += gcnew System::EventHandler(this, &MyForm::bt6_Click);
            // 
            // bt_plus
            // 
            this->bt_plus->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_plus->ForeColor = System::Drawing::Color::Sienna;
            this->bt_plus->Location = System::Drawing::Point(357, 87);
            this->bt_plus->Name = L"bt_plus";
            this->bt_plus->Size = System::Drawing::Size(87, 204);
            this->bt_plus->TabIndex = 74;
            this->bt_plus->Text = L"+";
            this->bt_plus->UseVisualStyleBackColor = false;
            this->bt_plus->Click += gcnew System::EventHandler(this, &MyForm::bt_plus_Click);
            // 
            // bt3_
            // 
            this->bt3_->BackColor = System::Drawing::Color::Cornsilk;
            this->bt3_->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt3_->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt3_->ForeColor = System::Drawing::Color::Sienna;
            this->bt3_->Location = System::Drawing::Point(237, 325);
            this->bt3_->Name = L"bt3_";
            this->bt3_->Size = System::Drawing::Size(87, 87);
            this->bt3_->TabIndex = 84;
            this->bt3_->Text = L"3";
            this->bt3_->UseVisualStyleBackColor = false;
            this->bt3_->Click += gcnew System::EventHandler(this, &MyForm::bt3__Click);
            // 
            // bt9
            // 
            this->bt9->BackColor = System::Drawing::Color::Cornsilk;
            this->bt9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->bt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt9->ForeColor = System::Drawing::Color::Sienna;
            this->bt9->Location = System::Drawing::Point(237, 87);
            this->bt9->Name = L"bt9";
            this->bt9->Size = System::Drawing::Size(87, 87);
            this->bt9->TabIndex = 78;
            this->bt9->Text = L"9";
            this->bt9->UseVisualStyleBackColor = false;
            this->bt9->Click += gcnew System::EventHandler(this, &MyForm::bt9_Click);
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::SystemColors::Window;
            this->textBox3->Location = System::Drawing::Point(260, 559);
            this->textBox3->Multiline = true;
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->Size = System::Drawing::Size(299, 134);
            this->textBox3->TabIndex = 201;
            // 
            // textBox5
            // 
            this->textBox5->BackColor = System::Drawing::SystemColors::Window;
            this->textBox5->Location = System::Drawing::Point(559, 559);
            this->textBox5->Multiline = true;
            this->textBox5->Name = L"textBox5";
            this->textBox5->ReadOnly = true;
            this->textBox5->Size = System::Drawing::Size(294, 134);
            this->textBox5->TabIndex = 202;
            // 
            // textBox12
            // 
            this->textBox12->BackColor = System::Drawing::SystemColors::Window;
            this->textBox12->Location = System::Drawing::Point(-271, 108);
            this->textBox12->Multiline = true;
            this->textBox12->Name = L"textBox12";
            this->textBox12->ReadOnly = true;
            this->textBox12->Size = System::Drawing::Size(266, 81);
            this->textBox12->TabIndex = 208;
            // 
            // textBox14
            // 
            this->textBox14->BackColor = System::Drawing::SystemColors::Window;
            this->textBox14->Location = System::Drawing::Point(-226, 195);
            this->textBox14->Multiline = true;
            this->textBox14->Name = L"textBox14";
            this->textBox14->ReadOnly = true;
            this->textBox14->Size = System::Drawing::Size(221, 81);
            this->textBox14->TabIndex = 210;
            // 
            // btShutDown
            // 
            this->btShutDown->BackColor = System::Drawing::Color::Cornsilk;
            this->btShutDown->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->btShutDown->Font = (gcnew System::Drawing::Font(L"Arial", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btShutDown->ForeColor = System::Drawing::Color::Sienna;
            this->btShutDown->Location = System::Drawing::Point(1458, 94);
            this->btShutDown->Name = L"btShutDown";
            this->btShutDown->Size = System::Drawing::Size(479, 59);
            this->btShutDown->TabIndex = 220;
            this->btShutDown->Text = L"���������";
            this->btShutDown->UseVisualStyleBackColor = false;
            this->btShutDown->Click += gcnew System::EventHandler(this, &MyForm::btSutDown_Click);
            // 
            // textBox7
            // 
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox7->ForeColor = System::Drawing::Color::Sienna;
            this->textBox7->Location = System::Drawing::Point(360, 7);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(82, 81);
            this->textBox7->TabIndex = 162;
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxAll_TextChanged);
            this->textBox7->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->ForeColor = System::Drawing::Color::SeaGreen;
            this->label15->Location = System::Drawing::Point(185, 18);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(180, 53);
            this->label15->TabIndex = 163;
            this->label15->Text = L"�����:";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->label1->Location = System::Drawing::Point(1807, 1062);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(110, 13);
            this->label1->TabIndex = 154;
            this->label1->Text = L"by \"������� �����\"";
            // 
            // tMachine
            // 
            this->tMachine->BackColor = System::Drawing::SystemColors::Window;
            this->tMachine->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tMachine->ForeColor = System::Drawing::Color::Sienna;
            this->tMachine->Location = System::Drawing::Point(1116, 7);
            this->tMachine->Name = L"tMachine";
            this->tMachine->Size = System::Drawing::Size(102, 81);
            this->tMachine->TabIndex = 148;
            this->tMachine->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->tMachine->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxAll_TextChanged);
            this->tMachine->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->tMachine->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // tControler
            // 
            this->tControler->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tControler->ForeColor = System::Drawing::Color::Sienna;
            this->tControler->Location = System::Drawing::Point(730, 7);
            this->tControler->Name = L"tControler";
            this->tControler->Size = System::Drawing::Size(124, 81);
            this->tControler->TabIndex = 149;
            this->tControler->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->tControler->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxAll_TextChanged);
            this->tControler->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->tControler->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->ForeColor = System::Drawing::Color::Sienna;
            this->label19->Location = System::Drawing::Point(602, 564);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(205, 53);
            this->label19->TabIndex = 169;
            this->label19->Text = L"������:";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->ForeColor = System::Drawing::Color::Sienna;
            this->label20->Location = System::Drawing::Point(326, 564);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(181, 53);
            this->label20->TabIndex = 172;
            this->label20->Text = L"���-��:";
            // 
            // btWriteData
            // 
            this->btWriteData->Font = (gcnew System::Drawing::Font(L"Arial", 23, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->btWriteData->ForeColor = System::Drawing::Color::SeaGreen;
            this->btWriteData->Location = System::Drawing::Point(1931, 404);
            this->btWriteData->Name = L"btWriteData";
            this->btWriteData->Size = System::Drawing::Size(499, 55);
            this->btWriteData->TabIndex = 144;
            this->btWriteData->Text = L"�������� �����";
            this->btWriteData->UseVisualStyleBackColor = true;
            this->btWriteData->Click += gcnew System::EventHandler(this, &MyForm::btWriteData_Click);
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->ForeColor = System::Drawing::Color::Sienna;
            this->label13->Location = System::Drawing::Point(1284, 1006);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(135, 53);
            this->label13->TabIndex = 161;
            this->label13->Text = L"-------";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->ForeColor = System::Drawing::Color::Sienna;
            this->label14->Location = System::Drawing::Point(721, 1006);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(576, 53);
            this->label14->TabIndex = 160;
            this->label14->Text = L"����� ������ �� �����:";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->ForeColor = System::Drawing::Color::Sienna;
            this->label12->Location = System::Drawing::Point(569, 1006);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(135, 53);
            this->label12->TabIndex = 159;
            this->label12->Text = L"-------";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->ForeColor = System::Drawing::Color::Sienna;
            this->label11->Location = System::Drawing::Point(-7, 1006);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(591, 53);
            this->label11->TabIndex = 158;
            this->label11->Text = L"����� ������ �� ������:";
            // 
            // lquantityUV
            // 
            this->lquantityUV->AutoSize = true;
            this->lquantityUV->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lquantityUV->ForeColor = System::Drawing::Color::Black;
            this->lquantityUV->Location = System::Drawing::Point(374, 617);
            this->lquantityUV->Name = L"lquantityUV";
            this->lquantityUV->Size = System::Drawing::Size(68, 75);
            this->lquantityUV->TabIndex = 170;
            this->lquantityUV->Text = L"0";
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 10));
            this->label21->ForeColor = System::Drawing::Color::Sienna;
            this->label21->Location = System::Drawing::Point(1740, 76);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(66, 16);
            this->label21->TabIndex = 174;
            this->label21->Text = L"Printer ->";
            // 
            // cboxPrinter
            // 
            this->cboxPrinter->FormattingEnabled = true;
            this->cboxPrinter->Location = System::Drawing::Point(1812, 71);
            this->cboxPrinter->Name = L"cboxPrinter";
            this->cboxPrinter->Size = System::Drawing::Size(105, 21);
            this->cboxPrinter->TabIndex = 173;
            // 
            // lmetersUV
            // 
            this->lmetersUV->AutoSize = true;
            this->lmetersUV->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->lmetersUV->ForeColor = System::Drawing::Color::Black;
            this->lmetersUV->Location = System::Drawing::Point(646, 613);
            this->lmetersUV->Name = L"lmetersUV";
            this->lmetersUV->Size = System::Drawing::Size(122, 75);
            this->lmetersUV->TabIndex = 171;
            this->lmetersUV->Text = L"0.0";
            // 
            // comboUV
            // 
            this->comboUV->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboUV->FormattingEnabled = true;
            this->comboUV->Location = System::Drawing::Point(42, 584);
            this->comboUV->Name = L"comboUV";
            this->comboUV->Size = System::Drawing::Size(182, 83);
            this->comboUV->TabIndex = 168;
            this->comboUV->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->comboUV->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            this->comboUV->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &MyForm::TextBox_PreviewKeyDown);
            // 
            // textBox10
            // 
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Arial", 59.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox10->Location = System::Drawing::Point(902, 379);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(144, 98);
            this->textBox10->TabIndex = 167;
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxAll_TextChanged);
            this->textBox10->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->ForeColor = System::Drawing::Color::SeaGreen;
            this->label18->Location = System::Drawing::Point(1052, 405);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(335, 60);
            this->label18->TabIndex = 166;
            this->label18->Text = L"<- ��� �����";
            // 
            // textBox4
            // 
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 59.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox4->Location = System::Drawing::Point(902, 245);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(109, 98);
            this->textBox4->TabIndex = 157;
            this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxAll_TextChanged);
            this->textBox4->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // textBox33
            // 
            this->textBox33->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox33->Location = System::Drawing::Point(1576, 2);
            this->textBox33->Name = L"textBox33";
            this->textBox33->Size = System::Drawing::Size(132, 26);
            this->textBox33->TabIndex = 156;
            this->textBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox33->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            // 
            // textBox1
            // 
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 59.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->Location = System::Drawing::Point(260, 379);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(593, 98);
            this->textBox1->TabIndex = 155;
            this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
            this->textBox1->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 10));
            this->label22->ForeColor = System::Drawing::Color::Sienna;
            this->label22->Location = System::Drawing::Point(1714, 53);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(92, 16);
            this->label22->TabIndex = 175;
            this->label22->Text = L"IP-address ->";
            // 
            // textBox8
            // 
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox8->ForeColor = System::Drawing::Color::DodgerBlue;
            this->textBox8->Location = System::Drawing::Point(2412, 621);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(65, 85);
            this->textBox8->TabIndex = 165;
            this->textBox8->Text = L"M";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->ForeColor = System::Drawing::Color::SeaGreen;
            this->label6->Location = System::Drawing::Point(468, 18);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(267, 53);
            this->label6->TabIndex = 151;
            this->label6->Text = L"��������:";
            // 
            // label5
            // 
            this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 35.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->ForeColor = System::Drawing::Color::SeaGreen;
            this->label5->Location = System::Drawing::Point(902, 18);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(223, 51);
            this->label5->TabIndex = 150;
            this->label5->Text = L"������:";
            // 
            // comboS
            // 
            this->comboS->BackColor = System::Drawing::Color::White;
            this->comboS->Font = (gcnew System::Drawing::Font(L"Arial", 59.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->comboS->ForeColor = System::Drawing::Color::Black;
            this->comboS->FormattingEnabled = true;
            this->comboS->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"1. ������ ����", L" 2. ������ ����", L"     3. ������ ",
                    L"     4. �������", L"  5. ���������"
            });
            this->comboS->Location = System::Drawing::Point(260, 117);
            this->comboS->Name = L"comboS";
            this->comboS->Size = System::Drawing::Size(593, 96);
            this->comboS->TabIndex = 147;
            this->comboS->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->comboS->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->ForeColor = System::Drawing::Color::SeaGreen;
            this->label4->Location = System::Drawing::Point(39, 129);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(194, 72);
            this->label4->TabIndex = 146;
            this->label4->Text = L"����:";
            // 
            // textBox2
            // 
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 59.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->Location = System::Drawing::Point(260, 245);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(593, 98);
            this->textBox2->TabIndex = 153;
            this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
            this->textBox2->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->ForeColor = System::Drawing::Color::SeaGreen;
            this->label3->Location = System::Drawing::Point(21, 395);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(212, 72);
            this->label3->TabIndex = 143;
            this->label3->Text = L"�����:";
            this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
            // 
            // btnSend
            // 
            this->btnSend->Location = System::Drawing::Point(1469, 34);
            this->btnSend->Name = L"btnSend";
            this->btnSend->Size = System::Drawing::Size(101, 23);
            this->btnSend->TabIndex = 142;
            this->btnSend->Text = L"�� ��������";
            this->btnSend->UseVisualStyleBackColor = true;
            this->btnSend->Click += gcnew System::EventHandler(this, &MyForm::btnSend_Click);
            // 
            // tboxTransmitData
            // 
            this->tboxTransmitData->Location = System::Drawing::Point(1812, 49);
            this->tboxTransmitData->Name = L"tboxTransmitData";
            this->tboxTransmitData->Size = System::Drawing::Size(105, 20);
            this->tboxTransmitData->TabIndex = 141;
            this->tboxTransmitData->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            // 
            // btnRefresh
            // 
            this->btnRefresh->ForeColor = System::Drawing::Color::SeaGreen;
            this->btnRefresh->Location = System::Drawing::Point(1749, 24);
            this->btnRefresh->Name = L"btnRefresh";
            this->btnRefresh->Size = System::Drawing::Size(57, 23);
            this->btnRefresh->TabIndex = 139;
            this->btnRefresh->Text = L"Refresh";
            this->btnRefresh->UseVisualStyleBackColor = true;
            this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
            // 
            // btnConnect
            // 
            this->btnConnect->ForeColor = System::Drawing::Color::SeaGreen;
            this->btnConnect->Location = System::Drawing::Point(1749, 2);
            this->btnConnect->Name = L"btnConnect";
            this->btnConnect->Size = System::Drawing::Size(57, 23);
            this->btnConnect->TabIndex = 138;
            this->btnConnect->Text = L"Connect";
            this->btnConnect->UseVisualStyleBackColor = true;
            this->btnConnect->Click += gcnew System::EventHandler(this, &MyForm::btnConnect_Click);
            // 
            // cboxBaud
            // 
            this->cboxBaud->FormattingEnabled = true;
            this->cboxBaud->Location = System::Drawing::Point(1812, 24);
            this->cboxBaud->Name = L"cboxBaud";
            this->cboxBaud->Size = System::Drawing::Size(105, 21);
            this->cboxBaud->TabIndex = 137;
            // 
            // cboxCom
            // 
            this->cboxCom->FormattingEnabled = true;
            this->cboxCom->Location = System::Drawing::Point(1812, 2);
            this->cboxCom->Name = L"cboxCom";
            this->cboxCom->Size = System::Drawing::Size(105, 21);
            this->cboxCom->TabIndex = 136;
            this->cboxCom->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // tboxReceiveOutput
            // 
            this->tboxReceiveOutput->Font = (gcnew System::Drawing::Font(L"Arial", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->tboxReceiveOutput->Location = System::Drawing::Point(1931, 307);
            this->tboxReceiveOutput->Name = L"tboxReceiveOutput";
            this->tboxReceiveOutput->Size = System::Drawing::Size(487, 85);
            this->tboxReceiveOutput->TabIndex = 140;
            this->tboxReceiveOutput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->tboxReceiveOutput->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->tboxReceiveOutput->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::Window;
            this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->ForeColor = System::Drawing::Color::SeaGreen;
            this->label2->Location = System::Drawing::Point(9, 257);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(224, 72);
            this->label2->TabIndex = 145;
            this->label2->Text = L"�����:";
            this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
            // 
            // textBox9
            // 
            this->textBox9->BackColor = System::Drawing::SystemColors::Window;
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial", 149.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox9->ForeColor = System::Drawing::Color::Sienna;
            this->textBox9->Location = System::Drawing::Point(260, 718);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(593, 229);
            this->textBox9->TabIndex = 164;
            this->textBox9->Text = L"0.0";
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->textBox9->GotFocus += gcnew System::EventHandler(this, &MyForm::tb_GotFocus);
            this->textBox9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 39.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->ForeColor = System::Drawing::Color::SeaGreen;
            this->label7->Location = System::Drawing::Point(1021, 266);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(209, 60);
            this->label7->TabIndex = 152;
            this->label7->Text = L"������";
            // 
            // pictureBox10
            // 
            this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
            this->pictureBox10->Location = System::Drawing::Point(0, 0);
            this->pictureBox10->Name = L"pictureBox10";
            this->pictureBox10->Size = System::Drawing::Size(104, 104);
            this->pictureBox10->TabIndex = 224;
            this->pictureBox10->TabStop = false;
            // 
            // pictureBox11
            // 
            this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
            this->pictureBox11->Location = System::Drawing::Point(1830, 432);
            this->pictureBox11->Name = L"pictureBox11";
            this->pictureBox11->Size = System::Drawing::Size(69, 70);
            this->pictureBox11->TabIndex = 225;
            this->pictureBox11->TabStop = false;
            // 
            // pictureBox13
            // 
            this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
            this->pictureBox13->Location = System::Drawing::Point(1830, 432);
            this->pictureBox13->Name = L"pictureBox13";
            this->pictureBox13->Size = System::Drawing::Size(69, 70);
            this->pictureBox13->TabIndex = 226;
            this->pictureBox13->TabStop = false;
            // 
            // pictureBox7
            // 
            this->pictureBox7->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox7->Location = System::Drawing::Point(-8, 978);
            this->pictureBox7->Name = L"pictureBox7";
            this->pictureBox7->Size = System::Drawing::Size(1475, 10);
            this->pictureBox7->TabIndex = 235;
            this->pictureBox7->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox2->Location = System::Drawing::Point(-8, 94);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(1475, 10);
            this->pictureBox2->TabIndex = 234;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox1->Location = System::Drawing::Point(249, 717);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(10, 235);
            this->pictureBox1->TabIndex = 233;
            this->pictureBox1->TabStop = false;
            // 
            // pictureBox9
            // 
            this->pictureBox9->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox9->Location = System::Drawing::Point(855, 717);
            this->pictureBox9->Name = L"pictureBox9";
            this->pictureBox9->Size = System::Drawing::Size(10, 235);
            this->pictureBox9->TabIndex = 232;
            this->pictureBox9->TabStop = false;
            // 
            // pictureBox8
            // 
            this->pictureBox8->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox8->Location = System::Drawing::Point(253, 942);
            this->pictureBox8->Name = L"pictureBox8";
            this->pictureBox8->Size = System::Drawing::Size(612, 10);
            this->pictureBox8->TabIndex = 231;
            this->pictureBox8->TabStop = false;
            // 
            // pictureBox6
            // 
            this->pictureBox6->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox6->Location = System::Drawing::Point(249, 710);
            this->pictureBox6->Name = L"pictureBox6";
            this->pictureBox6->Size = System::Drawing::Size(616, 10);
            this->pictureBox6->TabIndex = 230;
            this->pictureBox6->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox3->Location = System::Drawing::Point(1457, -21);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(10, 1143);
            this->pictureBox3->TabIndex = 227;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox5
            // 
            this->pictureBox5->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox5->Location = System::Drawing::Point(1457, 94);
            this->pictureBox5->Name = L"pictureBox5";
            this->pictureBox5->Size = System::Drawing::Size(466, 10);
            this->pictureBox5->TabIndex = 229;
            this->pictureBox5->TabStop = false;
            // 
            // pictureBox4
            // 
            this->pictureBox4->BackColor = System::Drawing::Color::SeaGreen;
            this->pictureBox4->Location = System::Drawing::Point(1458, 508);
            this->pictureBox4->Name = L"pictureBox4";
            this->pictureBox4->Size = System::Drawing::Size(465, 10);
            this->pictureBox4->TabIndex = 228;
            this->pictureBox4->TabStop = false;
            // 
            // l_meters_trim
            // 
            this->l_meters_trim->AutoSize = true;
            this->l_meters_trim->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->l_meters_trim->ForeColor = System::Drawing::Color::Black;
            this->l_meters_trim->Location = System::Drawing::Point(1119, 784);
            this->l_meters_trim->Name = L"l_meters_trim";
            this->l_meters_trim->Size = System::Drawing::Size(122, 75);
            this->l_meters_trim->TabIndex = 236;
            this->l_meters_trim->Text = L"0.0";
            // 
            // l_quantity_trim
            // 
            this->l_quantity_trim->AutoSize = true;
            this->l_quantity_trim->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->l_quantity_trim->ForeColor = System::Drawing::Color::Black;
            this->l_quantity_trim->Location = System::Drawing::Point(1150, 694);
            this->l_quantity_trim->Name = L"l_quantity_trim";
            this->l_quantity_trim->Size = System::Drawing::Size(68, 75);
            this->l_quantity_trim->TabIndex = 237;
            this->l_quantity_trim->Text = L"0";
            this->l_quantity_trim->Visible = false;
            // 
            // bt_trim_plus
            // 
            this->bt_trim_plus->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_trim_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_trim_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_trim_plus->ForeColor = System::Drawing::Color::Sienna;
            this->bt_trim_plus->Location = System::Drawing::Point(1293, 782);
            this->bt_trim_plus->Name = L"bt_trim_plus";
            this->bt_trim_plus->Size = System::Drawing::Size(84, 87);
            this->bt_trim_plus->TabIndex = 238;
            this->bt_trim_plus->Text = L"+";
            this->bt_trim_plus->UseVisualStyleBackColor = false;
            this->bt_trim_plus->Click += gcnew System::EventHandler(this, &MyForm::bt_trim_plus_Click);
            // 
            // bt_trim_minus
            // 
            this->bt_trim_minus->BackColor = System::Drawing::Color::Cornsilk;
            this->bt_trim_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->bt_trim_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->bt_trim_minus->ForeColor = System::Drawing::Color::Sienna;
            this->bt_trim_minus->Location = System::Drawing::Point(988, 784);
            this->bt_trim_minus->Name = L"bt_trim_minus";
            this->bt_trim_minus->Size = System::Drawing::Size(83, 83);
            this->bt_trim_minus->TabIndex = 239;
            this->bt_trim_minus->Text = L"-";
            this->bt_trim_minus->UseVisualStyleBackColor = false;
            this->bt_trim_minus->Click += gcnew System::EventHandler(this, &MyForm::bt_trim_minus_Click);
            // 
            // checkBox1
            // 
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(1473, 0);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(64, 30);
            this->checkBox1->TabIndex = 240;
            this->checkBox1->Text = L"������ \r\n�����";
            this->checkBox1->UseVisualStyleBackColor = true;
            this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
            this->checkBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TextBox_KeyPress);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::Window;
            this->ClientSize = System::Drawing::Size(1918, 1061);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->bt_trim_minus);
            this->Controls->Add(this->bt_trim_plus);
            this->Controls->Add(this->l_meters_trim);
            this->Controls->Add(this->pictureBox7);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->pictureBox9);
            this->Controls->Add(this->pictureBox8);
            this->Controls->Add(this->pictureBox6);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox5);
            this->Controls->Add(this->pictureBox4);
            this->Controls->Add(this->pictureBox13);
            this->Controls->Add(this->pictureBox11);
            this->Controls->Add(this->bt_trim);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->bt_print);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->tInfo2);
            this->Controls->Add(this->bto_minus);
            this->Controls->Add(this->bto_plus);
            this->Controls->Add(this->btuv_0);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->textBox11);
            this->Controls->Add(this->bts_5);
            this->Controls->Add(this->bts_4);
            this->Controls->Add(this->bts_2);
            this->Controls->Add(this->bts_1);
            this->Controls->Add(this->bts_3);
            this->Controls->Add(this->btuv_4);
            this->Controls->Add(this->btuv_2);
            this->Controls->Add(this->btuv_1);
            this->Controls->Add(this->btuv_3);
            this->Controls->Add(this->bt_uv_minus);
            this->Controls->Add(this->bt_uv_plus);
            this->Controls->Add(this->tInfo);
            this->Controls->Add(this->li8);
            this->Controls->Add(this->li7);
            this->Controls->Add(this->li5);
            this->Controls->Add(this->li6);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->btShutDown);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->label15);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->tMachine);
            this->Controls->Add(this->tControler);
            this->Controls->Add(this->label19);
            this->Controls->Add(this->label20);
            this->Controls->Add(this->btWriteData);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->lquantityUV);
            this->Controls->Add(this->label21);
            this->Controls->Add(this->cboxPrinter);
            this->Controls->Add(this->lmetersUV);
            this->Controls->Add(this->comboUV);
            this->Controls->Add(this->textBox10);
            this->Controls->Add(this->label18);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox33);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label22);
            this->Controls->Add(this->textBox8);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->comboS);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->btnSend);
            this->Controls->Add(this->tboxTransmitData);
            this->Controls->Add(this->btnRefresh);
            this->Controls->Add(this->btnConnect);
            this->Controls->Add(this->cboxBaud);
            this->Controls->Add(this->cboxCom);
            this->Controls->Add(this->tboxReceiveOutput);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox9);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBox12);
            this->Controls->Add(this->textBox13);
            this->Controls->Add(this->textBox14);
            this->Controls->Add(this->pictureBox10);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->l_quantity_trim);
            this->Controls->Add(this->li1);
            this->Controls->Add(this->li2);
            this->Controls->Add(this->li3);
            this->Controls->Add(this->li4);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"MyForm";
            this->Text = L"Textile Disassembly Application";
            this->Load += gcnew System::EventHandler(this, &MyForm::MainForm_Load);
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma region Values
#pragma endregion
#pragma region Encrypt
        std::string encryptDecrypt(const std::string& data, int encryption_key) { //
            std::string result = data;
            for (auto& character : result) {
                character = character ^ encryption_key;
            }
            return result;
        }
        std::string str_f(System::String^ data) {
            return msclr::interop::marshal_as<std::string>(data);
        }
        /*std::string str_f2(std::string data) {
            String l = gcnew String(data.c_str());
            return l;
        }*/
        std::string decryptEncrypt(const std::string& encrypted_data, int encryption_key) {
            std::string result = encrypted_data;
            for (auto& character : result) {
                character = character ^ encryption_key;
            }
            return result;
        }
#pragma endregion
#pragma endregion
        ref class PortComparer : public System::Collections::IComparer
        {
        public:
            virtual int Compare(Object^ x, Object^ y)
            {
                String^ port1 = (String^)x;
                String^ port2 = (String^)y;

                int num1 = Int32::Parse(port1->Substring(3));
                int num2 = Int32::Parse(port2->Substring(3));

                return num1.CompareTo(num2);
            }
        };
#pragma region LocalHelpers
    private: void UpdateComPortList() {
        array<System::String^>^ Port = SerialPort::GetPortNames();
        Array::Sort(Port, gcnew PortComparer());
        for (int i = 0; i < Port->Length; i++)
        {
            cboxCom->Items->Add(Port[i]);
        }
        cboxCom->SelectedIndex = cboxCom->Items->Count - 1;
        btnConnect->PerformClick();
    }
#pragma endregion	
private: int countImp = 0;
#pragma region DelegatesHelpers
    private: delegate void CB_UPDATE_RX_DATA(String^ s, String^ s2); //array<Byte> ^pData
    private: void UpdateRxData(String^ s, String^ s2) 
    {
        textBox9->Text = s;
        textBox9->ScrollToCaret();

        textBox33->Text = s2;

    }
#pragma endregion
#pragma region EventHandlers
    private: System::Void SerialOnReceivedHandler(System::Object^ sender, SerialDataReceivedEventArgs^ e)
    {
        //bool w = MyData::weightR();
        //bool total = MyData::totalR();
        if (MyData::weightR() == true)
        {
            try {
                MyData::total_(MyData::totalR() + int::Parse(Serial->ReadLine()));
                int total = MyData::totalR();
                double meters = total * MyData::scalingFactorR() - MyData::metersUVR();


                CB_UPDATE_RX_DATA^ cb = gcnew CB_UPDATE_RX_DATA(this, &MyForm::UpdateRxData);
                Control::Invoke(cb, meters.ToString("F1"), total.ToString());
            }
            catch (FormatException^) {}

        }
        else {
            try {
                MyData::total_weight_(MyData::total_weightR() + Convert::ToInt32(Serial->ReadLine()));
                double meters = MyData::total_weightR() * MyData::scalingFactorR();


                recordWeight->GetValue(meters.ToString("F1"));
            }
            catch (FormatException^) {}
        }

        //if (weight == true)
        //{
        //    try {
        //        countImp = int::Parse(Serial->ReadLine());
        //        totalImpulses = countImp * scalingFactor - metersUV;

        //        //modifiedMeters = totalImpulses - (totalImpulses / 100.0 * deviationPercent);
        //        CB_UPDATE_RX_DATA^ cb = gcnew CB_UPDATE_RX_DATA(this, &MyForm::UpdateRxData);

        //        Control::Invoke(cb, totalImpulses.ToString("F1"), countImp.ToString());
        //    }
        //    catch (FormatException^) {}

        //}
        //else {
        //    try {
        //        countImp = int::Parse(Serial->ReadLine());
        //        totalImpulses = countImp * scalingFactor;
        //        //modifiedMeters = totalImpulses - (totalImpulses / 100.0 * deviationPercent);
        //        recordWeight->GetValue(totalImpulses.ToString("F1"));
        //    }
        //    catch (FormatException^) {}
        //}

    }
#pragma endregion
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
    tboxReceiveOutput->Text = "0.0";
    pictureBox13->Visible = true;
    pictureBox11->Visible = false;
    tboxTransmitData->Text = "192.168.21.230";
    int baudrate[] = { 9600, 19200, 38400, 115200, 230400, 460800, 921600, 3860000 };
    cboxBaud->Items->Clear();
    comboUV->Items->Clear();
    for (int i = 0; i < sizeof(baudrate) / sizeof(int); i++)
    {
        cboxBaud->Items->Add(baudrate[i]);
    }
    array<String^>^ uv = { " 10��", " 20��", " 40��", " 70��" };
    for (int i = 0; i < uv->Length; i++)
    {
        comboUV->Items->Add(uv[i]);
    }
    array<String^>^ printer = { "?", "1", "2", "3", "4", "5 ", "6", "7", "8" };
    for (int i = 0; i < printer->Length; i++)
    {
        cboxPrinter->Items->Add(printer[i]);
    }

    cboxBaud->SelectedIndex = 0;
    comboS->SelectedIndex = 0;
    textBox2->Focus();
    textBox4->Text = "1";
    cboxPrinter->SelectedIndex = 0;
    UpdateComPortList();
    try
    {
        readFile();
    }
    catch (const std::exception&)
    {

    }
    
    try
    {
        readFile_roll_and_trim(); 
        //first_start = true;
    }
    catch (const std::exception&)
    {
        //first_start = true;
    }
    bt_trim_minus->Visible = false;
    bt_trim_plus->Visible = false;
    MyData::first_start_(true);
}
    private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
        UpdateComPortList();
    }
    private: System::Void btnConnect_Click(System::Object^ sender, System::EventArgs^ e) {
        if ("Disconnect" == btnConnect->Text)
        {
            if (true == Serial->IsOpen)
            {
                Serial->Close();
            }
            btnConnect->Text = "Connect";
            return;
        }
        else {
            try
            {

                Serial->Parity = Parity::None;
                Serial->DataBits = 8;
                Serial->ReceivedBytesThreshold = 1;
                Serial->StopBits = StopBits::One;
                Serial->Handshake = Handshake::None;
                Serial->WriteTimeout = 500;
                try
                {
                    Serial->PortName = cboxCom->Text;
                }
                catch (...)
                {
                    MessageBox::Show("No COM Port was selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                try
                {
                    Serial->BaudRate = int::Parse(cboxBaud->Text);
                }
                catch (...)
                {
                    MessageBox::Show("No Baudrate was selected.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    return;
                }
                if (false == Serial->IsOpen)
                {
                    try
                    {
                        Serial->Open();
                    }
                    catch (...)
                    {
                        MessageBox::Show("The " + Serial->PortName + " is in use or not available.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                }
                if (true == Serial->IsOpen)
                {
                    btnConnect->Text = "Disconnect";
                    Serial->DataReceived += gcnew SerialDataReceivedEventHandler(this, &MyForm::SerialOnReceivedHandler);
                }
            }
            catch (const std::exception&)
            {
                MessageBox::Show("�� �����");
            }
        }

    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        //��������

        metersClass = gcnew MI::MetersInfo();
        metersClass->ShowDialog();

        int result = metersClass->GetResultQ();

        if (result == 1) {
            
            try {
                /*MyData::total_(1);
                textBox9->Text = "0,0";*/
            }
            catch (...) {}
            delete metersClass;
        }
        else if (result == 2) {

            question = gcnew QuestionWindow::Question("�� ������ �������� ������ ?");
            question->ShowDialog();

            bool result = question->GetResultQ();

            if (result == true) {
                try {
                    MyData::total_(1);
                    textBox9->Text = "0,0";
                    //Serial->WriteLine("1");
                }
                catch (...) {}

                delete question;
            }
            else if (result == false) {

                delete question;

            }

        }
        else if (result == 3) {

            delete metersClass;

        }



    }
    private: System::Void bt2_Click(System::Object^ sender, System::EventArgs^ e) {
        //������ ����������

    }
    private: System::Void bt3_Click(System::Object^ sender, System::EventArgs^ e) {
        //������ ���������
        
    }
    private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tInfo->Text->Length > 0) {
            if (tInfo->Text == "r")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "d")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "f")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "g")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "h")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "j")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "k")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else if (tInfo->Text == "a")
            {
                Serial->WriteLine(tInfo->Text);
            }
            else
            {
                try
                {
                    double m_to_imp = double::Parse(tInfo->Text->Replace(".", ","));
                    double m_to_imp2 = m_to_imp / MyData::scalingFactorR(); 
                    int m_to_imp3 = safe_cast<int>(m_to_imp2);
                    textBox33->Text = m_to_imp3.ToString() + "*";


                    MyData::total_(m_to_imp3);
                    textBox9->Text = m_to_imp.ToString();
                    //Serial->WriteLine(m_to_imp3.ToString());
                }
                catch (const std::exception&)
                {

                }
            }
            
        }
        
        
        /*if (tboxTransmitData->Text->Length < 10) {
            Serial->WriteLine();
        }
        else {
            ShowCustomMessageBox("��-�� �� �����");
        }*/
    }
    private: void ShowCustomMessageBox(String^ message)
    {
        MessForUser::MessageUser^ customMessageBox = gcnew MessForUser::MessageUser(message);
        customMessageBox->ShowDialog();

        delete customMessageBox;
    }
#pragma region ReqRes
#pragma comment(lib, "wsock32.lib")
#pragma comment(lib, "ws2_32.lib")
    private: System::Void btWriteData_Click(System::Object^ sender, System::EventArgs^ e) {
        if (comboS->Text->Length == 0 || textBox2->Text->Length != 8 || textBox1->Text->Length != 8 || textBox9->Text->Length < 2) {
            ShowCustomMessageBox("����������, ��������� ��� ���� ���������!");
            textBox1->Text = "";
        }
        else if (comboS->SelectedIndex == 0 && textBox10->Text->Length > 0) {
            textBox10->Text = "";
            textBox1->Text = "";
            ShowCustomMessageBox("��� ����� ��� ����� (���� = 1)!");
        }
        else if (comboS->SelectedIndex > 0 && textBox10->Text->Length == 0) {
            ShowCustomMessageBox("����������, ������� ��� �����!");
            textBox1->Text = "";
            textBox10->Focus();
        }
        else if (textBox7->Text->Length != 1) {
            ShowCustomMessageBox("������� ���������� ����� �����");
            textBox1->Text = "";
            //control = textBox7;
            textBox7->Focus();
        }
        else if (tControler->Text->Length == 0) {
            ShowCustomMessageBox("������� ����� ���������");
            textBox1->Text = "";
            //control = tControler;
            tControler->Focus();
        }
        else if (tMachine->Text->Length == 0) {
            ShowCustomMessageBox("������� ���������� ����� ������");
            textBox1->Text = "";
            //control = tMachine;
            tMachine->Focus();
        }
        else if (textBox9->Text == "0.0" || textBox9->Text == "0,0") {
            ShowCustomMessageBox("������. ������� ������.");
            textBox1->Text = "";

        }
        else if (textBox4->Text == "" || textBox4->Text == "0") {
            ShowCustomMessageBox("������. �� ������� ������.");
            textBox4->Focus();

        }
        else {
            std::string stdStringData = msclr::interop::marshal_as<std::string>(tboxTransmitData->Text);
            //address2 = stdStringData.c_str();
            sendFinal();
        }
    }
    private:void sendFinal() {
        String^ stringData = tboxTransmitData->Text;
        std::string stdStringData = msclr::interop::marshal_as<std::string>(stringData);
        const char* address2 = stdStringData.c_str();
        std::string add = stdStringData.c_str(); 
        time_t now = time(0);
        tm* timeinfo = localtime(&now);
        int year = 1900 + timeinfo->tm_year;
        int month = 1 + timeinfo->tm_mon;
        int day = timeinfo->tm_mday;
        std::ostringstream oss;
        oss << std::setfill('0') << std::setw(2) << month;
        std::string monthStr = oss.str();
        oss.str("");
        oss << std::setfill('0') << std::setw(2) << day;
        std::string dayStr = oss.str();
        std::string dateStdString = std::to_string(year) + "-" + monthStr + "-" + dayStr;
        std::cout << dateStdString << std::endl;
        char buffer[80];
        strftime(buffer, 80, "%H:%M:%S", timeinfo);
        String^ folderPath = "C:\\isSuccess\\" + year.ToString() + "-" + month.ToString() + "-" + day.ToString() + "\\";
        if (!System::IO::Directory::Exists(folderPath)) {
            System::IO::Directory::CreateDirectory(folderPath);
        }
        Guid guid = Guid::NewGuid();
        String^ fileName = folderPath + textBox1->Text + ".json";
        String^ date = year.ToString() + "-" + month.ToString() + "-" + day.ToString()->ToString();
        String^ time = gcnew String(buffer);
        String^ dateStr = date->ToString();
        std::string timeStdString = msclr::interop::marshal_as<std::string>(time);
        //double uv = double::Parse(lmetersUV->Text->Replace(".", ","));
        double meters_real = double::Parse(tboxReceiveOutput->Text->Replace(".", ","));
        double meters_final = double::Parse(textBox9->Text->Replace(".", ","));
        String^ defect_code = textBox10->Text;
        if (defect_code == "") {
            defect_code = "0";
        }
        String^ roundedResultStr3 = textBox6->Text;
        roundedResultStr3 = roundedResultStr3->Replace(",", ".");
        if (roundedResultStr3 == "0.") roundedResultStr3 = "0.0";
        String^ roundedResultCutoutstMeters = lmetersUV->Text;
        roundedResultCutoutstMeters = roundedResultCutoutstMeters->Replace(",", ".");
        int indexS = (comboS->SelectedIndex + 1);
        std::string print = "?";
        if (pictureBox11->Visible == true) {
            print = msclr::interop::marshal_as<std::string>(cboxPrinter->Text);
        }

        try {
            std::string requestDataFile = "{\"id\":\"" + msclr::interop::marshal_as<std::string>(guid.ToString()) +
                "\",\"id_change\":\"" + msclr::interop::marshal_as<std::string>(textBox7->Text) +
                "\",\"id_controler\": \"" + msclr::interop::marshal_as<std::string>(tControler->Text) +
                "\",\"id_machine\":\"" + msclr::interop::marshal_as<std::string>(tMachine->Text) +
                //"\",\"deviation_percent\":\"" + msclr::interop::marshal_as<std::string>(roundedResultStr3) + 
                "\",\"ddate\": \"" + dateStdString +
                "\",\"ttime\": \"" + timeStdString +
                "\",\"sort\": \"" + std::to_string(indexS) +
                "\",\"parent_sscc\": \"" + msclr::interop::marshal_as<std::string>(textBox2->Text) +
                "\",\"child_sscc\": \"" + msclr::interop::marshal_as<std::string>(textBox1->Text) +
                "\",\"quantity_meters_real\": \"" + msclr::interop::marshal_as<std::string>(meters_real.ToString()->Replace(",", ".")) +
                "\",\"quantity_meters_final\": \"" + msclr::interop::marshal_as<std::string>(meters_final.ToString()->Replace(",", ".")) +
                "\",\"cuts\": \"" + msclr::interop::marshal_as<std::string>(textBox4->Text) +
                "\",\"cutouts_quantity\": \"" + msclr::interop::marshal_as<std::string>(lquantityUV->Text) +
                "\",\"cutouts_meters\": \"" + msclr::interop::marshal_as<std::string>(roundedResultCutoutstMeters) +
                "\",\"defect_code\":\"" + msclr::interop::marshal_as<std::string>(textBox10->Text) +
                "\",\"flag_print\": \"" + print +
                "\"}";
            System::String^ requestDataFileCli = gcnew System::String(requestDataFile.c_str());
            StreamWriter^ writer = gcnew StreamWriter(fileName);
            writer->Write(requestDataFileCli);
            writer->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("������ ��� �������� �����" + ex->Message);
        }
        try {
            WSADATA wsaData;
            if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
                std::cout << "Failed to initialize Winsock." << std::endl;
                textBox1->Text = "";
                textBox1->Focus();
                exit(1);
            }
            SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
            if (clientSocket == INVALID_SOCKET) {
                std::cout << "Failed to create socket." << std::endl;
                WSACleanup();
                textBox1->Text = "";
                textBox1->Focus();
                exit(1);
            }
            sockaddr_in serverAddress;
            serverAddress.sin_family = AF_INET;
            serverAddress.sin_port = htons(MyData::portR());
            serverAddress.sin_addr.s_addr = inet_addr(address2);
            if (connect(clientSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
                std::cout << "Failed to connect to server." << std::endl;
                closesocket(clientSocket);
                WSACleanup();
                MessageBox::Show("�� ������� ������������ � �������. ��������� ����������� � ���������.");
                textBox1->Text = "";
                textBox1->Focus();
                return;
            }
            std::string requestData2 =
                "{\"id\":\"" + str_f(guid.ToString()) +
                "\",\"id_change\":\"" + str_f(textBox7->Text) +
                "\",\"id_controler\": \"" + str_f(tControler->Text) +
                "\",\"id_machine\":\"" + str_f(tMachine->Text) +
                "\",\"deviation_percent\":\"" + str_f(roundedResultStr3) +
                "\",\"scal\":\"" + str_f(MyData::scalingFactorR().ToString()->Replace(",", ".")) +
                "\",\"ddate\": \"" + dateStdString +
                "\",\"ttime\": \"" + timeStdString +
                "\",\"sort\": \"" + std::to_string(indexS) +
                "\",\"parent_sscc\": \"" + str_f(textBox2->Text) +
                "\",\"child_sscc\": \"" + str_f(textBox1->Text) +
                "\",\"quantity_meters_real\": \"" + str_f(meters_real.ToString()->Replace(",", ".")) +
                "\",\"quantity_meters_final\": \"" + str_f(meters_final.ToString()->Replace(",", ".")) +
                "\",\"cuts\": \"" + str_f(textBox4->Text) +
                "\",\"cutouts_quantity\": \"" + str_f(lquantityUV->Text) +
                "\",\"cutouts_meters\": \"" + str_f(roundedResultCutoutstMeters) +
                "\",\"defect_code\":\"" + str_f(defect_code) +
                "\",\"flag_print\": \"" + print +
                "\"}";
            std::string requestData1 = encryptDecrypt(requestData2, MyData::key_mR()); //, key_mu
            std::string request = "POST /api/postproperties_m HTTP/1.1\r\n";
            request += "Host: " + add + "\r\n";
            request += "Content-Type: text/plain\r\n";
            request += "Content-Length: " + std::to_string(requestData1.length()) + "\r\n";
            request += "\r\n";
            request += requestData1;
            if (send(clientSocket, request.c_str(), request.length(), 0) == SOCKET_ERROR) {
                std::cout << "Failed to send request." << std::endl;
                closesocket(clientSocket);
                WSACleanup();
                MessageBox::Show("�� ������� ��������� ���� �� ������.");
                textBox1->Text = "";
                textBox1->Focus();
                return;
            }
            int bytesRead;
            char buffer[4096];
            System::Text::StringBuilder^ responseData = gcnew System::Text::StringBuilder();
            while ((bytesRead = recv(clientSocket, buffer, sizeof(buffer) - 1, 0)) > 0) {
                buffer[bytesRead] = '\0';
                responseData->Append(gcnew System::String(buffer));
                closesocket(clientSocket);
                WSACleanup();
            }
            processResponse(responseData->ToString());
            return;
        }
        catch (System::Net::Sockets::SocketException^ ex) {
            MessageBox::Show("������ �����������: " + ex->Message);
            textBox1->Text = "";
            textBox1->Focus();
        }
        catch (Exception^ ex) {
            MessageBox::Show("������: " + ex->Message);
            textBox1->Text = "";
            textBox1->Focus();

        }

    }
    private:void processResponse(System::String^ response) {
        std::string responseStr = msclr::interop::marshal_as<std::string>(response);
        size_t start = responseStr.find("{");
        if (start == std::string::npos) {
            ShowCustomMessageBox("JSON-������ �� ������� � ������!");
            textBox1->Text = "";
            textBox1->Focus();
            textBox1->Focus();
            return;
        }
        responseStr = responseStr.substr(start);
        nlohmann::json json;
        String^ text9 = textBox9->Text;
        String^ text7 = textBox7->Text;
        try {
            json = nlohmann::json::parse(responseStr);
        }
        catch (...) {
            ShowCustomMessageBox("�������� ������ ������!");
            return;
        }
        if (json["status"] == "1") {
            //ShowCustomMessageBox("���� ������� ��������� � �������!");
            double str = double::Parse(textBox9->Text->Replace(".", ","));
            double uv = double::Parse(lmetersUV->Text->Replace(".", ","));
            //double str = str2 - uv; 
            int a = MyData::aR();
            int b = MyData::bR();
            int f = MyData::fR();
            int d = MyData::dR();
            double countM = MyData::countMR();
            double countM2 = MyData::countM2R();

            //tInfo->Text = MyData::dR().ToString() + "  " + MyData::fR().ToString();
            //tInfo2->Text = MyData::aR().ToString() + "  " + MyData::bR().ToString();
            //textBox33->Text = countM.ToString() + "  " + countM2.ToString();

            if (a != b) {
                MyData::b_(a);// = a;
                MyData::countM_(str + uv);
            }
            else if (a == b) {
                //double cc = MyData::countMR();
                MyData::countM_(countM + str + uv);
            }
            if (d != f) {
                MyData::f_(d);
                MyData::countM2_(str + uv);
            }
            else if (d == f) {
                //double cc = MyData::countM2R();
                MyData::countM2_(countM2 + str + uv);
            }

            
            //if (MyData::aR() != MyData::bR()) {
            //    MyData::b_(MyData::aR());// = a;
            //    MyData::countM_(str + uv);
            //}
            //else if (MyData::aR() == MyData::bR()) {
            //    double cc = MyData::countMR();
            //    MyData::countM_(cc + (str + uv));
            //}
            
            /*if (MyData::dR() != MyData::fR()) {
                MyData::f_(MyData::dR());
                MyData::countM_(str + uv);
            }
            else if (MyData::dR() == MyData::fR()) {
                double cc = MyData::countM2R();
                MyData::countM_(cc + (str + uv));
            }*/
            else ShowCustomMessageBox("Invalid data performance");
            li1->Text = "�:" + " " + textBox2->Text;
            li2->Text = "�:" + " " + textBox1->Text;
            li3->Text = "�:" + " " + comboS->Text;
            li4->Text = "�:" + " " + textBox9->Text;
            li5->Text = "�������:" + " " + textBox4->Text;
            li6->Text = "�� ���-��:" + " " + lquantityUV->Text;
            li7->Text = "�� ������:" + " " + lmetersUV->Text;
            li8->Text = "��� �����:" + " " + textBox10->Text;
            MyData::quantityUV_(0);
            MyData::metersUV_(0.0);
            MyData::cuts_(1);
            MyData::cuts_garant_(1);
            textBox1->Text = "";
            textBox4->Text = "1";
            comboUV->Text = "";
            textBox10->Text = "";
            tboxReceiveOutput->Text = "0.0";
            textBox9->Text = "0.0";
            textBox1->Focus();
            label12->Text = MyData::countMR().ToString("F1");
            label13->Text = MyData::countM2R().ToString("F1");
            comboS->SelectedIndex = 0;
            lmetersUV->Text = "0,0";
            lquantityUV->Text = "0";

            try {
                MyData::total_(1);
                textBox9->Text = "0,0";
                //Serial->WriteLine("1");
                //Serial->DiscardInBuffer(); 
            }
            catch (...) { ShowCustomMessageBox("NO connect serial port (send - c)"); };
            //return;
        }
        else if (json["status"] == "2") {
            ShowCustomMessageBox("����� � ����� ������� ��� ���� � ���� ������!");
            ShowCustomMessageBox("���������� ������������ ������ ����� ����� :)");
            MyData::flag_(false);
            textBox1->Text = "";
            textBox1->Focus();
            return;
        }
        else if (json["status"] == "0") {
            ShowCustomMessageBox("������ ������ �� �������!");
            textBox1->Text = "";
            textBox1->Focus();
            return;
        }
        else if (json["status"] == "n") {
            textBox2->Text = "";
            textBox2->Focus();
            ShowCustomMessageBox("��� ������ � ���� ������! :( ");
            return;
        }
        else if (json["status"] == "y") {
            ShowCustomMessageBox("�������! ����� ������ :)");
            textBox1->Focus();
            std::string str_i = msclr::interop::marshal_as<std::string>(textBox2->Text);
            MyData::a_(std::stoi(str_i));
            //textBox33->Text = MyData::aR().ToString() + "  " + MyData::bR().ToString() + "  " + MyData::dR().ToString() + "  " + MyData::fR().ToString() + " " + MyData::countMR().ToString() + "  " + MyData::countM2R().ToString();
            writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
            return;
        }
        else if (json["status"] == "e") {
            ShowCustomMessageBox("������ �� ���� ���������� ������! :(");
            textBox1->Text = "";
            textBox1->Focus();
            return;
        }
        else if (json["status"] == "w") {
            ShowCustomMessageBox("�� ������, ����������� :)");
            //flag = false;
            MyData::flag_(true);
            return;
        }
        else if (json["status"] == "q") {
            //ShowMessageOrQuestchen::QuestionWithUser^ questionForm = gcnew ShowMessageOrQuestchen::QuestionWithUser();
            /*questionForm->ShowDialog();
            bool result = questionForm->GetResult();
            if (result == true)
            {
                flag = true;
                textBox4->Focus();
            }
            if (result == false)
            {*/
            MyData::flag_(false);
            textBox1->Text = "";
            textBox1->Focus();
            ShowCustomMessageBox("����� � ����� ������� ��� ����!");
            ShowCustomMessageBox("������� ������ ����� ����� :)");
            //}

        }
        else if (json["status"] == "a") {
            ShowCustomMessageBox("������ �� ���� ���������� ������!");
            textBox1->Text = "";
            textBox1->Focus();

        }
        else if (json["status"] == "7") {
            MyData::flag_(false);
            ShowCustomMessageBox("������ ������� ����������� �����!");
            //���������
        }
        else if (json["status"] == "8") {
            ShowCustomMessageBox("������ �� ���� �������� ������ - ��������� �������!");
            textBox1->Text = "";
            textBox1->Focus();

        }
        else if (json["status"] == "5") {
            ShowCustomMessageBox("������ �� ������� �������!");
            textBox1->Text = "";
            textBox1->Focus();

        }
        else if (json["status"] == "6") {
            ShowCustomMessageBox("���������� �������� ���������. ���, ���� :(");


        }
        else if (json["status"] == "k")
        {
            ShowCustomMessageBox("����� ������� ����������� :)");
            textBox2->Text = "";
            textBox2->Focus();// MyData::flag_(false);
            MyData::q_trim_(0);
            MyData::m_trim_(0.0);
            l_quantity_trim->Text = "0";
            l_meters_trim->Text = "0,0";
            writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
            //192.168.177.4
        }
        else if (json["status"] == "l")
        {
            ShowCustomMessageBox("���-�� ����� �� ���... ��������� ���������� ������� :(");
            textBox2->Focus();
        }
        /*else if (json.contains("key")) {
            key = json["key"].get<long long>();
            encryption_key = std::abs(static_cast<long long>(std::pow(key, st)) % p);
            sendFinal();

        }*/
        return;
    }
    private:void sendTrim() {
        String^ stringData = tboxTransmitData->Text;
        std::string stdStringData = msclr::interop::marshal_as<std::string>(stringData);
        const char* address2 = stdStringData.c_str();
        std::string add = address2;
        try {
            WSADATA wsaData;
            if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
                std::cout << "Failed to initialize Winsock." << std::endl;
                textBox1->Text = "";
                textBox1->Focus();
                exit(1);
            }
            SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
            if (clientSocket == INVALID_SOCKET) {
                std::cout << "Failed to create socket." << std::endl;
                WSACleanup();
                textBox1->Text = "";
                textBox1->Focus();
                exit(1);
            }
            sockaddr_in serverAddress;
            serverAddress.sin_family = AF_INET;
            serverAddress.sin_port = htons(MyData::portR());
            serverAddress.sin_addr.s_addr = inet_addr(address2);
            if (connect(clientSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
                std::cout << "Failed to connect to server." << std::endl;
                closesocket(clientSocket);
                WSACleanup();
                MessageBox::Show("�� ������� ������������ � �������. ��������� ����������� � ���������.");
                textBox1->Text = "";
                textBox1->Focus();
                return;
            }
            std::string requestData2 =
                "{\"parent_sscc\":\"" + str_f(textBox2->Text) +
                "\",\"sort\": \"" + str_f("6") +
                "\",\"quantity_trim\": \"" + str_f(l_quantity_trim->Text) +
                "\",\"meters_trim\": \"" + str_f(l_meters_trim->Text->Replace(",", ".")) + 
                "\"}";
            std::string requestData1 = encryptDecrypt(requestData2, MyData::key_mR()); //, key_mu
            std::string request = "POST /api/post_properties_trim HTTP/1.1\r\n";
            request += "Host: " + add + "\r\n";
            request += "Content-Type: text/plain\r\n";
            request += "Content-Length: " + std::to_string(requestData1.length()) + "\r\n";
            request += "\r\n";
            request += requestData1;
            if (send(clientSocket, request.c_str(), request.length(), 0) == SOCKET_ERROR) {
                std::cout << "Failed to send request." << std::endl;
                closesocket(clientSocket);
                WSACleanup();
                MessageBox::Show("�� ������� ��������� ���� �� ������.");
                textBox1->Text = "";
                textBox1->Focus();
                return;
            }
            int bytesRead;
            char buffer[4096];
            System::Text::StringBuilder^ responseData = gcnew System::Text::StringBuilder();
            while ((bytesRead = recv(clientSocket, buffer, sizeof(buffer) - 1, 0)) > 0) {
                buffer[bytesRead] = '\0';
                responseData->Append(gcnew System::String(buffer));
                closesocket(clientSocket);
                WSACleanup();
            }
            processResponse(responseData->ToString());
            return;
        }
        catch (System::Net::Sockets::SocketException^ ex) {
            MessageBox::Show("������ �����������: " + ex->Message);
            textBox1->Text = "";
            textBox1->Focus();
        }
        catch (Exception^ ex) {
            MessageBox::Show("������: " + ex->Message);
            textBox1->Text = "";
            textBox1->Focus();

        }

    }
#pragma endregion
#pragma region Managment
    //private:short valid_scan = 0;
private: System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    TextBox^ textBox2 = dynamic_cast<TextBox^>(sender);
    if (textBox2->Text->Length > 8)
    {
        textBox2->Text = "";
        ShowCustomMessageBox("���� ���. ���� ������������ :)");
    }
    if (textBox2->Text->Length == 8 && MyData::first_startR() == true)
    {
        
        //variable2++;
        try {
            String^ stringData = tboxTransmitData->Text;
            std::string stdStringData = msclr::interop::marshal_as<std::string>(stringData);
            const char* address2 = stdStringData.c_str();
            std::string add = address2;
            WSADATA wsaData;
            if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
                exit(1);
            }
            SOCKET clientSocket = socket(AF_INET, SOCK_STREAM, 0);
            if (clientSocket == INVALID_SOCKET) {
                std::cout << "Failed to create socket." << std::endl;
                WSACleanup();
                exit(1);
            }
            sockaddr_in serverAddress;
            serverAddress.sin_family = AF_INET;
            serverAddress.sin_port = htons(MyData::portR());
            serverAddress.sin_addr.s_addr = inet_addr(address2);
            if (connect(clientSocket, (SOCKADDR*)&serverAddress, sizeof(serverAddress)) == SOCKET_ERROR) {
                std::cout << "Failed to connect to server." << std::endl;
                closesocket(clientSocket);
                WSACleanup();
                ShowCustomMessageBox("�������� ���� ���������� � ��������� :)");
                textBox2->Text = "";
                textBox2->Focus();
                return;
            }
            std::string requestData = "{\"parent_sscc\": \"" + msclr::interop::marshal_as<std::string>(textBox2->Text) + "\"}";
            std::string request = "POST /search/roll HTTP/1.1\r\n";
            request += "Host: " + add + "\r\n";
            request += "Content-Type: application/json\r\n";
            request += "Content-Length: " + std::to_string(requestData.length()) + "\r\n";
            request += "\r\n";
            request += requestData;
            if (send(clientSocket, request.c_str(), request.length(), 0) == SOCKET_ERROR) {
                std::cout << "Failed to send request." << std::endl;
                closesocket(clientSocket);
                WSACleanup();
                ShowCustomMessageBox("�� ������� ��������� ��������� �� ������.");
                return;
            }
            int bytesRead;
            char buffer[4096];
            System::Text::StringBuilder^ responseData = gcnew System::Text::StringBuilder();
            while ((bytesRead = recv(clientSocket, buffer, sizeof(buffer) - 1, 0)) > 0) {
                buffer[bytesRead] = '\0';
                responseData->Append(gcnew System::String(buffer));
                closesocket(clientSocket);
                WSACleanup();
            }
            //tb_15->Text = gcnew String(request.c_str()); 
            processResponse(responseData->ToString());
            return;
        }
        catch (System::Net::Sockets::SocketException^ ex) {
            ShowCustomMessageBox("������ �������� ������: " + ex->Message);
        }
        catch (Exception^ ex) {
            ShowCustomMessageBox("������: " + ex->Message);

        }
    }

}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    TextBox^ textBox1 = dynamic_cast<TextBox^>(sender);
    if (textBox1->Text->Length == 8)
    {
        try {
            std::string text_i = msclr::interop::marshal_as<std::string>(textBox7->Text);
            MyData::d_(std::stoi(text_i));
            //textBox33->Text = MyData::aR().ToString() + "  " + MyData::bR().ToString() + "  " + MyData::dR().ToString() + "  " + MyData::fR().ToString() + " " + MyData::countMR().ToString() + "  " + MyData::countM2R().ToString(); 
        }
        catch (Exception^) {}
        btWriteData->PerformClick();
    }
    if (textBox1->Text->Length > 8)
    {
        textBox2->Text = "";
        ShowCustomMessageBox("���� ���. ���� ������������ :)");
    }
}
private: System::Void TextBox_PreviewKeyDown(System::Object^ sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e)
{
    if (e->KeyCode == System::Windows::Forms::Keys::Enter && comboUV->Focused)
    {
        e->IsInputKey = true;
        if (comboUV->SelectedIndex == 0) {
            uv_info(0.1);
            
        }
        else if (comboUV->SelectedIndex == 1) {
            uv_info(0.2);
        }
        else if (comboUV->SelectedIndex == 2) {
            uv_info(0.4);
        }
        else if (comboUV->SelectedIndex == 3) {
            uv_info(0.7);
        }
        else if (comboUV->Text == "0") {
            MyData::quantityUV_(0);
            MyData::metersUV_(0.0);
            lquantityUV->Text = MyData::quantityUVR().ToString();  
            lmetersUV->Text = MyData::metersUVR().ToString("F1");
        }
        else if (comboUV->Text == "5") {
            int q = MyData::quantityUVR();
            MyData::quantityUV_(q + 1);
            lquantityUV->Text = MyData::quantityUVR().ToString();
        }
        else if (comboUV->Text == "6") {
            if (MyData::quantityUVR() >= MyData::cuts_garantR() && MyData::quantityUVR() != 0) {
                int q = MyData::quantityUVR();
                MyData::quantityUV_(q - 1);
                lquantityUV->Text = MyData::quantityUVR().ToString();
            }
            
        }
        else if (comboUV->Text == "7") {
            int c = MyData::cutsR();
            MyData::cuts_(c + 1);
            textBox4->Text = MyData::cutsR().ToString();
        }
        else if (comboUV->Text == "8") {
            if (MyData::cutsR() > 1) {
                int c = MyData::cutsR();
                MyData::cuts_(c - 1);
                textBox4->Text = MyData::cutsR().ToString();
            }

        }
        else if (comboUV->Text == "9") {
            tInfo->Focus();

        }

        else if (comboUV->Text == "000") {
            MyData::total_(1);
            textBox9->Text = "0,0";
            //Serial->WriteLine("1");
        }
        else if (comboUV->Text == "555") {
            bt_trim->PerformClick();
        }
        else if (comboUV->Text == "666") {
            bt_plus->PerformClick(); 
        }
        else if (comboUV->Text == "888") {
            bt_print->PerformClick();
        }
        else if (comboUV->Text == "999") {
            btnSend->PerformClick();

        }
        else if (comboUV->Text == "") {
           
        }
        else if (comboUV->Text == "877") {
            WinExec("shutdown -s -t 0", SW_HIDE); 
            return;
        }
        else if (comboUV->Text == "7878") {
            try
            {
                int valid0 = int::Parse(textBox33->Text);
                int valid1 = int::Parse(textBox10->Text);
                int valid2 = int::Parse(textBox4->Text);
                if (valid0 < 999 && valid0 > 0 && valid1 - valid2 == 7 && textBox7->Text == "0" && cboxPrinter->Text == "7") {
                    String^ c = "0.032" + textBox33->Text;
                    textBox7->Text = "";
                    cboxPrinter->SelectedIndex = 0;
                    textBox10->Text = "";
                    MyData::scalingFactor_(double::Parse(c->Replace(".", ",")));
                    ShowCustomMessageBox("scal factor installed");
                    writeFile(str_f(c));
                    textBox33->Text = c;
                }
                else {
                    ShowCustomMessageBox("���� ���� ����");
                    ShowCustomMessageBox("���� ���� ����");
                    ShowCustomMessageBox("���� ���� ����");
                    ShowCustomMessageBox("���� ���� ����");
                    ShowCustomMessageBox("���� ���� ����");
                    ShowCustomMessageBox("���� ���� ����");
                    ShowCustomMessageBox("���� ���� ����");
                }
            }
            catch (const std::exception&)
            {
                ShowCustomMessageBox("���� � �����������");
            }

        }
        comboUV->Text = "";
        textBox1->Focus();
    }

}

private: System::Void TextBoxAll_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    TextBox^ textBox = dynamic_cast<TextBox^>(sender);

    /*if (textBox == textBox10 && textBox10->Text->Length == 3) {
        textBox1->Focus();
    }*/
    if (textBox == textBox10 && textBox10->Focused && textBox10->Text->Length > 3) {
        textBox10->Text = "";
        int v = MyData::valid_scanR();
        MyData::valid_scan_(v + 1);
        if (MyData::valid_scanR() >= 2) {
            ShowCustomMessageBox("������������! ��� ����� � ������...");
            textBox10->Focus();
            MyData::valid_scan_(0);
        }
    }
    else if (textBox == textBox4 && textBox4->Focused && textBox4->Text->Length > 2) {
        textBox4->Text = "";
        int v = MyData::valid_scan_oR();
        MyData::valid_scan_o_(v + 1);
        if (MyData::valid_scan_oR() >= 2) {
            ShowCustomMessageBox("������������! �������� ���������...");
            
            MyData::valid_scan_o_(0);
            textBox4->Text = MyData::cutsR().ToString();
            textBox1->Focus();
        }
    }
    else if (textBox == textBox7 && textBox7->Focused && textBox7->Text->Length == 1) {
        String^ change_ = textBox7->Text;
        std::string change = msclr::interop::marshal_as<std::string>(change_);
        MyData::noMore_(std::stoi(change));
        if (MyData::noMoreR() > 2) {
            textBox7->Focus();
            textBox7->Text = "";
        }
        else {
            //MyData::d_(std::stoi(change)); 
            //textBox33->Text = MyData::aR().ToString() + "  " + MyData::bR().ToString() + "  " + MyData::dR().ToString() + "  " + MyData::fR().ToString() + " " + MyData::countMR().ToString() + "  " + MyData::countM2R().ToString();
        }
        
        //control = tControler;
        tControler->Focus();
    }
    else if (textBox == textBox7 && textBox7->Focused && textBox7->Text->Length > 1) {
        textBox7->Focus();
        textBox7->Text = "";
    }
    else if (textBox == tControler && tControler->Focused && tControler->Text->Length > 3) {
        tControler->Focus();
        tControler->Text = "";
    }
    else if (textBox == tMachine && tMachine->Focused && tMachine->Text->Length > 2) {
        tMachine->Focus();
        tMachine->Text = "";
    }
   /* else if (textBox == textBox6 && textBox6->Focused) {
        std::string percent_text2 = msclr::interop::marshal_as<std::string>(textBox6->Text);
        deviationPercent = std::stod(percent_text2);
        if (textBox6->Text->Length > 5 || deviationPercent > 0.9)
            textBox6->Text = "0.";
        textBox6->Select(textBox6->Text->Length, 0);
        String^ percent_te = textBox6->Text;
        std::string percent_t = msclr::interop::marshal_as<std::string>(percent_te);
        deviationPercent = std::stod(percent_t);
    }*/
}
void MyForm::TextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
       {
           ComboBox^ comboBox = dynamic_cast<ComboBox^>(sender);
           TextBox^ textBox = dynamic_cast<TextBox^>(sender);
           if (e->KeyChar == '/') {
               e->Handled = true;
               if (comboS->Focused) {
                   textBox2->Focus();
                   textBox2->SelectAll();
                   MyData::flag_include_(true);
               }
               else if (textBox2->Focused) {
                   if (MyData::flag_includeR() == true) {
                       textBox1->Focus();
                       textBox1->SelectAll();
                   }
                   else {
                       comboS->Focus();
                       comboS->SelectAll();
                   }
               }
               else if (textBox1->Focused) {
                   textBox2->Focus();
                   textBox2->SelectAll();
                   MyData::flag_include_(false);
               }
               else {
                   comboS->Focus();
                   MyData::flag_include_(true);
               }
           }
           else if (e->KeyChar == '*')
           {
               e->Handled = true;
               if (comboUV->Focused) {
                   textBox10->Focus();
                   textBox10->SelectAll();
                   MyData::flag_include_(true);
               }
               else if (textBox10->Focused) {
                   if (MyData::flag_includeR() == true) {
                       textBox4->Focus();
                       textBox4->SelectAll();
                   }
                   else {
                       comboUV->Focus();
                       comboUV->SelectAll();
                       
                   }
               }
               else if (textBox4->Focused) {
                   textBox10->Focus();
                   textBox10->SelectAll();
                   MyData::flag_include_(false);
               }
               else {
                   comboUV->Focus();
                   MyData::flag_include_(true);
               }
              

           }
           else if (e->KeyChar == '-')
           {
               e->Handled = true;
               if (textBox9->Focused) {
                   
               }
               
               else {
                   textBox9->Focus();
                   textBox9->SelectAll();
               }
           }
           else if (e->KeyChar == '1' && comboS->Focused)
           {
               e->Handled = true;
               comboBox->SelectedIndex = 0;
               //variable1++;
               //control = textBox1;
               textBox1->Focus();
           }
           else if (e->KeyChar == '2' && comboS->Focused)
           {
               e->Handled = true;
               comboBox->SelectedIndex = 1;
               //variable1++;
               //control = textBox10;
               //control->Focus();
               textBox10->Focus();
           }
           else if (e->KeyChar == '3' && comboS->Focused)
           {
               e->Handled = true;
               comboBox->SelectedIndex = 2;
               //variable1++;
               //control = textBox10;
               textBox10->Focus();
           }
           else if (e->KeyChar == '4' && comboS->Focused)
           {
               e->Handled = true;
               comboBox->SelectedIndex = 3;
               //variable1++;
               //control = textBox10;
               textBox10->Focus();
           }
           else if (e->KeyChar == '5' && comboS->Focused)
           {
               e->Handled = true;
               comboBox->SelectedIndex = 4;
               //variable1++;
               //control = textBox10;
               textBox10->Focus();
           }
           else if (e->KeyChar == '6' && comboS->Focused) e->Handled = true;
           else if (e->KeyChar == '7' && comboS->Focused) e->Handled = true;
           else if (e->KeyChar == '8' && comboS->Focused) e->Handled = true;
           else if (e->KeyChar == '9' && comboS->Focused) e->Handled = true;
           else if (e->KeyChar == '0' && comboS->Focused) e->Handled = true;

           else if (e->KeyChar == ',' || e->KeyChar == '.') {
               if (textBox9->Focused) {
                   return;
               }
               else {
                   e->Handled = true;
                   if (textBox7->Focused) {
                       //control = tControler;
                       tControler->Focus();
                       tControler->SelectAll();
                   }
                   else if (tControler->Focused) {
                       //control = tMachine;
                       tMachine->Focus();
                       tMachine->SelectAll();
                   }

                   else {
                       //control = textBox7;
                       textBox7->Focus();
                       textBox7->SelectAll();
                   }
               }
           }
           else if (e->KeyChar == '1' && comboUV->Focused)
           {
               e->Handled = true;
               comboUV->SelectedIndex = 0;
           }
           else if (e->KeyChar == '2' && comboUV->Focused)
           {
               e->Handled = true;
               comboUV->SelectedIndex = 1;

           }
           else if (e->KeyChar == '3' && comboUV->Focused)
           {
               e->Handled = true;
               comboBox->SelectedIndex = 2;

           }
           else if (e->KeyChar == '4' && comboUV->Focused)
           {
               e->Handled = true;
               comboUV->SelectedIndex = 3;

           }
           if (e->KeyChar == '+') {
               e->Handled = true;
               if (textBox2->Text->Length != 8) {
                   ShowCustomMessageBox("������� ���������� ����� ������");
               }
               else if (textBox7->Text->Length != 1) {
                   ShowCustomMessageBox("������� ���������� ����� �����");
               }
               else if (tControler->Text->Length == 0) {
                   ShowCustomMessageBox("������� ����� ���������");
               }
               else if (tMachine->Text->Length == 0) {
                   ShowCustomMessageBox("������� ���������� ����� ������");
               }
               else {
                   double totalImpulses = MyData::totalImpulsesR();
                   double scalingFactor = MyData::scalingFactorR();
                   MyData::if_weight_totalImpulses_(totalImpulses / scalingFactor);
                   MyData::weight_(false);
                   textBox33->Text = MyData::if_weight_totalImpulsesR().ToString();

                   MyData::total_weight_(1);
                   textBox9->Text = "0,0";
                   //Serial->WriteLine("1");

                   recordWeight = gcnew ShowWindowOrWeigth::WeightInfoClass(textBox7->Text, tControler->Text, tMachine->Text, textBox6->Text, textBox2->Text, cboxPrinter->Text, scalingFactor);
                   recordWeight->SetIP(tboxTransmitData->Text);
                   recordWeight->ShowDialog();

                   bool result = recordWeight->GetResult();
                   if (result == true) {
                       delete recordWeight;
                       try {
                           double qqmm = recordWeight->GetResultDouble();
                           double c1 = MyData::countMR();
                           double c2 = MyData::countM2R();
                           MyData::countM_(c1 + qqmm);
                           MyData::countM2_(c2 + qqmm);
                           label12->Text = MyData::countMR().ToString("F1");
                           label13->Text = MyData::countM2R().ToString("F1");
                           int c = MyData::cutsR();
                           MyData::cuts_(c + 1);
                           textBox4->Text = MyData::cutsR().ToString();
                           textBox1->Focus();
                           int countImpulse = static_cast<int>(MyData::if_weight_totalImpulsesR()); // Convert::ToInt32(if_weight_totalImpulses);
                           //for (int i = 0; i < 2; i++) {

                           //MyData::total_weight_(1);
                           //Serial->WriteLine(countImpulse.ToString());
                           //}
                           textBox33->Text = (countImpulse.ToString());
                           MyData::weight_(true);
                       }
                       catch (...) {
                           int countImpulse = static_cast<int>(MyData::if_weight_totalImpulsesR());
                           textBox33->Text = (countImpulse.ToString());
                           //Serial->WriteLine(countImpulse.ToString());
                           MyData::weight_(true);
                       }


                   };
                   if (result == false) {
                       delete recordWeight;
                       try {
                           int countImpulse = static_cast<int>(MyData::if_weight_totalImpulsesR()); //Convert::ToInt32(if_weight_totalImpulses);
                           //for (int i = 0; i < 2; i++) {
                              // Serial->WriteLine(countImpulse.ToString());
                           //}
                           textBox33->Text = (countImpulse.ToString());
                           MyData::weight_(true);
                       }
                       catch (...) {
                           int countImpulse = static_cast<int>(MyData::if_weight_totalImpulsesR());
                           textBox33->Text = (countImpulse.ToString());
                           //Serial->WriteLine(countImpulse.ToString());
                           MyData::weight_(true);
                       }

                   };

               }
               // ���������� ���� ��������. ������ ���� ����������� � ������ ����������. ������� - ��������.
           }
       }
#pragma endregion
#pragma region Keyboard
private: System::Void bt0_Click(System::Object^ sender, System::EventArgs^ e) {
    //textBox1->Focus();
    /*if (control != nullptr) {
        control->Focus();
        keybd_event('0', 0, 0, 0);
        keybd_event('0', 0, KEYEVENTF_KEYUP, 0);
    }*/
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("0");
    }
}

private: System::Void bt1_Click(System::Object^ sender, System::EventArgs^ e) {
    //textBox1->Focus();
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("1");
    }

}
private: System::Void bt2__Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("2");
    }
}
private: System::Void bt3__Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("3");
    }
}
private: System::Void bt4_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("4");
    }
}
private: System::Void bt5_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("5");
    }
}
private: System::Void bt6_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("6");
    }
}
private: System::Void bt7_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("7");
    }
}
private: System::Void bt8_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("8");
    }
}
private: System::Void bt9_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send("9");
    }
}
private: System::Void bt_point_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send(".");
    }
}
private: System::Void bt_slash_Click(System::Object^ sender, System::EventArgs^ e) {
    //e->KeyChar="/";
    if (control == textBox2 && textBox2->Text->Length == 8) {
        question = gcnew QuestionWindow::Question("�� ������ ��������� �����?");
        question->ShowDialog();

        bool result = question->GetResultQ();
        
        if (result == true) {
            if (l_meters_trim->Text != "0.0" && l_meters_trim->Text != "0,0") {
                sendTrim();
            }
            else
            {
                ShowCustomMessageBox("����� ������� ����������� :)");
                textBox2->Text = "";
                textBox2->Focus();
                writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
            }
            
            delete question;
        }
        else if(result == false){
            
            delete question;
           
        }
    }
    
    else if(control != nullptr) {
        control->Focus();
        SendKeys::Send("{BACKSPACE}");
    }
}
private: System::Void btStar_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send(gcnew String("*"));
    }
}
private: System::Void btMinus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (control != nullptr && control != textBox1 && control != textBox2) {
        control->Focus();
        SendKeys::Send(gcnew String("-"));
    }
}
private: System::Void bt_plus_Click(System::Object^ sender, System::EventArgs^ e) {
    /*if (control != nullptr) {
        control->Focus();
        SendKeys::Send(gcnew String("+"));
    }*/
    if (textBox2->Text->Length != 8) {
        ShowCustomMessageBox("������� ���������� ����� ������");
    }
    else if (textBox7->Text->Length != 1) {
        ShowCustomMessageBox("������� ���������� ����� �����");
    }
    else if (tControler->Text->Length == 0) {
        ShowCustomMessageBox("������� ����� ���������");
    }
    else if (tMachine->Text->Length == 0) {
        ShowCustomMessageBox("������� ���������� ����� ������");
    }
    /*if (textBox->Text->Length != ) {
        ShowCustomMessageBox("");
    }*/

    else {
        double totalImpulses = MyData::totalImpulsesR();
        double scalingFactor = MyData::scalingFactorR();
        MyData::if_weight_totalImpulses_(totalImpulses / scalingFactor);
        
        MyData::weight_(false);
        textBox33->Text = MyData::if_weight_totalImpulsesR().ToString();

        MyData::total_weight_(1);
        //Serial->WriteLine("1");

        String^ print = "?";
        if (pictureBox10->Visible == true) {
            print = cboxPrinter->Text;
        }
        recordWeight = gcnew ShowWindowOrWeigth::WeightInfoClass(textBox7->Text, tControler->Text, tMachine->Text, textBox6->Text, textBox2->Text, print, scalingFactor);
        recordWeight->SetIP(tboxTransmitData->Text);
        recordWeight->ShowDialog();

        bool result = recordWeight->GetResult();
        if (result == true) {
            
            try {
                double qqmm = recordWeight->GetResultDouble();
                double c1 = MyData::countMR();
                double c2 = MyData::countM2R();
                MyData::countM_(c1 + qqmm);
                MyData::countM2_(c2 + qqmm);
                label12->Text = MyData::countMR().ToString("F1");
                label13->Text = MyData::countM2R().ToString("F1");
                question = gcnew QuestionWindow::Question("�������� ����� � �������� �����?");
                question->ShowDialog();
                bool r = question->GetResultQ();
                if (r == true)
                {
                    int c = MyData::cutsR();
                    MyData::cuts_(c + 1);
                    textBox4->Text = MyData::cutsR().ToString();

                }
                else
                {
                    //return;
                }
                delete question;
                //textBox4->Text = cuts.ToString();
                textBox1->Focus();
                int countImpulse = Convert::ToInt32(MyData::if_weight_totalImpulsesR());

                //Serial->WriteLine(countImpulse.ToString()); 

                textBox33->Text = (countImpulse.ToString());
                //weight = true;
                MyData::weight_(true);
                
            }
            catch (...) {}
           
            
        };
        if (result == false) {
            
            try {
                int countImpulse = Convert::ToInt32(MyData::if_weight_totalImpulsesR());
                //for (int i = 0; i < 4; i++) {
                //Serial->WriteLine(countImpulse.ToString());

                //}
                textBox33->Text = (countImpulse.ToString());
                MyData::weight_(true);
            }
            catch (...) {}
            

        };
        delete recordWeight;
    }
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    // button - OK 
    if (comboUV->SelectedIndex == 0) {
        uv_info(0.1);
    }
    else if (comboUV->SelectedIndex == 1) {
        uv_info(0.2);
    }
    else if (comboUV->SelectedIndex == 2) {
        uv_info(0.4);
    }
    else if (comboUV->SelectedIndex == 3) {
        uv_info(0.7);
    }
    else if (comboUV->Text == "555") {
        try
        {
            //Serial->WriteLine("1");
            MyData::total_(1);
            textBox9->Text = "0,0";
            tboxReceiveOutput->Text = "0,0";
        }
        catch (...)
        {
            ShowCustomMessageBox("�� ������� �������� �������, ���������� ����������");
        }
    }
    else if (comboUV->Text == "7878") {
        try
        {
            int valid0 = int::Parse(textBox33->Text); ///Convert::ToInt32(textBox33->Text); 
            int valid1 = int::Parse(textBox10->Text);
            int valid2 = int::Parse(textBox4->Text);
            if (valid0 < 999 && valid0 > 0 && valid1 - valid2 == 7 && textBox7->Text == "0" && cboxPrinter->Text == "7") {
                String^ c = "0.032" + textBox33->Text;
                textBox7->Text = "";
                cboxPrinter->SelectedIndex = 0;
                textBox10->Text = "";
                MyData::scalingFactor_(double::Parse(c->Replace(".", ","))); 
                ShowCustomMessageBox("scal factor installed");
            }
            else {
                ShowCustomMessageBox("���� ���� ����");
                ShowCustomMessageBox("���� ���� ����");
                ShowCustomMessageBox("���� ���� ����");
                ShowCustomMessageBox("���� ���� ����");
                ShowCustomMessageBox("���� ���� ����");
                ShowCustomMessageBox("���� ���� ����");
                ShowCustomMessageBox("���� ���� ����");
            }
        }
        catch (const std::exception&)
        {
            ShowCustomMessageBox("���� � �����������");
        }

    }
    comboUV->SelectedIndex = -1;
    textBox1->Focus();
}
#pragma comment(lib, "User32.lib")
private:Void tb_GotFocus(Object^ sender, EventArgs^ e) {
    control = dynamic_cast<System::Windows::Forms::Control^>(sender);
}
#pragma endregion
#pragma region Sort
private: System::Void bts_1_Click(System::Object^ sender, System::EventArgs^ e) {
    control->Focus();
    comboS->SelectedIndex = 0;
    textBox10->Text = "";
}
private: System::Void bts_2_Click_1(System::Object^ sender, System::EventArgs^ e) {
    control->Focus();
    comboS->SelectedIndex = 1;
    textBox10->Focus();
}
private: System::Void bts_3_Click_1(System::Object^ sender, System::EventArgs^ e) {
    control->Focus();
    comboS->SelectedIndex = 2;
    textBox10->Focus();
}
private: System::Void bts_4_Click_1(System::Object^ sender, System::EventArgs^ e) {
    control->Focus();
    comboS->SelectedIndex = 3;
    textBox10->Focus();
}
private: System::Void bts_5_Click_1(System::Object^ sender, System::EventArgs^ e) {
    control->Focus(); 
    comboS->SelectedIndex = 4;
    textBox10->Focus();
}
#pragma endregion

#pragma region UV
private: System::Void bt_uv_plus_Click(System::Object^ sender, System::EventArgs^ e) {
    int q = MyData::quantityUVR();
    MyData::quantityUV_(q + 1);
    lquantityUV->Text = MyData::quantityUVR().ToString();
}
private: System::Void bt_uv_minus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (MyData::quantityUVR() >= MyData::cuts_garantR() && MyData::quantityUVR() != 0) {
        int q = MyData::quantityUVR();
        MyData::quantityUV_(q - 1);
        lquantityUV->Text = MyData::quantityUVR().ToString();
    }
}
       private: void uv_info(double metersUV) {

           int q = MyData::quantityUVR();
           double m = MyData::metersUVR();
           int c = MyData::cuts_garantR();

           MyData::quantityUV_(q + 1);
           MyData::cuts_garant_(c + 1);
           MyData::metersUV_(m + metersUV);

           double str = double::Parse(textBox9->Text->Replace(".", ","));
           //double uv = double::Parse(lmetersUV->Text->Replace(".", ","));


           textBox9->Text = (str - metersUV).ToString("F1");
           lquantityUV->Text = MyData::quantityUVR().ToString();
           lmetersUV->Text = MyData::metersUVR().ToString("F1");

       }
private: System::Void btuv_1_Click(System::Object^ sender, System::EventArgs^ e) {
    uv_info(0.1);
}
private: System::Void btuv_2_Click(System::Object^ sender, System::EventArgs^ e) {
    uv_info(0.2);
}
private: System::Void btuv_3_Click(System::Object^ sender, System::EventArgs^ e) {
    uv_info(0.4);
}
private: System::Void btuv_4_Click(System::Object^ sender, System::EventArgs^ e) {
    uv_info(0.7);
}
private: System::Void btuv_0_Click(System::Object^ sender, System::EventArgs^ e) {
    
    MyData::quantityUV_(0);
    MyData::cuts_garant_(1);
    MyData::metersUV_(0.0);
    
    double hh = double::Parse(textBox9->Text->Replace(".", ","));
    double jj = double::Parse(lmetersUV->Text->Replace(".", ","));
    textBox9->Text = (hh + jj).ToString("F1");
    lquantityUV->Text = MyData::quantityUVR().ToString();
    lmetersUV->Text = MyData::metersUVR().ToString("F1");
}
#pragma endregion

#pragma region Cuts
private: System::Void bto_plus_Click(System::Object^ sender, System::EventArgs^ e) {
    int c = MyData::cutsR();
    MyData::cuts_(c + 1);
    textBox4->Text = MyData::cutsR().ToString();
}
private: System::Void bto_minus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (MyData::cutsR() > 1) {
        int c = MyData::cutsR();
        MyData::cuts_(c - 1);
        textBox4->Text = MyData::cutsR().ToString();
    }
   
}
#pragma endregion

private: System::Void bt_print_Click(System::Object^ sender, System::EventArgs^ e) {
    if (pictureBox11->Visible == true) {
        pictureBox11->Visible = false;
        pictureBox13->Visible = true;
    }

    else if (pictureBox13->Visible == true) {
        pictureBox13->Visible = false;
        pictureBox11->Visible = true;
    }

    else {
        pictureBox13->Visible = false;
        pictureBox11->Visible = true;
    }

}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    MyData::total_(1);
    textBox9->Text = "0,0";
    /*Serial->WriteLine("1");
    textBox9->Text = "0.0";*/
}
private: System::Void btSutDown_Click(System::Object^ sender, System::EventArgs^ e) {
   
    WinExec("shutdown -s -t 0", SW_HIDE); 
    return;

    
}


private: System::Void bt_trim_Click_1(System::Object^ sender, System::EventArgs^ e) {
    double totalImpulses = MyData::totalImpulsesR();
    double scalingFactor = MyData::scalingFactorR();
    MyData::if_weight_totalImpulses_(totalImpulses / scalingFactor);

    MyData::weight_(false);
    textBox33->Text = MyData::if_weight_totalImpulsesR().ToString();
    
    MyData::total_weight_(1);
    textBox9->Text = "0,0";
    //Serial->WriteLine("1");
    recordWeight = gcnew ShowWindowOrWeigth::WeightInfoClass(textBox7->Text, tControler->Text, tMachine->Text, textBox6->Text, textBox2->Text, "t", scalingFactor);
    recordWeight->SetIP(tboxTransmitData->Text);
    recordWeight->ShowDialog();

    bool result = recordWeight->GetResult();
    if (result == true)
    {
        double qqmm = recordWeight->GetResultDouble();
        double c1 = MyData::countMR();
        double c2 = MyData::countM2R();
        MyData::countM_(c1 + qqmm);
        MyData::countM2_(c2 + qqmm);
        label12->Text = MyData::countMR().ToString("F1");
        label13->Text = MyData::countM2R().ToString("F1");

        //double qqmm = recordWeight->GetResultDouble();
        //countM += qqmm;
        //countM2 += qqmm;
        //label12->Text = countM.ToString("F1");
        //label13->Text = countM2.ToString("F1");

        double trim_m_ = recordWeight->ForTrim(); 
        int q1 = MyData::q_trimR() + 1;
        double m2 = MyData::m_trimR() + trim_m_;

        MyData::q_trim_(q1);
        MyData::m_trim_(m2);
        l_quantity_trim->Text = MyData::q_trimR().ToString();
        l_meters_trim->Text = MyData::m_trimR().ToString("F1");

        //Serial->WriteLine(textBox33->Text);
        
        MyData::weight_(true);

        question = gcnew QuestionWindow::Question("�������� ����� � �������� �����?");
        question->ShowDialog();
        bool r = question->GetResultQ();
        if (r == true)
        {
            int c = MyData::cutsR();
            MyData::m_trim_(c + 1);
            textBox4->Text = MyData::cutsR().ToString();

        }
        else
        {
            //return;
        }
        delete question;
        delete recordWeight;
        int countImpulse = Convert::ToInt32(MyData::if_weight_totalImpulsesR());

        //Serial->WriteLine(countImpulse.ToString()); 
    }
    else if (result == false)
    {
        MyData::weight_(true);
        delete question;
        delete recordWeight;
        int countImpulse = Convert::ToInt32(MyData::if_weight_totalImpulsesR());

        //Serial->WriteLine(countImpulse.ToString()); 
    }
    writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
}






#pragma region scalFactor
           void readFile() {
               try
               {
                   //std::string tkey = str_f(tMachine->Text);
                   int key = 0;
                   std::string line;
                   std::string line2;
                   std::string line3;
                   std::ifstream in("C:\\image\\crypto_key.txt"); // �������� ���� ��� ������
                   if (in.is_open())
                   {
                       if (std::getline(in, line))
                       {
                           line = decryptEncrypt(line, 78);
                           String^ t_m = gcnew String(line.c_str());
                           tMachine->Text = t_m;

                           //std::cout << line << std::endl;
                       }
                       key = Convert::ToInt32(tMachine->Text) + 7;
                       if (std::getline(in, line2))
                       {
                           line2 = decryptEncrypt(line2, key);
                           MyData::scalingFactor_(std::stod(line2)); //.replace(line2.find(","), 1, ".")
                           String^ text = gcnew String(std::to_string(MyData::scalingFactorR()).c_str());
                           textBox33->Text = text;
                           //std::cout << line2 << std::endl;
                       }
                       if (std::getline(in, line3))
                       {
                           line3 = decryptEncrypt(line3, key);
                           //String^ time = gcnew String(buffer);
                           //String^ l = line3.ToString();
                           //line3 = l.replace("","");
                           int index_printer = std::stoi(line3);
                           cboxPrinter->SelectedIndex = index_printer; 
                           //std::cout << line << std::endl;
                       }

                   }
                   in.close();     // ��������� ����	
               }
               catch (const std::exception&)
               {
                   ShowCustomMessageBox("�� ������� ���������� scal");
                   //ShowCustomMessageBox(std::exception&);
                   //ShowCustomMessageBox(exception&);
                   //Close();

               }

           }
           void writeFile(std::string scal) {
               int key = Convert::ToInt32(tMachine->Text) + 7;
               //= str_f("0.032");
               std::ofstream out;							// ����� ��� ������
               out.open("C:\\image\\crypto_key.txt");      // ��������� ���� ��� ������

               if (out.is_open())
               {
                   out << encryptDecrypt(scal, key) << std::endl;
               }
               out.close();
               //std::cout << "File has been written" << std::endl;
           }
           void writeFile_roll_and_trim(String^ s1, String^ s2, String^ s3)
           {
               std::string roll = str_f(s1);
               std::string q_trim = str_f(s2);
               std::string m_trim = str_f(s3);
               //std::string m_trim = str_f(s3);

               std::ofstream in;
               in.open("C:\\image\\trim_info.txt");
               if (in.is_open())
               {
                   in << roll << std::endl;
                   in << q_trim << std::endl;
                   in << m_trim << std::endl;
                   //in << << std::endl;
                   //in << << std::endl;
               }
               in.close(); 
           }
           void readFile_roll_and_trim()
           {
               std::string line1 = "";
               std::string line2 = "";
               std::string line3 = "";

               std::ifstream in("C:\\image\\trim_info.txt");

               if (in.is_open())
               {
                   if (std::getline(in, line1))
                   {
                       //line1 = line1;
                       if (line1.length() == 8)
                       {
                           String^ roll = gcnew String(line1.c_str());
                           textBox2->Text = roll;
                       }
                       
                   }
                   if (std::getline(in, line2))
                   {
                       line2 = line2;
                       String^ q_t = gcnew String(line2.c_str());
                       l_quantity_trim->Text = q_t; 
                       try
                       {
                           MyData::q_trim_(double::Parse(l_quantity_trim->Text->Replace(".", ",")));
                       }
                       catch (...)
                       {

                       }
                       
                   }
                   if (std::getline(in, line3))
                   {
                       line3 = line3;
                       String^ m_t = gcnew String(line3.c_str());
                       l_meters_trim->Text = m_t;
                       try 
                       {
                           MyData::m_trim_(double::Parse(l_meters_trim->Text->Replace(".", ",")));
                       }
                       catch (...)
                       {

                       }

                       
                   }
               }
           }
#pragma endregion

private: System::Void bt_trim_minus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox2->Text->Length == 8)
    {
        if (MyData::q_trimR() > 0)
        {
            int q = MyData::q_trimR() - 1;
            double m = MyData::m_trimR() - 0.1;

            MyData::q_trim_(q);
            MyData::m_trim_(m - 0.1);
            l_quantity_trim->Text = MyData::q_trimR().ToString();
            l_meters_trim->Text = MyData::m_trimR().ToString("F1");
            try
            {
                writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
            }
            catch (const std::exception&)
            {
                //std::string s = exception;
            }
            question = gcnew QuestionWindow::Question("������ ����� �� ��������� ������?");
            question->ShowDialog();

            bool r = question->GetResultQ();
            if (r == true) 
            {
                int q2 = MyData::cutsR() - 1;
                MyData::cuts_(q2);
                textBox4->Text = MyData::cutsR().ToString();

            }
            else
            {
                return;
            }
        }
    }
    else
    {
        ShowCustomMessageBox("������� ����� ������ :)");
        textBox2->Focus();
    }
    
}
private: System::Void bt_trim_plus_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox2->Text->Length == 8) 
    {
        int q = MyData::q_trimR() + 1;
        double m = MyData::m_trimR() + 0.1;

        MyData::q_trim_(q);
        MyData::m_trim_(m + 0.1);
        l_quantity_trim->Text = MyData::q_trimR().ToString();
        l_meters_trim->Text = MyData::m_trimR().ToString("F1");
        try
        {
            writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
        }
        catch (const std::exception&)
        {

        }
        question = gcnew QuestionWindow::Question("�������� ����� � �������� �����?");
        question->ShowDialog();

        bool r = question->GetResultQ();
        if (r == true)
        {
            int q2 = MyData::cutsR() - 1;
            MyData::cuts_(q2);
            textBox4->Text = MyData::cutsR().ToString();
            

        }
        else
        {
            return;
        }
    }
    else
    {
        ShowCustomMessageBox("������� ����� ������ :)");
        textBox2->Focus();
    }
    
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (textBox2->Text->Length == 8) {
        question = gcnew QuestionWindow::Question("�� ������ ��������� �����?");
        question->ShowDialog();

        bool result = question->GetResultQ();

        if (result == true) {
            if (l_meters_trim->Text != "0.0" && l_meters_trim->Text != "0,0") {
                sendTrim();
            }
            else
            {
                ShowCustomMessageBox("����� ������� ����������� :)");
                textBox2->Text = "";
                textBox2->Focus();
                writeFile_roll_and_trim(textBox2->Text, l_quantity_trim->Text, l_meters_trim->Text);
            }

            delete question;
        }
        else if (result == false) {

            delete question;
            
        }
    }
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {

}


private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
    if (checkBox1->Checked) {
        bt_uv_plus->Visible = false;
        bt_uv_minus->Visible = false;
        /*btuv_1;
        btuv_2;
        btuv_3;
        btuv_4;
        btuv_0;*/


    }
    else {
        bt_uv_plus->Visible = true;
        bt_uv_minus->Visible = true;
    }
}
};


}
