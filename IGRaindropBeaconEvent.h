
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropBeaconEvent : TBaseStruct {

	NSNumber* __thrift_sequenceId;

}
-(id)toDict;
-(id)initWithSequenceId:(id)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

