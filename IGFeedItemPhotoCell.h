
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGDirectResponseOverlayViewDelegate.h>
#import <Instagram/IGOverlayable.h>

@protocol IGFeedItemPhotoCellDelegate, IGDirectResponseOverlayable;
@class IGPost, IGFeedPhotoView, UIView, NSString;

@interface IGFeedItemPhotoCell : IGFeedItemMediaCell <IGFeedPhotoViewDelegate, IGDirectResponseOverlayViewDelegate, IGOverlayable> {

	IGPost* _post;
	IGFeedPhotoView* _photoView;
	id<IGFeedItemPhotoCellDelegate> _delegate;
	UIView*<IGDirectResponseOverlayable> _overlayView;

}

@property (nonatomic,retain) UIView*<IGDirectResponseOverlayable> overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) IGFeedPhotoView * photoView;                                 //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPhotoCellDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPost:(id)arg1 ;
-(void)associateAsPhotoViewDelegate;
-(id)accessibleElements;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(id)post;
-(void)showOverlayForDirectResponseInfo:(id)arg1 animated:(char)arg2 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)hideUsertagsIndicatorForPost:(id)arg1 ;
-(void)overlayViewDidTap:(id)arg1 ;
-(void)overlayViewDidTapOnButton:(id)arg1 ;
-(void)peekUsertagsIndicator;
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

