
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropSearchAbandonEvent : TBaseStruct {

	NSNumber* __thrift_isTypeahead;
	NSNumber* __thrift_nullState;
	NSString* __thrift_searchQueryText;

}
-(id)toDict;
-(id)initWithIsTypeahead:(id)arg1 nullState:(id)arg2 searchQueryText:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

