
#import <Instagram/IGFeedNetworkSource.h>

@protocol IGExploreMainFeedNetworkSourceDelegate;
@interface IGExploreMainFeedNetworkSource : IGFeedNetworkSource {

	id<IGExploreMainFeedNetworkSourceDelegate> _exploreDelegate;

}

@property (assign,nonatomic,__weak) id<IGExploreMainFeedNetworkSourceDelegate> exploreDelegate;              //@synthesize exploreDelegate=_exploreDelegate - In the implementation block
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 ;
-(void)loadEntriesFromResponse:(id)arg1 clearOut:(char)arg2 ;
-(id<IGExploreMainFeedNetworkSourceDelegate>)exploreDelegate;
-(void)refreshWithNewItems:(id)arg1 clearOut:(char)arg2 ;
-(id)initWithPostClass:(Class)arg1 userSession:(id)arg2 ;
-(void)setExploreDelegate:(id<IGExploreMainFeedNetworkSourceDelegate>)arg1 ;
@end

