/**********************************************************
        物理内存分配文件KrlMmAlloc.c
***********************************************************
                彭东
**********************************************************/

#ifndef _KRLMMALLOCHEAD
#define _KRLMMALLOCHEAD
private PABHList* ForPmsadNrRetPABListOnMArea(MNode* node, MArea* area, UInt msadnr);
private PABHList* ForPmsadNrRetAllocPABListOnMArea(MNode* node, MArea* area, UInt msadnr);
private PMSAD* PickPMSADsOnPABHList(PABHList* abhlist);
private Bool PutsPMSADsOnPABHList(PABHList* abhlist, PMSAD* msad, UInt order);

#endif