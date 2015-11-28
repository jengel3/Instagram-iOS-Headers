
#import <Instagram/TProtocol.h>

@protocol TTransport;
@class NSMutableArray, NSString;

@interface TCompactProtocol : NSObject <TProtocol> {

	id<TTransport> mTransport;
	char mStrictRead;
	char mStrictWrite;
	int mMessageSizeLimit;
	NSMutableArray* mLastField;
	int mLastFieldId;
	char mHasBooleanField;
	NSString* mBooleanFieldName;
	int mBooleanFieldId;
	char mBooleanFieldValue;
	long mMaxNetworkBytes;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransport:(id)arg1 strictRead:(char)arg2 strictWrite:(char)arg3 ;
-(int)readI32;
-(int)messageSizeLimit;
-(short)readI16;
-(long long)readI64;
-(void)writeI32:(int)arg1 ;
-(void)writeByte:(unsigned char)arg1 ;
-(void)writeI16:(short)arg1 ;
-(void)writeI64:(long long)arg1 ;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readStructEnd;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(void)readFieldEnd;
-(char)readBool;
-(id)readBinary;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeStructEnd;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeDouble:(double)arg1 ;
-(void)writeBool:(char)arg1 ;
-(void)writeBinary:(id)arg1 ;
-(void)writeFieldStop;
-(void)writeFieldEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(void)setMessageSizeLimit:(int)arg1 ;
-(void)writeByteDirect:(int)arg1 ;
-(void)writeVarint32:(int)arg1 ;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 typeOverride:(int)arg4 ;
-(int)getCompactType:(int)arg1 ;
-(void)writeCollectionBeginWithType:(int)arg1 size:(int)arg2 ;
-(int)intToZigZag:(int)arg1 ;
-(long long)longToZigzag:(long long)arg1 ;
-(void)writeVarint64:(long long)arg1 ;
-(void)writeBinary:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)writeByteDirectByte:(unsigned char)arg1 ;
-(int)readVarint32;
-(unsigned char)getTType:(unsigned char)arg1 ;
-(char)isBoolType:(unsigned char)arg1 ;
-(int)zigzagToInt:(int)arg1 ;
-(long long)readVarint64;
-(long long)zigzagToLong:(long long)arg1 ;
-(void)checkReadLength:(int)arg1 ;
-(id)readBinary:(int)arg1 ;
-(void)dealloc;
-(void)reset;
-(unsigned char)readByte;
-(id)readString;
-(id)initWithTransport:(id)arg1 ;
-(id)transport;
-(void)writeString:(id)arg1 ;
-(double)readDouble;
@end

