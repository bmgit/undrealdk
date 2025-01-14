#ifndef CALIBRATIONSAMPLE_1B0528E1
#define CALIBRATIONSAMPLE_1B0528E1

#ifdef CALIBRATIONSAMPLE_EXPORTS 
	#define CALIBRATIONSAMPLE_API _declspec(dllexport) __cdecl
#else
	#define CALIBRATIONSAMPLE_API _declspec(dllimport) __cdecl
#endif

//	��������� �� �������, ������� ����� ������������ ���������� ��� ������� ��������
typedef int (*DeviceFun)(int r);

//-------------------------------------------------------------------------------
//	������ ������ ��� ������ � ���������										|
//-------------------------------------------------------------------------------
const int CALIBSAMPLE_NOERROR		= 0;			//	��� ������
const int CALIBSAMPLE_ERRINIT		= 1;			//	������ ������������� ����������
const int CALIBSAMPLE_ERRDATA		= 2;			//	������ � ������������� ������
const int CALIBSAMPLE_ERRSTATE		= 3;			//	�������������� ��������� ���������� � ������ �������
const int CALIBSAMPLE_WRONGDEVICE	= 4;			//	��������� � �������������� ����������

//---------------------------------------------------------------------------
//	����������� ������� ��� �������� �������� ��������� �� ����������		|
//..........................................................................|
//	id		:	������������� ����������									|
//	name	:	��������� ������������� ����������							|
//	pFun	:	��������� �� ������� ��� ������� �������� �� ����������		|
//---------------------------------------------------------------------------
extern "C" int CALIBRATIONSAMPLE_API RegisterDeviceFunction(int id, const wchar_t * name, DeviceFun pFun);

//---------------------------------------------------------------------------
//	������� ���� ��������������� ������	�� �����������						|
//---------------------------------------------------------------------------
extern "C" void CALIBRATIONSAMPLE_API ClearRegistrations();

//---------------------------------------------------------------------------
//	������� ��� ������� ������������� ������ ����������						|
//..........................................................................|
//	id	:	������������� ����������										|
//---------------------------------------------------------------------------
extern "C" int CALIBRATIONSAMPLE_API ClearCalibrationData(int id);

//---------------------------------------------------------------------------
//	������� ��� ������� ������������� ������								|
//..........................................................................|
//	id	:	������������� ����������										|
//	r	:	�������� ���������												|
//	v	:	�������� �� ����������											|
//---------------------------------------------------------------------------
extern "C" int CALIBRATIONSAMPLE_API AddCalibrationData(int id, int r, double v);

//---------------------------------------------------------------------------
//	������� �� ���������� ����������										|
//..........................................................................|
//	id			:	������������� ����������								|
//	[retval]	:	������������ ����� ������								|
//---------------------------------------------------------------------------
extern "C" int CALIBRATIONSAMPLE_API CalibrateDevice(int id);

//---------------------------------------------------------------------------
//	������� ��� ������� �������� �� ������ ������� � ��������������� ���������
//---------------------------------------------------------------------------
//	id			:	������������� ����������								|
//  v			:	��������� ��������										|
//	[retval]	:	������������ ����� ������								|
//---------------------------------------------------------------------------
extern "C" int CALIBRATIONSAMPLE_API ShowDeviceValue(int id, double v);

//---------------------------------------------------------------------------
//	������� ��� ������� �������� ��������� � ����������������� ����������	|
//---------------------------------------------------------------------------
//	id			:	������������� ����������								|
//  r			:	��������� ��������										|
//	[retval]	:	������������ ����� ������								|
//---------------------------------------------------------------------------
extern "C" int CALIBRATIONSAMPLE_API ShowDeviceResistor(int id, int r);

#endif // CALIBRATIONSAMPLE_1B0528E1