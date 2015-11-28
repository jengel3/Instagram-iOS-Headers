
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber, IGRaindropPlace;

@interface IGRaindropViewSearchResultEvent : TBaseStruct {

	NSString* __thrift_searchQueryText;
	int __thrift_searchType;
	NSNumber* __thrift_selectedUserId;
	NSString* __thrift_selectedHashtag;
	NSNumber* __thrift_numOfViewedResults;
	NSNumber* __thrift_localResult;
	NSNumber* __thrift_cachedSearchedResult;
	IGRaindropPlace* __thrift_selectedPlace;
	NSMutableArray* __thrift_resultsList;
	NSString* __thrift_requestId;
	NSNumber* __thrift_selectedPosition;
	NSString* __thrift_selectedPlaceId;

}
-(id)toDict;
-(id)initWithSearchQueryText:(id)arg1 searchType:(int)arg2 selectedUserId:(id)arg3 selectedHashtag:(id)arg4 numOfViewedResults:(id)arg5 localResult:(id)arg6 cachedSearchedResult:(id)arg7 selectedPlace:(id)arg8 resultsList:(NSMutableArray*)arg9 requestId:(id)arg10 selectedPosition:(id)arg11 selectedPlaceId:(id)arg12 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

