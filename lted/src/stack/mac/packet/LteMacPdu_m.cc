//
// Generated file, do not edit! Created by nedtool 4.6 from src/stack/mac/packet/LteMacPdu.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LteMacPdu_m.h"

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

LteMacPdu_Base::LteMacPdu_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->headerLength_var = 0;
}

LteMacPdu_Base::LteMacPdu_Base(const LteMacPdu_Base& other) : ::cPacket(other)
{
    copy(other);
}

LteMacPdu_Base::~LteMacPdu_Base()
{
}

LteMacPdu_Base& LteMacPdu_Base::operator=(const LteMacPdu_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void LteMacPdu_Base::copy(const LteMacPdu_Base& other)
{
    this->headerLength_var = other.headerLength_var;
}

void LteMacPdu_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    // field sdu is abstract -- please do packing in customized class
    doPacking(b,this->headerLength_var);
}

void LteMacPdu_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    // field sdu is abstract -- please do unpacking in customized class
    doUnpacking(b,this->headerLength_var);
}

unsigned int LteMacPdu_Base::getHeaderLength() const
{
    return headerLength_var;
}

void LteMacPdu_Base::setHeaderLength(unsigned int headerLength)
{
    this->headerLength_var = headerLength;
}

class LteMacPduDescriptor : public cClassDescriptor
{
  public:
    LteMacPduDescriptor();
    virtual ~LteMacPduDescriptor();

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

Register_ClassDescriptor(LteMacPduDescriptor);

LteMacPduDescriptor::LteMacPduDescriptor() : cClassDescriptor("LteMacPdu", "cPacket")
{
}

LteMacPduDescriptor::~LteMacPduDescriptor()
{
}

bool LteMacPduDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LteMacPdu_Base *>(obj)!=NULL;
}

const char *LteMacPduDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LteMacPduDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LteMacPduDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT | FD_ISCOWNEDOBJECT,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *LteMacPduDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sdu",
        "headerLength",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int LteMacPduDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sdu")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "headerLength")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LteMacPduDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "cPacket",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LteMacPduDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LteMacPduDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LteMacPdu_Base *pp = (LteMacPdu_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getSduArraySize();
        default: return 0;
    }
}

std::string LteMacPduDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LteMacPdu_Base *pp = (LteMacPdu_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSdu(i); return out.str();}
        case 1: return ulong2string(pp->getHeaderLength());
        default: return "";
    }
}

bool LteMacPduDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LteMacPdu_Base *pp = (LteMacPdu_Base *)object; (void)pp;
    switch (field) {
        case 1: pp->setHeaderLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *LteMacPduDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(cPacket));
        default: return NULL;
    };
}

void *LteMacPduDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LteMacPdu_Base *pp = (LteMacPdu_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getSdu(i)); break;
        default: return NULL;
    }
}

Register_Class(MacControlElement);

MacControlElement::MacControlElement() : ::cObject()
{
    this->timestamp_var = 0;
}

MacControlElement::MacControlElement(const MacControlElement& other) : ::cObject(other)
{
    copy(other);
}

MacControlElement::~MacControlElement()
{
}

MacControlElement& MacControlElement::operator=(const MacControlElement& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void MacControlElement::copy(const MacControlElement& other)
{
    this->timestamp_var = other.timestamp_var;
}

void MacControlElement::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->timestamp_var);
}

void MacControlElement::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->timestamp_var);
}

double MacControlElement::getTimestamp() const
{
    return timestamp_var;
}

void MacControlElement::setTimestamp(double timestamp)
{
    this->timestamp_var = timestamp;
}

class MacControlElementDescriptor : public cClassDescriptor
{
  public:
    MacControlElementDescriptor();
    virtual ~MacControlElementDescriptor();

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

Register_ClassDescriptor(MacControlElementDescriptor);

MacControlElementDescriptor::MacControlElementDescriptor() : cClassDescriptor("MacControlElement", "cObject")
{
}

MacControlElementDescriptor::~MacControlElementDescriptor()
{
}

bool MacControlElementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MacControlElement *>(obj)!=NULL;
}

const char *MacControlElementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MacControlElementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int MacControlElementDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *MacControlElementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "timestamp",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int MacControlElementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MacControlElementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *MacControlElementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MacControlElementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MacControlElement *pp = (MacControlElement *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MacControlElementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MacControlElement *pp = (MacControlElement *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getTimestamp());
        default: return "";
    }
}

bool MacControlElementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MacControlElement *pp = (MacControlElement *)object; (void)pp;
    switch (field) {
        case 0: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *MacControlElementDescriptor::getFieldStructName(void *object, int field) const
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

void *MacControlElementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MacControlElement *pp = (MacControlElement *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(MacBsr);

MacBsr::MacBsr() : ::MacControlElement()
{
    this->size_var = 0;
}

MacBsr::MacBsr(const MacBsr& other) : ::MacControlElement(other)
{
    copy(other);
}

MacBsr::~MacBsr()
{
}

MacBsr& MacBsr::operator=(const MacBsr& other)
{
    if (this==&other) return *this;
    ::MacControlElement::operator=(other);
    copy(other);
    return *this;
}

void MacBsr::copy(const MacBsr& other)
{
    this->size_var = other.size_var;
}

void MacBsr::parsimPack(cCommBuffer *b)
{
    ::MacControlElement::parsimPack(b);
    doPacking(b,this->size_var);
}

void MacBsr::parsimUnpack(cCommBuffer *b)
{
    ::MacControlElement::parsimUnpack(b);
    doUnpacking(b,this->size_var);
}

int MacBsr::getSize() const
{
    return size_var;
}

void MacBsr::setSize(int size)
{
    this->size_var = size;
}

class MacBsrDescriptor : public cClassDescriptor
{
  public:
    MacBsrDescriptor();
    virtual ~MacBsrDescriptor();

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

Register_ClassDescriptor(MacBsrDescriptor);

MacBsrDescriptor::MacBsrDescriptor() : cClassDescriptor("MacBsr", "MacControlElement")
{
}

MacBsrDescriptor::~MacBsrDescriptor()
{
}

bool MacBsrDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MacBsr *>(obj)!=NULL;
}

const char *MacBsrDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MacBsrDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int MacBsrDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *MacBsrDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "size",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int MacBsrDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "size")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MacBsrDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *MacBsrDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MacBsrDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MacBsr *pp = (MacBsr *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MacBsrDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MacBsr *pp = (MacBsr *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSize());
        default: return "";
    }
}

bool MacBsrDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MacBsr *pp = (MacBsr *)object; (void)pp;
    switch (field) {
        case 0: pp->setSize(string2long(value)); return true;
        default: return false;
    }
}

const char *MacBsrDescriptor::getFieldStructName(void *object, int field) const
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

void *MacBsrDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MacBsr *pp = (MacBsr *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


