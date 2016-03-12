

@interface FBSDKAppEventsDeviceInfo : NSObject
+(unsigned)_coreCount;
+(id)_getTotalDiskSpace;
+(id)_getCarrier;
+(id)_getRemainingDiskSpace;
+(unsigned)_readSysCtlUInt:(int)arg1 type:(int)arg2 ;
+(void)extendDictionaryWithDeviceInfo:(id)arg1 ;
+(void)initialize;
-(id)encodedDeviceInfo;
-(void)_collectPersistentData;
-(char)_isGroup1Expired;
-(void)_collectGroup1Data;
-(id)_generateEncoding;
-(void)setEncodedDeviceInfo:(id)arg1 ;
@end

