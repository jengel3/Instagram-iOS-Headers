
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropSearchEvent : TBaseStruct {

	NSString* __thrift_searchQueryText;
	NSNumber* __thrift_wasSearchButtonTaped;
	int __thrift_searchType;
	NSNumber* __thrift_rttInMillis;

}
-(id)toDict;
-(id)initWithSearchQueryText:(id)arg1 wasSearchButtonTaped:(id)arg2 searchType:(int)arg3 rttInMillis:(id)arg4 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(int)searchType;
@end

