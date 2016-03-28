
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IGAnalyticsSearchRankInfo;

@interface IGNavEvent : NSObject <NSCopying> {

	NSString* _moduleName;
	IGAnalyticsSearchRankInfo* _searchRankInfo;

}

@property (nonatomic,copy,readonly) NSString * moduleName;                                   //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,copy,readonly) IGAnalyticsSearchRankInfo * searchRankInfo;              //@synthesize searchRankInfo=_searchRankInfo - In the implementation block
-(NSString *)moduleName;
-(id)initWithModuleName:(id)arg1 searchRankInfo:(id)arg2 ;
-(IGAnalyticsSearchRankInfo *)searchRankInfo;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

