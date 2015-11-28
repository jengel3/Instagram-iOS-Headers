
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropSearchTypingEvent : TBaseStruct {

	NSNumber* __thrift_isTypeahead;
	NSNumber* __thrift_nullState;
	NSMutableArray* __thrift_searchQueries;

}
-(id)toDict;
-(id)initWithIsTypeahead:(id)arg1 nullState:(id)arg2 searchQueries:(NSMutableArray*)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

