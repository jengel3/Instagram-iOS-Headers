
#import <Instagram/IGFeedNetworkSource.h>

@protocol IGExploreMainFeedNetworkSourceDelegate;
@class NSArray;

@interface IGExploreMainFeedNetworkSource : IGFeedNetworkSource {

	id<IGExploreMainFeedNetworkSourceDelegate> _exploreDelegate;
	NSArray* _items;

}

@property (assign,nonatomic,__weak) id<IGExploreMainFeedNetworkSourceDelegate> exploreDelegate;              //@synthesize exploreDelegate=_exploreDelegate - In the implementation block
@property (retain) NSArray * items;                                                                          //@synthesize items=_items - In the implementation block
-(id)initWithPostClass:(Class)arg1 ;
-(void)refreshWithNewItems:(id)arg1 clearOut:(char)arg2 ;
-(id<IGExploreMainFeedNetworkSourceDelegate>)exploreDelegate;
-(id)regularPostsFromResponse:(id)arg1 clearOut:(char)arg2 usingStore:(id)arg3 rankToken:(id)arg4 secure:(char)arg5 ;
-(void)setExploreDelegate:(id<IGExploreMainFeedNetworkSourceDelegate>)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

