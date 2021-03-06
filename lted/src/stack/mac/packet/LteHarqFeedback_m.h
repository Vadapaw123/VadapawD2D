//
// Generated file, do not edit! Created by nedtool 4.6 from src/stack/mac/packet/LteHarqFeedback.msg.
//

#ifndef _LTEHARQFEEDBACK_M_H_
#define _LTEHARQFEEDBACK_M_H_

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0406
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>src/stack/mac/packet/LteHarqFeedback.msg:13</tt> by nedtool.
 * <pre>
 * packet LteHarqFeedback
 * {
 *     // H-ARQ acid to which this fb is addressed
 *     unsigned char acid;
 *     // H-ARQ cw id to which this fb is addressed
 *     unsigned char cw;
 *     // H-ARQ feedback: true for ACK, false for NACK
 *     bool result;
 *     // Id of the pdu to which the feedback is addressed
 *     long pduId;
 * }
 * </pre>
 */
class LteHarqFeedback : public ::cPacket
{
  protected:
    unsigned char acid_var;
    unsigned char cw_var;
    bool result_var;
    long pduId_var;

  private:
    void copy(const LteHarqFeedback& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const LteHarqFeedback&);

  public:
    LteHarqFeedback(const char *name=NULL, int kind=0);
    LteHarqFeedback(const LteHarqFeedback& other);
    virtual ~LteHarqFeedback();
    LteHarqFeedback& operator=(const LteHarqFeedback& other);
    virtual LteHarqFeedback *dup() const {return new LteHarqFeedback(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned char getAcid() const;
    virtual void setAcid(unsigned char acid);
    virtual unsigned char getCw() const;
    virtual void setCw(unsigned char cw);
    virtual bool getResult() const;
    virtual void setResult(bool result);
    virtual long getPduId() const;
    virtual void setPduId(long pduId);
};

inline void doPacking(cCommBuffer *b, LteHarqFeedback& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, LteHarqFeedback& obj) {obj.parsimUnpack(b);}


#endif // ifndef _LTEHARQFEEDBACK_M_H_

