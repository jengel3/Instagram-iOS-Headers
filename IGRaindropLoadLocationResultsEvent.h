
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropLoadLocationResultsEvent : TBaseStruct {

	NSMutableArray* __thrift_resultList;
	NSString* __thrift_searchSessionId;

}
-(id)toDict;
-(id)initWithResultList:(NSMutableArray*)arg1 searchSessionId:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

