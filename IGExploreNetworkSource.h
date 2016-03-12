
#import <Instagram/IGFeedNetworkSource.h>

@interface IGExploreNetworkSource : IGFeedNetworkSource
+(id)exploreHashtagFeedNetworkSource;
-(char)fetchDataWithParameters:(id)arg1 ;
-(id)initWithPostClass:(Class)arg1 ;
-(void)eagerLoadMediaForPosts:(id)arg1 ;
@end

