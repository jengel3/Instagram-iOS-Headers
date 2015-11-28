
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropAddLocationEvent : TBaseStruct {

	NSString* __thrift_searchSessionId;

}
-(id)toDict;
-(id)initWithSearchSessionId:(id)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

