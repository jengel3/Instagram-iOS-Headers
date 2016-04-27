
#import <Instagram/Instagram-Structs.h>
#import <Instagram/RCTView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/RCTScrollableProtocol.h>
#import <Instagram/RCTAutoInsetsProtocol.h>

@protocol UIScrollViewDelegate;
@class RCTEventDispatcher, RCTCustomScrollView, UIView, NSMutableArray, NSObject, NSString, UIScrollView, NSIndexSet;

@interface RCTScrollView : RCTView <UIScrollViewDelegate, RCTScrollableProtocol, RCTAutoInsetsProtocol> {

	RCTEventDispatcher* _eventDispatcher;
	RCTCustomScrollView* _scrollView;
	UIView* _contentView;
	double _lastScrollDispatchTime;
	NSMutableArray* _cachedChildFrames;
	char _allowNextScrollNoMatterWhat;
	CGRect _lastClippedToRect;
	unsigned short _coalescingKey;
	int _lastEmittedEventType;
	char _automaticallyAdjustContentInsets;
	NSObject*<UIScrollViewDelegate> _nativeScrollDelegate;
	int _snapToInterval;
	NSString* _snapToAlignment;
	/*^block*/id _onRefreshStart;
	CGSize _contentSize;
	double _scrollEventThrottle;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                              //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) char automaticallyAdjustContentInsets;                                    //@synthesize automaticallyAdjustContentInsets=_automaticallyAdjustContentInsets - In the implementation block
@property (assign,nonatomic) double scrollEventThrottle;                                               //@synthesize scrollEventThrottle=_scrollEventThrottle - In the implementation block
@property (assign,nonatomic) char centerContent; 
@property (assign,nonatomic) int snapToInterval;                                                       //@synthesize snapToInterval=_snapToInterval - In the implementation block
@property (nonatomic,copy) NSString * snapToAlignment;                                                 //@synthesize snapToAlignment=_snapToAlignment - In the implementation block
@property (nonatomic,copy) NSIndexSet * stickyHeaderIndices; 
@property (nonatomic,copy) id onRefreshStart;                                                          //@synthesize onRefreshStart=_onRefreshStart - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) NSObject*<UIScrollViewDelegate> nativeScrollDelegate;              //@synthesize nativeScrollDelegate=_nativeScrollDelegate - In the implementation block
-(NSIndexSet *)stickyHeaderIndices;
-(void)setStickyHeaderIndices:(NSIndexSet *)arg1 ;
-(char)centerContent;
-(void)setCenterContent:(char)arg1 ;
-(void)updateClippedSubviews;
-(void)sendScrollEventWithType:(int)arg1 reactTag:(id)arg2 scrollView:(id)arg3 userData:(id)arg4 ;
-(int)snapToInterval;
-(NSString *)snapToAlignment;
-(CGSize)_calculateViewportSize;
-(CGPoint)calculateOffsetForContentSize:(CGSize)arg1 ;
-(void)refreshControlValueChanged;
-(id)onRefreshStart;
-(void)setOnRefreshStart:(id)arg1 ;
-(double)scrollEventThrottle;
-(void)setScrollEventThrottle:(double)arg1 ;
-(void)setSnapToInterval:(int)arg1 ;
-(void)setSnapToAlignment:(NSString *)arg1 ;
-(id)initWithEventDispatcher:(id)arg1 ;
-(id)calculateChildFramesData;
-(void)scrollToOffset:(CGPoint)arg1 ;
-(void)scrollToOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(NSObject*<UIScrollViewDelegate>)nativeScrollDelegate;
-(void)setNativeScrollDelegate:(NSObject*<UIScrollViewDelegate>)arg1 ;
-(void)insertReactSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)removeReactSubview:(id)arg1 ;
-(id)reactSubviews;
-(void)reactBridgeDidFinishTransaction;
-(void)setRemoveClippedSubviews:(char)arg1 ;
-(void)refreshContentInset;
-(char)automaticallyAdjustContentInsets;
-(void)setAutomaticallyAdjustContentInsets:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setClipsToBounds:(char)arg1 ;
-(void)dealloc;
-(void)setShowsVerticalScrollIndicator:(char)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3 ;
-(char)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)setShowsHorizontalScrollIndicator:(char)arg1 ;
-(CGSize)contentSize;
-(void)setScrollEnabled:(char)arg1 ;
-(char)isScrollEnabled;
-(UIEdgeInsets)contentInset;
-(UIScrollView *)scrollView;
-(void)setScrollIndicatorInsets:(UIEdgeInsets)arg1 ;
-(UIView *)contentView;
-(void)setDirectionalLockEnabled:(char)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(char)isDirectionalLockEnabled;
-(char)isPagingEnabled;
-(float)zoomScale;
-(float)minimumZoomScale;
-(char)alwaysBounceHorizontal;
-(char)alwaysBounceVertical;
-(int)keyboardDismissMode;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setPagingEnabled:(char)arg1 ;
-(void)setBounces:(char)arg1 ;
-(char)bounces;
-(void)setAlwaysBounceVertical:(char)arg1 ;
-(void)setAlwaysBounceHorizontal:(char)arg1 ;
-(char)showsHorizontalScrollIndicator;
-(char)showsVerticalScrollIndicator;
-(UIEdgeInsets)scrollIndicatorInsets;
-(void)setIndicatorStyle:(int)arg1 ;
-(float)decelerationRate;
-(void)setDecelerationRate:(float)arg1 ;
-(int)indicatorStyle;
-(char)bouncesZoom;
-(void)setBouncesZoom:(char)arg1 ;
-(char)canCancelContentTouches;
-(void)setCanCancelContentTouches:(char)arg1 ;
-(char)scrollsToTop;
-(void)setScrollsToTop:(char)arg1 ;
-(void)setMinimumZoomScale:(float)arg1 ;
-(void)setMaximumZoomScale:(float)arg1 ;
-(float)maximumZoomScale;
-(void)setZoomScale:(float)arg1 ;
-(void)zoomToRect:(CGRect)arg1 animated:(char)arg2 ;
-(void)setKeyboardDismissMode:(int)arg1 ;
-(void)endRefreshing;
@end

