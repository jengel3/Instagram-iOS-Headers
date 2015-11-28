
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropCreateCustomLocationEvent : TBaseStruct {

	NSString* __thrift_newLocationName;
	NSString* __thrift_searchSessionId;

}
-(id)toDict;
-(id)initWithNewLocationName:(id)arg1 searchSessionId:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

