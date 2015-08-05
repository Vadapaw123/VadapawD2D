//
// Generated file, do not edit! Created by nedtool 4.6 from src/common/LteControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LteControlInfo_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

UserControlInfo_Base::UserControlInfo_Base() : ::cObject()
{
    this->sourceId_var = 0;
    this->destId_var = 0;
    this->direction_var = 0;
    this->traffic_var = 0;
    this->lcid_var = 0;
    this->acid_var = 0;
    this->cw_var = 0;
    this->txNumber_var = 0;
    this->ndi_var = true;
    this->isCorruptible_var = 0;
    this->isBroadcast_var = false;
    this->deciderResult_var = 0;
    this->blerTh_var = 0;
    this->blerValue_var = 0;
    this->txMode_var = 0;
    this->frameType_var = 0;
    this->txPower_var = 0;
    this->totalGrantedBlocks_var = 0;
}

UserControlInfo_Base::UserControlInfo_Base(const UserControlInfo_Base& other) : ::cObject(other)
{
    copy(other);
}

UserControlInfo_Base::~UserControlInfo_Base()
{
}

UserControlInfo_Base& UserControlInfo_Base::operator=(const UserControlInfo_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void UserControlInfo_Base::copy(const UserControlInfo_Base& other)
{
    this->sourceId_var = other.sourceId_var;
    this->destId_var = other.destId_var;
    this->direction_var = other.direction_var;
    this->traffic_var = other.traffic_var;
    this->lcid_var = other.lcid_var;
    this->acid_var = other.acid_var;
    this->cw_var = other.cw_var;
    this->txNumber_var = other.txNumber_var;
    this->ndi_var = other.ndi_var;
    this->isCorruptible_var = other.isCorruptible_var;
    this->isBroadcast_var = other.isBroadcast_var;
    this->deciderResult_var = other.deciderResult_var;
    this->blerTh_var = other.blerTh_var;
    this->blerValue_var = other.blerValue_var;
    this->txMode_var = other.txMode_var;
    this->frameType_var = other.frameType_var;
    this->txPower_var = other.txPower_var;
    this->totalGrantedBlocks_var = other.totalGrantedBlocks_var;
}

void UserControlInfo_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->sourceId_var);
    doPacking(b,this->destId_var);
    doPacking(b,this->direction_var);
    doPacking(b,this->traffic_var);
    doPacking(b,this->lcid_var);
    doPacking(b,this->acid_var);
    doPacking(b,this->cw_var);
    doPacking(b,this->txNumber_var);
    doPacking(b,this->ndi_var);
    doPacking(b,this->isCorruptible_var);
    doPacking(b,this->isBroadcast_var);
    doPacking(b,this->deciderResult_var);
    doPacking(b,this->blerTh_var);
    doPacking(b,this->blerValue_var);
    doPacking(b,this->txMode_var);
    doPacking(b,this->frameType_var);
    doPacking(b,this->txPower_var);
    doPacking(b,this->totalGrantedBlocks_var);
}

void UserControlInfo_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->sourceId_var);
    doUnpacking(b,this->destId_var);
    doUnpacking(b,this->direction_var);
    doUnpacking(b,this->traffic_var);
    doUnpacking(b,this->lcid_var);
    doUnpacking(b,this->acid_var);
    doUnpacking(b,this->cw_var);
    doUnpacking(b,this->txNumber_var);
    doUnpacking(b,this->ndi_var);
    doUnpacking(b,this->isCorruptible_var);
    doUnpacking(b,this->isBroadcast_var);
    doUnpacking(b,this->deciderResult_var);
    doUnpacking(b,this->blerTh_var);
    doUnpacking(b,this->blerValue_var);
    doUnpacking(b,this->txMode_var);
    doUnpacking(b,this->frameType_var);
    doUnpacking(b,this->txPower_var);
    doUnpacking(b,this->totalGrantedBlocks_var);
}

uint16 UserControlInfo_Base::getSourceId() const
{
    return sourceId_var;
}

void UserControlInfo_Base::setSourceId(uint16 sourceId)
{
    this->sourceId_var = sourceId;
}

uint16 UserControlInfo_Base::getDestId() const
{
    return destId_var;
}

void UserControlInfo_Base::setDestId(uint16 destId)
{
    this->destId_var = destId;
}

unsigned short UserControlInfo_Base::getDirection() const
{
    return direction_var;
}

void UserControlInfo_Base::setDirection(unsigned short direction)
{
    this->direction_var = direction;
}

