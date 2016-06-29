
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController_DEPRECATED.h>
#import <Instagram/IGAnalyticsModule.h>

@class IGContextualFeedItemConfiguration, UIView, IGFeedItem, NSIndexPath, NSString;

@interface IGPostsFeedViewController : IGFeedViewController_DEPRECATED <IGAnalyticsModule> {

	IGContextualFeedItemConfiguration* _configuration;
	UIView* _previewSplashView;
	IGFeedItem* _originalMediaPost;
	NSIndexPath* _savedVisibleIndexPath;
	float _savedVisibleIndexPathOffset;
	int _entryPoint;

}

@property (nonatomic,retain) NSIndexPath * savedVisibleIndexPath;                              //@synthesize savedVisibleIndexPath=_savedVisibleIndexPath - In the implementation block
@property (assign,nonatomic) float savedVisibleIndexPathOffset;                                //@synthesize savedVisibleIndexPathOffset=_savedVisibleIndexPathOffset - In the implementation block
@property (assign,nonatomic) int entryPoint;                                                   //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) IGContextualFeedItemConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIView * previewSplashView;                                       //@synthesize previewSplashView=_previewSplashView - In the implementation block
@property (nonatomic,retain) IGFeedItem * originalMediaPost;                                   //@synthesize originalMediaPost=_originalMediaPost - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)setEntryPoint:(int)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)handleLoadedContentDidChange;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(void)insertPreviewSplashView;
-(UIView *)previewSplashView;
-(CGRect)frameForCell:(id)arg1 ;
-(void)setSavedVisibleIndexPath:(NSIndexPath *)arg1 ;
-(void)setSavedVisibleIndexPathOffset:(float)arg1 ;
-(void)saveCurrentScrollPosition;
-(NSIndexPath *)savedVisibleIndexPath;
-(float)savedVisibleIndexPathOffset;
-(void)scrollToIndexPath:(id)arg1 verticalOffset:(float)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showsPullToRefresh:(char)arg5 entryPoint:(int)arg6 ;
-(void)setPreviewSplashView:(UIView *)arg1 ;
-(IGFeedItem *)originalMediaPost;
-(void)setOriginalMediaPost:(IGFeedItem *)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(IGContextualFeedItemConfiguration *)configuration;
-(void)setFeedLayout:(int)arg1 ;
-(int)entryPoint;
@end

