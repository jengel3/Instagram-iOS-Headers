

@class NSString;

@interface FBSDKAppEventsDeviceInfo : NSObject {

	NSString* _carrierName;
	NSString* _timeZoneAbbrev;
	unsigned long long _remainingDiskSpaceGB;
	NSString* _timeZoneName;
	NSString* _bundleIdentifier;
	NSString* _longVersion;
	NSString* _shortVersion;
	NSString* _sysVersion;
	NSString* _machine;
	NSString* _language;
	unsigned long long _totalDiskSpaceGB;
	unsigned long long _coreCount;
	float _width;
	float _height;
	float _density;
	long _lastGroup1CheckTime;
	char _isEncodingDirty;
	NSString* _encodedDeviceInfo;

}
+(id)sharedDeviceInfo;
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
-(id)init;
@end