unsigned short UserControlInfo_Base::getTraffic() const
{
    return traffic_var;
}

void UserControlInfo_Base::setTraffic(unsigned short traffic)
{
    this->traffic_var = traffic;
}

uint16 UserControlInfo_Base::getLcid() const
{
    return lcid_var;
}

void UserControlInfo_Base::setLcid(uint16 lcid)
{
    this->lcid_var = lcid;
}

unsigned char UserControlInfo_Base::getAcid() const
{
    return acid_var;
}

void UserControlInfo_Base::setAcid(unsigned char acid)
{
    this->acid_var = acid;
}

unsigned char UserControlInfo_Base::getCw() const
{
    return cw_var;
}

void UserControlInfo_Base::setCw(unsigned char cw)
{
    this->cw_var = cw;
}

unsigned char UserControlInfo_Base::getTxNumber() const
{
    return txNumber_var;
}

void UserControlInfo_Base::setTxNumber(unsigned char txNumber)
{
    this->txNumber_var = txNumber;
}

bool UserControlInfo_Base::getNdi() const
{
    return ndi_var;
}

void UserControlInfo_Base::setNdi(bool ndi)
{
    this->ndi_var = ndi;
}

bool UserControlInfo_Base::getIsCorruptible() const
{
    return isCorruptible_var;
}

void UserControlInfo_Base::setIsCorruptible(bool isCorruptible)
{
    this->isCorruptible_var = isCorruptible;
}

bool UserControlInfo_Base::getIsBroadcast() const
{
    return isBroadcast_var;
}

void UserControlInfo_Base::setIsBroadcast(bool isBroadcast)
{
    this->isBroadcast_var = isBroadcast;
}

bool UserControlInfo_Base::getDeciderResult() const
{
    return deciderResult_var;
}

void UserControlInfo_Base::setDeciderResult(bool deciderResult)
{
    this->deciderResult_var = deciderResult;
}

double UserControlInfo_Base::getBlerTh() const
{
    return blerTh_var;
}

void UserControlInfo_Base::setBlerTh(double blerTh)
{
    this->blerTh_var = blerTh;
}

double UserControlInfo_Base::getBlerValue() const
{
    return blerValue_var;
}

void UserControlInfo_Base::setBlerValue(double blerValue)
{
    this->blerValue_var = blerValue;
}

unsigned short UserControlInfo_Base::getTxMode() const
{
    return txMode_var;
}

void UserControlInfo_Base::setTxMode(unsigned short txMode)
{
    this->txMode_var = txMode;
}

unsigned int UserControlInfo_Base::getFrameType() const
{
    return frameType_var;
}

void UserControlInfo_Base::setFrameType(unsigned int frameType)
{
    this->frameType_var = frameType;
}

double UserControlInfo_Base::getTxPower() const
{
    return txPower_var;
}

void UserControlInfo_Base::setTxPower(double txPower)
{
    this->txPower_var = txPower;
}

unsigned int UserControlInfo_Base::getTotalGrantedBlocks() const
{
    return totalGrantedBlocks_var;
}

void UserControlInfo_Base::setTotalGrantedBlocks(unsigned int totalGrantedBlocks)
{
    this->totalGrantedBlocks_var = totalGrantedBlocks;
}

class UserControlInfoDescriptor : public cClassDescriptor
{
  public:
    UserControlInfoDescriptor();
    virtual ~UserControlInfoDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(UserControlInfoDescriptor);

UserControlInfoDescriptor::UserControlInfoDescriptor() : cClassDescriptor("UserControlInfo", "cObject")
{
}

UserControlInfoDescriptor::~UserControlInfoDescriptor()
{
}

bool UserControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UserControlInfo_Base *>(obj)!=NULL;
}

const char *UserControlInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UserControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 18+basedesc->getFieldCount(object) : 18;
}

unsigned int UserControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<18) ? fieldTypeFlags[field] : 0;
}

const char *UserControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sourceId",
        "destId",
        "direction",
        "traffic",
        "lcid",
        "acid",
        "cw",
        "txNumber",
        "ndi",
        "isCorruptible",
        "isBroadcast",
        "deciderResult",
        "blerTh",
        "blerValue",
        "txMode",
        "frameType",
        "txPower",
        "totalGrantedBlocks",
    };
    return (field>=0 && field<18) ? fieldNames[field] : NULL;
}

int UserControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceId")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destId")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "direction")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "traffic")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "lcid")==0) return base+4;
    if (fieldName[0]=='a' && strcmp(fieldName, "acid")==0) return base+5;
    if (fieldName[0]=='c' && strcmp(fieldName, "cw")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "txNumber")==0) return base+7;
    if (fieldName[0]=='n' && strcmp(fieldName, "ndi")==0) return base+8;
    if (fieldName[0]=='i' && strcmp(fieldName, "isCorruptible")==0) return base+9;
    if (fieldName[0]=='i' && strcmp(fieldName, "isBroadcast")==0) return base+10;
    if (fieldName[0]=='d' && strcmp(fieldName, "deciderResult")==0) return base+11;
    if (fieldName[0]=='b' && strcmp(fieldName, "blerTh")==0) return base+12;
    if (fieldName[0]=='b' && strcmp(fieldName, "blerValue")==0) return base+13;
    if (fieldName[0]=='t' && strcmp(fieldName, "txMode")==0) return base+14;
    if (fieldName[0]=='f' && strcmp(fieldName, "frameType")==0) return base+15;
    if (fieldName[0]=='t' && strcmp(fieldName, "txPower")==0) return base+16;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalGrantedBlocks")==0) return base+17;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UserControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16",
        "uint16",
        "unsigned short",
        "unsigned short",
        "uint16",
        "unsigned char",
        "unsigned char",
        "unsigned char",
        "bool",
        "bool",
        "bool",
        "bool",
        "double",
        "double",
        "unsigned short",
        "unsigned int",
        "double",
        "unsigned int",
    };
    return (field>=0 && field<18) ? fieldTypeStrings[field] : NULL;
}

const char *UserControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "Direction";
            return NULL;
        case 3:
            if (!strcmp(propertyname,"enum")) return "LteTrafficClass";
            return NULL;
        case 14:
            if (!strcmp(propertyname,"enum")) return "TxMode";
            return NULL;
        case 15:
            if (!strcmp(propertyname,"enum")) return "LtePhyFrameType";
            return NULL;
        default: return NULL;
    }
}

int UserControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UserControlInfo_Base *pp = (UserControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UserControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UserControlInfo_Base *pp = (UserControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSourceId());
        case 1: return ulong2string(pp->getDestId());
        case 2: return ulong2string(pp->getDirection());
        case 3: return ulong2string(pp->getTraffic());
        case 4: return ulong2string(pp->getLcid());
        case 5: return ulong2string(pp->getAcid());
        case 6: return ulong2string(pp->getCw());
        case 7: return ulong2string(pp->getTxNumber());
        case 8: return bool2string(pp->getNdi());
        case 9: return bool2string(pp->getIsCorruptible());
        case 10: return bool2string(pp->getIsBroadcast());
        case 11: return bool2string(pp->getDeciderResult());
        case 12: return double2string(pp->getBlerTh());
        case 13: return double2string(pp->getBlerValue());
        case 14: return ulong2string(pp->getTxMode());
        case 15: return ulong2string(pp->getFrameType());
        case 16: return double2string(pp->getTxPower());
        case 17: return ulong2string(pp->getTotalGrantedBlocks());
        default: return "";
    }
}

bool UserControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UserControlInfo_Base *pp = (UserControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSourceId(string2ulong(value)); return true;
        case 1: pp->setDestId(string2ulong(value)); return true;
        case 2: pp->setDirection(string2ulong(value)); return true;
        case 3: pp->setTraffic(string2ulong(value)); return true;
        case 4: pp->setLcid(string2ulong(value)); return true;
        case 5: pp->setAcid(string2ulong(value)); return true;
        case 6: pp->setCw(string2ulong(value)); return true;
        case 7: pp->setTxNumber(string2ulong(value)); return true;
        case 8: pp->setNdi(string2bool(value)); return true;
        case 9: pp->setIsCorruptible(string2bool(value)); return true;
        case 10: pp->setIsBroadcast(string2bool(value)); return true;
        case 11: pp->setDeciderResult(string2bool(value)); return true;
        case 12: pp->setBlerTh(string2double(value)); return true;
        case 13: pp->setBlerValue(string2double(value)); return true;
        case 14: pp->setTxMode(string2ulong(value)); return true;
        case 15: pp->setFrameType(string2ulong(value)); return true;
        case 16: pp->setTxPower(string2double(value)); return true;
        case 17: pp->setTotalGrantedBlocks(string2ulong(value)); return true;
        default: return false;
    }
}

const char *UserControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *UserControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UserControlInfo_Base *pp = (UserControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


