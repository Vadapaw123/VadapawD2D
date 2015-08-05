//
// Generated file, do not edit! Created by nedtool 4.6 from src/stack/mac/packet/LteHarqFeedback.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LteHarqFeedback_m.h"

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

Register_Class(LteHarqFeedback);

LteHarqFeedback::LteHarqFeedback(const char *name, int kind) : ::cPacket(name,kind)
{
    this->acid_var = 0;
    this->cw_var = 0;
    this->result_var = 0;
    this->pduId_var = 0;
}

LteHarqFeedback::LteHarqFeedback(const LteHarqFeedback& other) : ::cPacket(other)
{
    copy(other);
}

LteHarqFeedback::~LteHarqFeedback()
{
}

LteHarqFeedback& LteHarqFeedback::operator=(const LteHarqFeedback& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void LteHarqFeedback::copy(const LteHarqFeedback& other)
{
    this->acid_var = other.acid_var;
    this->cw_var = other.cw_var;
    this->result_var = other.result_var;
    this->pduId_var = other.pduId_var;
}

void LteHarqFeedback::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->acid_var);
    doPacking(b,this->cw_var);
    doPacking(b,this->result_var);
    doPacking(b,this->pduId_var);
}

void LteHarqFeedback::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->acid_var);
    doUnpacking(b,this->cw_var);
    doUnpacking(b,this->result_var);
    doUnpacking(b,this->pduId_var);
}

unsigned char LteHarqFeedback::getAcid() const
{
    return acid_var;
}

void LteHarqFeedback::setAcid(unsigned char acid)
{
    this->acid_var = acid;
}

unsigned char LteHarqFeedback::getCw() const
{
    return cw_var;
}

void LteHarqFeedback::setCw(unsigned char cw)
{
    this->cw_var = cw;
}

bool LteHarqFeedback::getResult() const
{
    return result_var;
}

void LteHarqFeedback::setResult(bool result)
{
    this->result_var = result;
}

long LteHarqFeedback::getPduId() const
{
    return pduId_var;
}

void LteHarqFeedback::setPduId(long pduId)
{
    this->pduId_var = pduId;
}

class LteHarqFeedbackDescriptor : public cClassDescriptor
{
  public:
    LteHarqFeedbackDescriptor();
    virtual ~LteHarqFeedbackDescriptor();

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

Register_ClassDescriptor(LteHarqFeedbackDescriptor);

LteHarqFeedbackDescriptor::LteHarqFeedbackDescriptor() : cClassDescriptor("LteHarqFeedback", "cPacket")
{
}

LteHarqFeedbackDescriptor::~LteHarqFeedbackDescriptor()
{
}

bool LteHarqFeedbackDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LteHarqFeedback *>(obj)!=NULL;
}

const char *LteHarqFeedbackDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LteHarqFeedbackDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int LteHarqFeedbackDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *LteHarqFeedbackDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "acid",
        "cw",
        "result",
        "pduId",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int LteHarqFeedbackDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "acid")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cw")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "result")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "pduId")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LteHarqFeedbackDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "unsigned char",
        "bool",
        "long",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *LteHarqFeedbackDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LteHarqFeedbackDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LteHarqFeedback *pp = (LteHarqFeedback *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LteHarqFeedbackDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LteHarqFeedback *pp = (LteHarqFeedback *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getAcid());
        case 1: return ulong2string(pp->getCw());
        case 2: return bool2string(pp->getResult());
        case 3: return long2string(pp->getPduId());
        default: return "";
    }
}

bool LteHarqFeedbackDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LteHarqFeedback *pp = (LteHarqFeedback *)object; (void)pp;
    switch (field) {
        case 0: pp->setAcid(string2ulong(value)); return true;
        case 1: pp->setCw(string2ulong(value)); return true;
        case 2: pp->setResult(string2bool(value)); return true;
        case 3: pp->setPduId(string2long(value)); return true;
        default: return false;
    }
}

const char *LteHarqFeedbackDescriptor::getFieldStructName(void *object, int field) const
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

void *LteHarqFeedbackDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LteHarqFeedback *pp = (LteHarqFeedback *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


