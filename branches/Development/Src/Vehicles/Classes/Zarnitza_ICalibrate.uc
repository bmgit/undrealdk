interface Zarnitza_ICalibrate;

struct CalibrationDataUnit
{
	var int ResistorVal;
	var float DeviceVal;
};

struct CalibrationDevice
{
	var int ID;
	var array<CalibrationDataUnit> CDUs;
};

function int AddCalibrationInfo(int DeviceID, int ResVal, float DeviceValue);
function int Calibrate(int DeviceID);
function int ResetCalibrationData(int DeviceID);
function SaveCalibration();
function LoadCalibrationData();
function int ShowValue(int DeviceID, int val);
function int ShowCalibratedValue(int DeviceID, float val);

DefaultProperties
{
}
