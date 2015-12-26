#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

typedef struct
{
    int cellIndex;
    int phyPortNum;
    string txlDn;
    int pMax;
}txlInfo;

vector<txlInfo> txlInfoList;

txlInfo txl1 = {1, 0, "CELL1_PORT0_TX_L", 40};
txlInfo txl2 = {1, 1, "CELL1_PORT1_TX_L", 40};
txlInfo txl3 = {2, 0, "CELL2_PORT0_TX_L", 50};
txlInfo txl4 = {2, 1, "CELL2_PORT1_TX_L", 50};
txlInfo txl5 = {2, 2, "CELL2_PORT2_TX_L", 50};

void initTxLInfoList()
{
    txlInfoList.push_back(txl1);
    txlInfoList.push_back(txl2);
    txlInfoList.push_back(txl3);
    txlInfoList.push_back(txl4);
    txlInfoList.push_back(txl5);
}

typedef struct
{
    int cellIndex;
    int phyPortNum;
}txlKey;

struct cmp_txlKey
{
    bool operator()(const txlKey &k1, const txlKey &k2) const
    {
        if (k1.cellIndex != k2.cellIndex)
        {
            return k1.cellIndex < k2.cellIndex;
        }

        if (k1.phyPortNum != k2.phyPortNum)
        {
            return k1.phyPortNum < k2.phyPortNum;
        }

        return false;
    }
};

typedef struct 
{
    string txlDn;
    int pMax;
}txlResult;

typedef map<txlKey, txlResult, cmp_txlKey> txlInfoMap;
txlInfoMap txlInfoMapping;

void initTxlInfoMapping()
{
    vector<txlInfo>::iterator it = txlInfoList.begin();
    for (; it != txlInfoList.end(); it++)
    {
        txlKey key;
        txlResult result;

        key.cellIndex = (*it).cellIndex;
        key.phyPortNum = (*it).phyPortNum;

        result.txlDn = (*it).txlDn;
        result.pMax = (*it).pMax;

        txlInfoMapping[key] = result;
    }
}

void OutputTxlInfoMapping()
{
    txlInfoMap::iterator it = txlInfoMapping.begin();
    int i = 1;
    for (; it != txlInfoMapping.end(); it++)
    {
        cout << "-----------item " << i << "----------"<< endl;
        cout << "cellIndex: " << (it->first).cellIndex << "\tphyPort: " << (it->first).phyPortNum << endl;
        cout << "txDn: " << (it->second).txlDn << "\tpMax: " << (it->second).pMax << endl;
    }
}

void changeTheValueofMap()
{
    txlKey key1;
    key1.cellIndex  = 1;
    key1.phyPortNum = 1;

    txlInfoMap::iterator it = txlInfoMapping.find(key1);
    if (it != txlInfoMapping.end())
    {
        cout << "result1 found: txLDn = " << (it->second).txlDn << "\tpMax = " << (it->second).pMax << endl;

        //if found, i am gonna change it.
        (it->second).txlDn = "Changed to anthoer dn.";
        (it->second).pMax  = 100;
    }
    else
    {
        cout << "key1 NOT found." << endl;
    }

    it = txlInfoMapping.find(key1);
    if (it != txlInfoMapping.end())
    {
        cout << "NEW result1 found: txLDn = " << (it->second).txlDn << "\tpMax = " << (it->second).pMax << endl;
    }
    else
    {
        cout << "NEW key1 NOT found." << endl;
    }
}

int main()
{
    initTxLInfoList();
    initTxlInfoMapping();
    OutputTxlInfoMapping();

    txlKey key1, key2;
    key1.cellIndex  = 1;
    key1.phyPortNum = 1;

    txlInfoMap::iterator it = txlInfoMapping.find(key1);
    if (it != txlInfoMapping.end())
    {
        cout << "result1 found: txLDn = " << (it->second).txlDn << "\tpMax = " << (it->second).pMax << endl;
    }
    else
    {
        cout << "key1 NOT found." << endl;
    }

    key2.cellIndex  = 3;
    key2.phyPortNum = 1;

    it = txlInfoMapping.find(key2);
    if (it != txlInfoMapping.end())
    {
        cout << "result2 found: txLDn = " << (it->second).txlDn << "\tpMax = " << (it->second).pMax << endl;
    }
    else
    {
        cout << "key2 NOT found." << endl;
    }
    changeTheValueofMap();

    return 0;
}
