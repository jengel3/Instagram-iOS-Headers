
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, IGRaindropDevice;

@interface IGRaindropLogEntryBatch : TBaseStruct {

	NSNumber* __thrift_userId;
	IGRaindropDevice* __thrift_deviceInfo;
	NSMutableArray* __thrift_logEntries;

}
-(id)toDict;
-(id)initWithUserId:(id)arg1 deviceInfo:(id)arg2 logEntries:(NSMutableArray*)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

