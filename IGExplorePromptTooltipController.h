
#import <Instagram/IGExplorePromptMediaViewDelegate.h>

@protocol OS_dispatch_source, IGExplorePromptTooltipDelegate;
@class NSObject, IGExplorePromptMediaView, IGExplorePromptTooltipView, NSArray, NSDate, IGExplorePromptTooltipLogger, NSTimer, NSString;

@interface IGExplorePromptTooltipController : NSObject <IGExplorePromptMediaViewDelegate> {

	NSObject*<OS_dispatch_source> _timer;
	char _isTooltipVisible;
	char _shouldShowPromptThisSession;
	char _hasSetAttentionOnExplore;
	id<IGExplorePromptTooltipDelegate> _delegate;
	IGExplorePromptMediaView* _exploreView;
	IGExplorePromptTooltipView* _tooltipView;
	NSArray* _imageURLs;
	NSDate* _lastImpressionTime;
	int _impressionCount;
	IGExplorePromptTooltipLogger* _logger;
	int _latestFeedPosition;
	NSTimer* _timerToDisplay;

}

@property (nonatomic,retain) IGExplorePromptMediaView * exploreView;                          //@synthesize exploreView=_exploreView - In the implementation block
@property (nonatomic,retain) IGExplorePromptTooltipView * tooltipView;                        //@synthesize tooltipView=_tooltipView - In the implementation block
@property (nonatomic,retain) NSArray * imageURLs;                                             //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,retain) NSDate * lastImpressionTime;                                     //@synthesize lastImpressionTime=_lastImpressionTime - In the implementation block
@property (assign,nonatomic) int impressionCount;                                             //@synthesize impressionCount=_impressionCount - In the implementation block
@property (assign,nonatomic) char isTooltipVisible;                                           //@synthesize isTooltipVisible=_isTooltipVisible - In the implementation block
@property (nonatomic,retain) IGExplorePromptTooltipLogger * logger;                           //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) int latestFeedPosition;                                          //@synthesize latestFeedPosition=_latestFeedPosition - In the implementation block
@property (assign,nonatomic) char shouldShowPromptThisSession;                                //@synthesize shouldShowPromptThisSession=_shouldShowPromptThisSession - In the implementation block
@property (nonatomic,retain) NSTimer * timerToDisplay;                                        //@synthesize timerToDisplay=_timerToDisplay - In the implementation block
@property (assign,nonatomic) char hasSetAttentionOnExplore;                                   //@synthesize hasSetAttentionOnExplore=_hasSetAttentionOnExplore - In the implementation block
@property (assign,nonatomic,__weak) id<IGExplorePromptTooltipDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mainFeedScrollTriggered:(id)arg1 ;
-(void)explorePreloadDidFinish:(id)arg1 ;
-(void)mainFeedDidScrollToOldPost:(id)arg1 ;
-(void)userDidInteractWithExplore;
-(void)setLastImpressionTime:(NSDate *)arg1 ;
-(void)setImpressionCount:(int)arg1 ;
-(IGExplorePromptMediaView *)exploreView;
-(char)shouldShowPromptThisSession;
-(NSDate *)lastImpressionTime;
-(int)impressionCount;
-(void)setShouldShowPromptThisSession:(char)arg1 ;
-(void)setLatestFeedPosition:(int)arg1 ;
-(char)shouldShowPrompt;
-(void)promptTriggered;
-(IGExplorePromptTooltipView *)tooltipView;
-(void)finishDisplayPromptWithAction:(id)arg1 ;
-(void)setIsTooltipVisible:(char)arg1 ;
-(void)displayAttentionOnTabBar;
-(void)scheduleTimerToDisplayTooltip;
-(void)dismissPrompt;
-(void)cancelDisplayTimer;
-(void)displayExploreTooltip;
-(void)setTimerToDisplay:(NSTimer *)arg1 ;
-(NSTimer *)timerToDisplay;
-(char)isTooltipVisible;
-(char)isTopVCMainFeed;
-(int)latestFeedPosition;
-(char)hasSetAttentionOnExplore;
-(void)setHasSetAttentionOnExplore:(char)arg1 ;
-(void)explorePromptMediaViewDidTapOnPromptView;
-(void)explorePromptMediaViewDidTapOnCloseButton;
-(void)setExploreView:(IGExplorePromptMediaView *)arg1 ;
-(void)setTooltipView:(IGExplorePromptTooltipView *)arg1 ;
-(void)setImageURLs:(NSArray *)arg1 ;
-(NSArray *)imageURLs;
-(IGExplorePromptTooltipLogger *)logger;
-(void)setLogger:(IGExplorePromptTooltipLogger *)arg1 ;
-(void)setDelegate:(id<IGExplorePromptTooltipDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGExplorePromptTooltipDelegate>)delegate;
-(void)scheduleTimer;
@end

