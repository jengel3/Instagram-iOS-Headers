
#import <Instagram/IGLoadMoreResponseType.h>

@class NSArray, NSString;

@interface IGExploreClusterResponse : NSObject <IGLoadMoreResponseType> {

	NSArray* _exploreClusterItems;
	NSString* _maxId;

}

@property (nonatomic,copy,readonly) NSArray * exploreClusterItems;              //@synthesize exploreClusterItems=_exploreClusterItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * maxId;                           //@synthesize maxId=_maxId - In the implementation block
-(NSString *)maxId;
-(id)initWithExploreClusterItems:(id)arg1 maxId:(id)arg2 ;
-(NSArray *)exploreClusterItems;
@end

