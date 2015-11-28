
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGTabControlDelegate;
@class UIView, NSArray, UIScrollView, IGKVOHandle, CALayer;

@interface IGTabControl : UIView {

	char _canUseFallbackIcons;
	UIView* _inchwormView;
	NSArray* _buttons;
	id<IGTabControlDelegate> _delegate;
	UIScrollView* _connectedScrollView;
	IGKVOHandle* _contentOffsetHandle;
	CALayer* _bottomSeparator;

}

@property (nonatomic,retain) NSArray * buttons;                                     //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic,__weak) id<IGTabControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIScrollView * connectedScrollView;                    //@synthesize connectedScrollView=_connectedScrollView - In the implementation block
@property (nonatomic,readonly) UIView * inchwormView;                               //@synthesize inchwormView=_inchwormView - In the implementation block
@property (nonatomic,retain) IGKVOHandle * contentOffsetHandle;                     //@synthesize contentOffsetHandle=_contentOffsetHandle - In the implementation block
@property (nonatomic,retain) CALayer * bottomSeparator;                             //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (nonatomic,readonly) char canUseFallbackIcons;                            //@synthesize canUseFallbackIcons=_canUseFallbackIcons - In the implementation block
+(float)preferredHeight;
-(void)setConnectedScrollView:(UIScrollView *)arg1 ;
-(void)onSegmentTapped:(id)arg1 ;
-(UIView *)inchwormView;
-(void)applyStyle;
-(IGKVOHandle *)contentOffsetHandle;
-(void)updateScrollViewPosition;
-(void)highlightVisibleSegment;
-(void)setContentOffsetHandle:(IGKVOHandle *)arg1 ;
-(IGTabControlLayoutParameters)layoutParametersForFrame:(CGRect)arg1 segmentCount:(unsigned)arg2 ;
-(CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1 layoutParameters:(IGTabControlLayoutParameters)arg2 ;
-(CGRect)verticalPositionForScrollIndicatorBar:(CGRect)arg1 ;
-(UIScrollView *)connectedScrollView;
-(CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1 ;
-(id)newSegmentWithTitle:(id)arg1 fontSize:(float)arg2 fallbackIcon:(id)arg3 ;
-(void)updateAccessibilityStateForButtons:(id)arg1 selectedIndex:(int)arg2 ;
-(CGRect)frameForSegment:(unsigned)arg1 withLayoutParameters:(IGTabControlLayoutParameters)arg2 ;
-(char)canUseFallbackIcons;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGTabControlDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGTabControlDelegate>)delegate;
-(void)setSelectedIndex:(unsigned)arg1 ;
-(NSArray *)buttons;
-(void)setBottomSeparator:(CALayer *)arg1 ;
-(CALayer *)bottomSeparator;
-(void)setSegments:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
@end

