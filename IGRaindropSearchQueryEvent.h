
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropSearchQueryEvent : TBaseStruct {

	NSNumber* __thrift_isTypeahead;
	NSNumber* __thrift_nullState;
	NSString* __thrift_searchQueryText;
	NSNumber* __thrift_rttInMillis;
	NSNumber* __thrift_totalResults;
	NSNumber* __thrift_numberOfLocalResults;
	NSMutableArray* __thrift_impressions;

}
-(id)toDict;
-(id)initWithIsTypeahead:(id)arg1 nullState:(id)arg2 searchQueryText:(id)arg3 rttInMillis:(id)arg4 totalResults:(id)arg5 numberOfLocalResults:(id)arg6 impressions:(NSMutableArray*)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

