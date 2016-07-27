
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGFeedPhotoViewZoomingDelegate.h>
#import <Instagram/IGDirectResponseOverlayViewDelegate.h>
#import <Instagram/IGOverlayable.h>

@protocol IGFeedItemPhotoCellDelegate, IGFeedItemPhotoCellZoomingDelegate, IGDirectResponseOverlayable;
@class IGFeedItem, IGFeedPhotoView, UIView, NSString;

@interface IGFeedItemPhotoCell : IGFeedItemMediaCell <IGFeedPhotoViewDelegate, IGFeedPhotoViewZoomingDelegate, IGDirectResponseOverlayViewDelegate, IGOverlayable> {

	IGFeedItem* _post;
	IGFeedPhotoView* _photoView;
	id<IGFeedItemPhotoCellDelegate> _delegate;
	id<IGFeedItemPhotoCellZoomingDelegate> _zoomingDelegate;
	UIView*<IGDirectResponseOverlayable> _overlayView;

}

@property (nonatomic,retain) UIView*<IGDirectResponseOverlayable> overlayView;                           //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) IGFeedPhotoView * photoView;                                              //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPhotoCellDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPhotoCellZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)post;
-(void)configureWithPost:(id)arg1 ;
-(void)setZoomingDelegate:(id<IGFeedItemPhotoCellZoomingDelegate>)arg1 ;
-(void)associateAsPhotoViewDelegate;
-(id)accessibleElements;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(void)showOverlayForDirectResponseInfo:(id)arg1 animated:(char)arg2 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)hideUsertagsIndicatorForPost:(id)arg1 ;
-(void)peekUsertagsIndicator;
-(void)overlayViewDidTap:(id)arg1 ;
-(void)overlayViewDidTapOnButton:(id)arg1 ;
-(id<IGFeedItemPhotoCellZoomingDelegate>)zoomingDelegate;
-(void)feedPhotoViewDidInitiateZoom:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(IGFeedPhotoView *)photoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPhotoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(id<IGFeedItemPhotoCellDelegate>)delegate;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(void)setOverlayView:(UIView*<IGDirectResponseOverlayable>)arg1 ;
-(UIView*<IGDirectResponseOverlayable>)overlayView;
@end

