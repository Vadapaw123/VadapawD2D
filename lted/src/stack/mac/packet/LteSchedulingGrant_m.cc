//
// Generated file, do not edit! Created by nedtool 4.6 from src/stack/mac/packet/LteSchedulingGrant.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LteSchedulingGrant_m.h"

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

LteSchedulingGrant_Base::LteSchedulingGrant_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->periodic_var = 0;
    this->period_var = 0;
    this->expiration_var = 0;
    this->totalGrantedBlocks_var = 0;
    this->codewords_var = 0;
}

LteSchedulingGrant_Base::LteSchedulingGrant_Base(const LteSchedulingGrant_Base& other) : ::cPacket(other)
{
    copy(other);
}

LteSchedulingGrant_Base::~LteSchedulingGrant_Base()
{
}

LteSchedulingGrant_Base& LteSchedulingGrant_Base::operator=(const LteSchedulingGrant_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void LteSchedulingGrant_Base::copy(const LteSchedulingGrant_Base& other)
{
    this->periodic_var = other.periodic_var;
    this->period_var = other.period_var;
    this->expiration_var = other.expiration_var;
    this->totalGrantedBlocks_var = other.totalGrantedBlocks_var;
    this->codewords_var = other.codewords_var;
}

void LteSchedulingGrant_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->periodic_var);
    doPacking(b,this->period_var);
    doPacking(b,this->expiration_var);
    doPacking(b,this->totalGrantedBlocks_var);
    doPacking(b,this->codewords_var);
    // field grantedCwBytes is abstract -- please do packing in customized class
}

void LteSchedulingGrant_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->periodic_var);
    doUnpacking(b,this->period_var);
    doUnpacking(b,this->expiration_var);
    doUnpacking(b,this->totalGrantedBlocks_var);
    doUnpacking(b,this->codewords_var);
    // field grantedCwBytes is abstract -- please do unpacking in customized class
}

bool LteSchedulingGrant_Base::getPeriodic() const
{
    return periodic_var;
}

void LteSchedulingGrant_Base::setPeriodic(bool periodic)
{
    this->periodic_var = periodic;
}

unsigned int LteSchedulingGrant_Base::getPeriod() const
{
    return period_var;
}

void LteSchedulingGrant_Base::setPeriod(unsigned int period)
{
    this->period_var = period;
}

unsigned int LteSchedulingGrant_Base::getExpiration() const
{
    return expiration_var;
}

void LteSchedulingGrant_Base::setExpiration(unsigned int expiration)
{
    this->expiration_var = expiration;
}

unsigned int LteSchedulingGrant_Base::getTotalGrantedBlocks() const
{
    return totalGrantedBlocks_var;
}

void LteSchedulingGrant_Base::setTotalGrantedBlocks(unsigned int totalGrantedBlocks)
{
    this->totalGrantedBlocks_var = totalGrantedBlocks;
}

unsigned int LteSchedulingGrant_Base::getCodewords() const
{
    return codewords_var;
}

void LteSchedulingGrant_Base::setCodewords(unsigned int codewords)
{
    this->codewords_var = codewords;
}

class LteSchedulingGrantDescriptor : public cClassDescriptor
{
  public:
    LteSchedulingGrantDescriptor();
    virtual ~LteSchedulingGrantDescriptor();

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

Register_ClassDescriptor(LteSchedulingGrantDescriptor);

LteSchedulingGrantDescriptor::LteSchedulingGrantDescriptor() : cClassDescriptor("LteSchedulingGrant", "cPacket")
{
}

LteSchedulingGrantDescriptor::~LteSchedulingGrantDescriptor()
{
}

bool LteSchedulingGrantDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LteSchedulingGrant_Base *>(obj)!=NULL;
}

const char *LteSchedulingGrantDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LteSchedulingGrantDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int LteSchedulingGrantDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *LteSchedulingGrantDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "periodic",
        "period",
        "expiration",
        "totalGrantedBlocks",
        "codewords",
        "grantedCwBytes",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int LteSchedulingGrantDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "periodic")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "period")==0) return base+1;
    if (fieldName[0]=='e' && strcmp(fieldName, "expiration")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalGrantedBlocks")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "codewords")==0) return base+4;
    if (fieldName[0]=='g' && strcmp(fieldName, "grantedCwBytes")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LteSchedulingGrantDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *LteSchedulingGrantDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int LteSchedulingGrantDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LteSchedulingGrant_Base *pp = (LteSchedulingGrant_Base *)object; (void)pp;
    switch (field) {
        case 5: return pp->getGrantedCwBytesArraySize();
        default: return 0;
    }
}

std::string LteSchedulingGrantDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LteSchedulingGrant_Base *pp = (LteSchedulingGrant_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getPeriodic());
        case 1: return ulong2string(pp->getPeriod());
        case 2: return ulong2string(pp->getExpiration());
        case 3: return ulong2string(pp->getTotalGrantedBlocks());
        case 4: return ulong2string(pp->getCodewords());
        case 5: return ulong2string(pp->getGrantedCwBytes(i));
        default: return "";
    }
}

bool LteSchedulingGrantDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LteSchedulingGrant_Base *pp = (LteSchedulingGrant_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setPeriodic(string2bool(value)); return true;
        case 1: pp->setPeriod(string2ulong(value)); return true;
        case 2: pp->setExpiration(string2ulong(value)); return true;
        case 3: pp->setTotalGrantedBlocks(string2ulong(value)); return true;
        case 4: pp->setCodewords(string2ulong(value)); return true;
        case 5: pp->setGrantedCwBytes(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *LteSchedulingGrantDescriptor::getFieldStructName(void *object, int field) const
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

void *LteSchedulingGrantDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LteSchedulingGrant_Base *pp = (LteSchedulingGrant_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


