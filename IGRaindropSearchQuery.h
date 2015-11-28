
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropSearchQuery : TBaseStruct {

	NSString* __thrift_searchQueryText;
	NSNumber* __thrift_timestamp;
	NSNumber* __thrift_rttInMillis;

}
-(id)toDict;
-(id)searchQueryText;
-(id)initWithSearchQueryText:(id)arg1 timestamp:(id)arg2 rttInMillis:(id)arg3 ;
-(id)init;
-(id)description;
-(id)timestamp;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

