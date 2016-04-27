
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropRankInfo : TBaseStruct {

	int __thrift_searchType;
	NSString* __thrift_searchQueryText;
	int __thrift_viewSubType;
	NSString* __thrift_rankToken;
	NSNumber* __thrift_itemRankResponseOffset;
	NSNumber* __thrift_itemRankDisplayOffset;
	NSNumber* __thrift_rankDisplayRowSize;
	NSNumber* __thrift_rankDisplayColumnSize;
	int __thrift_sectionType;
	NSString* __thrift_searchSessionId;
	NSString* __thrift_entityId;
	NSString* __thrift_searchImpressionToken;
	NSString* __thrift_extra;

}
-(id)searchQueryText;
-(int)viewSubType;
-(id)rankToken;
-(id)toDict;
-(id)initWithSearchType:(int)arg1 searchQueryText:(id)arg2 viewSubType:(int)arg3 rankToken:(id)arg4 itemRankResponseOffset:(id)arg5 itemRankDisplayOffset:(id)arg6 rankDisplayRowSize:(id)arg7 rankDisplayColumnSize:(id)arg8 sectionType:(int)arg9 searchSessionId:(id)arg10 entityId:(id)arg11 searchImpressionToken:(id)arg12 extra:(id)arg13 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(int)searchType;
@end

