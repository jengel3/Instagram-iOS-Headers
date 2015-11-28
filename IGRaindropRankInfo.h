
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
	NSNumber* __thrift_timeSpent;
	NSString* __thrift_entityId;
	NSString* __thrift_searchImpressionToken;

}
-(id)rankToken;
-(id)toDict;
-(int)viewSubType;
-(id)searchQueryText;
-(id)initWithSearchType:(int)arg1 searchQueryText:(id)arg2 viewSubType:(int)arg3 rankToken:(id)arg4 itemRankResponseOffset:(id)arg5 itemRankDisplayOffset:(id)arg6 rankDisplayRowSize:(id)arg7 rankDisplayColumnSize:(id)arg8 sectionType:(int)arg9 searchSessionId:(id)arg10 timeSpent:(id)arg11 entityId:(id)arg12 searchImpressionToken:(id)arg13 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(int)searchType;
@end

