
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropSearchBackspaceEvent : TBaseStruct {

	NSNumber* __thrift_isTypeahead;
	NSString* __thrift_searchQueryText;
	NSNumber* __thrift_rttInMillis;

}
-(id)toDict;
-(id)initWithIsTypeahead:(id)arg1 searchQueryText:(id)arg2 rttInMillis:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

