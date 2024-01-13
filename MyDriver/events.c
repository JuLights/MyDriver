#pragma warning (disable : 4047)

#include "events.h"
#include "messages.h"
#include "data.h"

PLOAD_IMAGE_NOTIFY_ROUTINE ImageLoadCallback(PUNICODE_STRING FullImageName, HANDLE ProcessId, PIMAGE_INFO ImageInfo)
{
	//every dll loaded , we don't need spam!
	//DebugMessage("ImageLoaded: %ls \n", FullImageName->Buffer);

	if (wcsstr(FullImageName->Buffer, L"\\game\\csgo\\bin\\win64\\client.dll"))
	{
		DebugMessage("CS2 client.dll found \n");
		CS2ClientDLLAddress = ImageInfo->ImageBase;

		DebugMessage("ProcessID: %d \n", ProcessId);
	}

	return STATUS_SUCCESS;
}