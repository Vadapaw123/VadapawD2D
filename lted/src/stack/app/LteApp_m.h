//
// Generated file, do not edit! Created by nedtool 4.6 from src/stack/app/LteApp.msg.
//

#ifndef _LTEAPP_M_H_
#define _LTEAPP_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>src/stack/app/LteApp.msg:18</tt> by nedtool.
 * <pre>
 * packet LteApp
 * {
 *     unsigned int size = 40;
 * 
 * 
 *     simtime_t timestamp;
 * 
 * 
 * }
 * </pre>
 */
class LteApp : public ::cPacket
{
  protected:
    unsigned int size_var;
    simtime_t timestamp_var;

  private:
    void copy(const LteApp& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteApp&);

  public:
    LteApp(const char *name=NULL, int kind=0);
    LteApp(const LteApp& other);
    virtual ~LteApp();
    LteApp& operator=(const LteApp& other);
    virtual LteApp *dup() const {return new LteApp(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned int getSize() const;
    virtual void setSize(unsigned int size);
    virtual simtime_t getTimestamp() const;
    virtual void setTimestamp(simtime_t timestamp);
};

inline void doPacking(cCommBuffer *b, LteApp& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LteApp& obj) {obj.parsimUnpack(b);}


#endif // ifndef _LTEAPP_M_H_

