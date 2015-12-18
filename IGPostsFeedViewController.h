
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController.h>

@class UIView, IGRankedTitleView, NSString, NSIndexPath;

@interface IGPostsFeedViewController : IGFeedViewController {

	int _entryPoint;
	int _mode;
	char _showExploreContext;
	char _shouldHideFirstPost;
	UIView* _previewSplashView;
	unsigned _startIndex;
	IGRankedTitleView* _rankedTitleView;
	NSString* _rankedTitle;
	NSString* _rankedSubtitle;
	NSIndexPath* _savedVisibleIndexPath;
	float _savedVisibleIndexPathOffset;

}

@property (assign,nonatomic) char showExploreContext;                          //@synthesize showExploreContext=_showExploreContext - In the implementation block
@property (assign,nonatomic) char shouldHideFirstPost;                         //@synthesize shouldHideFirstPost=_shouldHideFirstPost - In the implementation block
@property (nonatomic,retain) UIView * previewSplashView;                       //@synthesize previewSplashView=_previewSplashView - In the implementation block
@property (assign,nonatomic) unsigned startIndex;                              //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) IGRankedTitleView * rankedTitleView;              //@synthesize rankedTitleView=_rankedTitleView - In the implementation block
@property (nonatomic,retain) NSString * rankedTitle;                           //@synthesize rankedTitle=_rankedTitle - In the implementation block
@property (nonatomic,retain) NSString * rankedSubtitle;                        //@synthesize rankedSubtitle=_rankedSubtitle - In the implementation block
@property (nonatomic,retain) NSIndexPath * savedVisibleIndexPath;              //@synthesize savedVisibleIndexPath=_savedVisibleIndexPath - In the implementation block
@property (assign,nonatomic) float savedVisibleIndexPathOffset;                //@synthesize savedVisibleIndexPathOffset=_savedVisibleIndexPathOffset - In the implementation block
-(void)setShowExploreContext:(char)arg1 ;
-(char)showExploreContext;
-(id)analyticsModule;
-(id)additionalParamsForFetchRequest;
-(char)enableNavState;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(id)initWithFeedItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 ;
-(void)setShouldHideFirstPost:(char)arg1 ;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(id)initWithItems:(id)arg1 startAtItemIndex:(unsigned)arg2 title:(id)arg3 subtitle:(id)arg4 entityId:(id)arg5 entryPoint:(int)arg6 ;
-(id)initWithFeedNetworkSource:(id)arg1 startAtItemIndex:(unsigned)arg2 title:(id)arg3 subtitle:(id)arg4 entityId:(id)arg5 entryPoint:(int)arg6 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(char)enablePivot:(id)arg1 ;
-(char)shouldDisplayPivotInActionBar;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(void)displayPivots:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 startAtItemIndex:(unsigned)arg2 title:(id)arg3 subtitle:(id)arg4 entityId:(id)arg5 showsPullToRefresh:(char)arg6 entryPoint:(int)arg7 ;
-(NSString *)rankedSubtitle;
-(void)setRankedTitleView:(IGRankedTitleView *)arg1 ;
-(IGRankedTitleView *)rankedTitleView;
-(NSString *)rankedTitle;
-(void)insertPreviewSplashView;
-(UIView *)previewSplashView;
-(CGRect)frameForCell:(id)arg1 ;
-(void)setSavedVisibleIndexPath:(NSIndexPath *)arg1 ;
-(void)setSavedVisibleIndexPathOffset:(float)arg1 ;
-(void)saveCurrentScrollPosition;
-(char)shouldHideFirstPost;
-(NSIndexPath *)savedVisibleIndexPath;
-(float)savedVisibleIndexPathOffset;
-(void)scrollToIndexPath:(id)arg1 verticalOffset:(float)arg2 ;
-(void)setPreviewSplashView:(UIView *)arg1 ;
-(void)setRankedTitle:(NSString *)arg1 ;
-(void)setRankedSubtitle:(NSString *)arg1 ;
-(void)setStartIndex:(unsigned)arg1 ;
-(void)dealloc;
-(int)viewType;
-(void)viewDidLoad;
-(unsigned)startIndex;
@end

