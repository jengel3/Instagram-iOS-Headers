
#import <Instagram/IGFeedNetworkSource.h>

@interface IGExploreNetworkSource : IGFeedNetworkSource
+(id)exploreHashtagFeedNetworkSource;
-(id)initWithPostClass:(Class)arg1 fetchPath:(id)arg2 ;
-(char)fetchDataWithParameters:(id)arg1 ;
-(void)eagerLoadMediaForPosts:(id)arg1 ;
@end

