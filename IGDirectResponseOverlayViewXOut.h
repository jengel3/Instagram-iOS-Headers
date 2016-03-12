
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDirectResponseOverlayable.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGDirectResponseOverlayViewDelegate;
@class UIView, IGImageView, IGDirectResponseOverlayViewV2XOutContentView, IGTapButton, NSString;

@interface IGDirectResponseOverlayViewXOut : UIView <IGDirectResponseOverlayable, IGImageViewDelegate> {

	char _presentationRequested;
	char _presentationRequestAnimated;
	char _blurredImageAvailable;
	id<IGDirectResponseOverlayViewDelegate> _delegate;
	UIView* _transparentView;
	IGImageView* _backgroundImageView;
	IGDirectResponseOverlayViewV2XOutContentView* _overlayContentView;
	IGTapButton* _overlayTappableElement;

}

@property (nonatomic,retain) UIView * transparentView;                                                       //@synthesize transparentView=_transparentView - In the implementation block
@property (nonatomic,retain) IGImageView * backgroundImageView;                                              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) IGDirectResponseOverlayViewV2XOutContentView * overlayContentView;              //@synthesize overlayContentView=_overlayContentView - In the implementation block
@property (nonatomic,retain) IGTapButton * overlayTappableElement;                                           //@synthesize overlayTappableElement=_overlayTappableElement - In the implementation block
@property (assign,nonatomic) char presentationRequested;                                                     //@synthesize presentationRequested=_presentationRequested - In the implementation block
@property (assign,nonatomic) char presentationRequestAnimated;                                               //@synthesize presentationRequestAnimated=_presentationRequestAnimated - In the implementation block
@property (assign,nonatomic) char blurredImageAvailable;                                                     //@synthesize blurredImageAvailable=_blurredImageAvailable - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectResponseOverlayViewDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)setupSubviewsWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(CGRect)arg3 ;
-(void)transparentViewTapped:(id)arg1 ;
-(void)setBlurredImageAvailable:(char)arg1 ;
-(char)presentationRequested;
-(char)presentationRequestAnimated;
-(char)blurredImageAvailable;
-(void)setPresentationRequested:(char)arg1 ;
-(void)setPresentationRequestAnimated:(char)arg1 ;
-(id)initWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(CGRect)arg3 ;
-(UIView *)transparentView;
-(void)setTransparentView:(UIView *)arg1 ;
-(IGDirectResponseOverlayViewV2XOutContentView *)overlayContentView;
-(IGTapButton *)overlayTappableElement;
-(void)xoutButtonTapped:(id)arg1 ;
-(void)setOverlayContentView:(IGDirectResponseOverlayViewV2XOutContentView *)arg1 ;
-(void)setOverlayTappableElement:(IGTapButton *)arg1 ;
-(void)showOverlayAnimated:(char)arg1 ;
-(void)setDelegate:(id<IGDirectResponseOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectResponseOverlayViewDelegate>)delegate;
-(IGImageView *)backgroundImageView;
-(void)setBackgroundImageView:(IGImageView *)arg1 ;
@end

