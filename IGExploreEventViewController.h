
#import <Instagram/IGFeedViewController.h>
#import <Instagram/IGMarqueeAttributionViewDelegate.h>

@class IGExploreMarqueeItem, NSMutableSet, NSString;

@interface IGExploreEventViewController : IGFeedViewController <IGMarqueeAttributionViewDelegate> {

	IGExploreMarqueeItem* _marqueeItem;
	NSMutableSet* _loggedImpressions;

}

@property (nonatomic,readonly) IGExploreMarqueeItem * marqueeItem;              //@synthesize marqueeItem=_marqueeItem - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;                  //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)loggedImpressions;
-(void)logMediaClick:(id)arg1 atIndex:(int)arg2 ;
-(void)logMediaImpression:(id)arg1 viewed:(char)arg2 atIndex:(int)arg3 ;
-(void)updateScrollFromContextualFeed;
-(void)handleLoadedContentDidChange;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)marqueeAttributionView:(id)arg1 didTapUsername:(id)arg2 ;
-(IGExploreMarqueeItem *)marqueeItem;
-(void)configureMarqueeContextView;
-(void)configureMarqueeAttributionView;
-(id)initWithMarqueeItem:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

