
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString, HoneySchema;

@interface MarauderEventBatch : TBaseStruct {

	NSNumber* __thrift_timeStampInMilliseconds;
	NSString* __thrift_deviceID;
	NSString* __thrift_appID;
	NSString* __thrift_appVersion;
	NSMutableArray* __thrift_events;
	NSString* __thrift_platformSoftwareVersion;
	NSString* __thrift_platformHardwareVersion;
	HoneySchema* __thrift_honeySchema;

}
-(id)toDict;
-(id)initWithTimeStampInMilliseconds:(id)arg1 deviceID:(id)arg2 appID:(id)arg3 appVersion:(id)arg4 events:(NSMutableArray*)arg5 platformSoftwareVersion:(id)arg6 platformHardwareVersion:(id)arg7 honeySchema:(id)arg8 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

