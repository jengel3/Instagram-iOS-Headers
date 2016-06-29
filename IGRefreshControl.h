
#import <UIKit/UIControl.h>

@class UIScrollView, IGRefreshSpinner, CADisplayLink;

@interface IGRefreshControl : UIControl {

	int _refreshState;
	UIScrollView* _scrollView;
	float _triggerHeight;
	IGRefreshSpinner* _spinner;
	CADisplayLink* _displayLink;
	float _originalTopContentInset;
	float _disappearProgress;
	float _disappearInitialOffset;
	double _beginTime;

}

@property (nonatomic,__weak,readonly) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) float triggerHeight;                           //@synthesize triggerHeight=_triggerHeight - In the implementation block
@property (nonatomic,readonly) IGRefreshSpinner * spinner;                    //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int refreshState;                                //@synthesize refreshState=_refreshState - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                     //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) float originalTopContentInset;                   //@synthesize originalTopContentInset=_originalTopContentInset - In the implementation block
@property (assign,nonatomic) float disappearProgress;                         //@synthesize disappearProgress=_disappearProgress - In the implementation block
@property (assign,nonatomic) float disappearInitialOffset;                    //@synthesize disappearInitialOffset=_disappearInitialOffset - In the implementation block
@property (assign,nonatomic) double beginTime;                                //@synthesize beginTime=_beginTime - In the implementation block
-(void)updateOriginalTopContentInset;
-(void)layoutInSuperView;
-(float)realContentOffsetY;
-(float)animationProgress;
-(void)updateWithAppearingProgress:(float)arg1 ;
-(char)scrollViewHasTouches;
-(void)beginRefreshingState;
-(float)scrollVelocity;
-(float)originalTopContentInset;
-(void)setOriginalTopContentInset:(float)arg1 ;
-(void)animateClosed;
-(void)adjustContentInsetForLoading;
-(void)finishingLoading;
-(void)setRefreshState:(int)arg1 ;
-(float)viewHeight;
-(float)triggerHeight;
-(float)disappearProgress;
-(void)setDisappearProgress:(float)arg1 ;
-(float)disappearInitialOffset;
-(void)cancelDisplayLink;
-(void)updateDisappearAnimation;
-(void)setDisappearInitialOffset:(float)arg1 ;
-(id)initWithScrollView:(id)arg1 triggerHeight:(float)arg2 ;
-(void)scrollViewDidScroll;
-(void)scrollViewDidEndDragging;
-(void)startLoadingAnimated:(char)arg1 ;
-(void)layoutSubviews;
-(void)reset;
-(UIScrollView *)scrollView;
-(void)setBeginTime:(double)arg1 ;
-(double)beginTime;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(IGRefreshSpinner *)spinner;
-(void)setTopContentInset:(float)arg1 ;
-(int)refreshState;
@end

