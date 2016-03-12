
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGDirectResponseOverlayViewDelegate.h>
#import <Instagram/IGDismissableOverlay.h>

@protocol IGPhotoCellDelegate, IGDirectResponseOverlayable;
@class IGFeedPhotoView, UIView, NSString;

@interface IGPhotoCell : UICollectionViewCell <IGFeedPhotoViewDelegate, IGDirectResponseOverlayViewDelegate, IGDismissableOverlay> {

	IGFeedPhotoView* _photoView;
	id<IGPhotoCellDelegate> _delegate;
	UIView*<IGDirectResponseOverlayable> _overlayView;

}

@property (nonatomic,retain) IGFeedPhotoView * photoView;                                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGPhotoCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView*<IGDirectResponseOverlayable> overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)overlayViewDidTap:(id)arg1 ;
-(void)overlayViewDidTapOnButton:(id)arg1 ;
-(void)showOverlayForDirectResponseInfo:(id)arg1 animated:(char)arg2 ;
-(IGFeedPhotoView *)photoView;
-(void)setPhotoView:(IGFeedPhotoView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGPhotoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGPhotoCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setOverlayView:(UIView*<IGDirectResponseOverlayable>)arg1 ;
-(UIView*<IGDirectResponseOverlayable>)overlayView;
@end

