
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropDevice : TBaseStruct {

	NSString* __thrift_appVersion;
	int __thrift_platformType;
	NSString* __thrift_platformSoftwareVersion;
	NSString* __thrift_platformHardwareVersion;
	NSString* __thrift_deviceUUID;
	NSString* __thrift_deviceName;

}
-(id)initWithAppVersion:(id)arg1 platformType:(int)arg2 platformSoftwareVersion:(id)arg3 platformHardwareVersion:(id)arg4 deviceUUID:(id)arg5 deviceName:(id)arg6 ;
-(id)toDict;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

