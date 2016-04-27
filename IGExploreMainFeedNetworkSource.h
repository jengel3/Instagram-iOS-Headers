
#import <Instagram/IGFeedNetworkSource.h>

@protocol IGExploreMainFeedNetworkSourceDelegate;
@interface IGExploreMainFeedNetworkSource : IGFeedNetworkSource {

	id<IGExploreMainFeedNetworkSourceDelegate> _exploreDelegate;

}

@property (assign,nonatomic,__weak) id<IGExploreMainFeedNetworkSourceDelegate> exploreDelegate;              //@synthesize exploreDelegate=_exploreDelegate - In the implementation block
-(id<IGExploreMainFeedNetworkSourceDelegate>)exploreDelegate;
-(void)refreshWithNewItems:(id)arg1 clearOut:(char)arg2 ;
-(id)initWithPostClass:(Class)arg1 ;
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 rankToken:(id)arg4 secure:(char)arg5 ;
-(void)setExploreDelegate:(id<IGExploreMainFeedNetworkSourceDelegate>)arg1 ;
@end

