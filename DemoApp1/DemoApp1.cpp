// WindbgDemoProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "..\SampleAtlProject\SampleAtlProject_i.h"
#include "..\SampleAtlProject\SampleAtlProject_i.c"
using namespace std;

// This function will throw array bound exception
void DivideByZeroException(int val)
{
	int arr[5] = {1,2,3,3,4};
	cout << "I am going to crash";
	int i = 20/val;
	throw string("divide by zero exception");
}

// This function will crash becuase of exception from com object
void CallCOMDll()
{
	CoInitializeEx(nullptr, COINITBASE_MULTITHREADED);
	CComPtr<IAtlSimpleObject> atlsimpleObject;
	//CoCreateInstance(CLSID_AtlSimpleObject, nullptr, CLSCTX_INPROC_SERVER, IID_IAtlSimpleObject, atlsimpleObject);
	HRESULT hr = atlsimpleObject.CoCreateInstance(CLSID_AtlSimpleObject);
	if(hr==S_OK)
	{
		BSTR bstrMsg;
		atlsimpleObject->get_GetHelloMessage(&bstrMsg);
		//Convert a bstr to asci for printing from cout
		CString retval = (LPCWSTR)bstrMsg;
		CT2A ascii(retval);		
		cout<<ascii.m_psz<<endl;
		//Lets crash it
		atlsimpleObject->IWillCrash();
	}

	CoUninitialize();
}



int _tmain(int argc, _TCHAR* argv[])
{
	cout<< "Please enter options, option 1 to crash a native application" <<endl;
	cout<<	"and 2 to crash from a com dll" <<endl;
	int option;
	int val = 0;
	cin>> option;
	if(option == 1)
	{
		DivideByZeroException(val);
	}
	else
	{
		CallCOMDll();
	}
	return 0;
}

