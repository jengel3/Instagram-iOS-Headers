
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGMarqueeAttributionViewDelegate.h>

@class IGExploreMarqueeItem, NSMutableSet, NSString;

@interface IGExploreEventViewController : IGFeedViewController_DEPRECATED <IGMarqueeAttributionViewDelegate> {

	IGExploreMarqueeItem* _marqueeItem;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,readonly) IGExploreMarqueeItem * marqueeItem;              //@synthesize marqueeItem=_marqueeItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                  //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateScrollFromContextualFeed;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 ;
-(NSMutableSet *)loggedImpressions;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)marqueeAttributionView:(id)arg1 didTapUsername:(id)arg2 ;
-(void)configureMarqueeContextView;
-(void)configureMarqueeAttributionView;
-(IGExploreMarqueeItem *)marqueeItem;
-(id)initWithMarqueeItem:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

