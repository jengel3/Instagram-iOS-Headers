
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGDirectResponseOverlayable.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGDirectResponseOverlayViewDelegate;
@class IGDirectResponseOverlayViewButtonContentView, IGTapButton, NSString;

@interface IGDirectResponseOverlayViewButton : UIView <IGDirectResponseOverlayable, IGImageViewDelegate> {

	id<IGDirectResponseOverlayViewDelegate> _delegate;
	IGDirectResponseOverlayViewButtonContentView* _overlayContentView;
	IGTapButton* _overlayTappableElement;

}

@property (nonatomic,readonly) IGDirectResponseOverlayViewButtonContentView * overlayContentView;              //@synthesize overlayContentView=_overlayContentView - In the implementation block
@property (nonatomic,readonly) IGTapButton * overlayTappableElement;                                           //@synthesize overlayTappableElement=_overlayTappableElement - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectResponseOverlayViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)transparentViewTapped:(id)arg1 ;
-(id)initWithImageURL:(id)arg1 directResponseInfo:(id)arg2 frame:(CGRect)arg3 ;
-(void)setupSubviewsWithDirectResponseInfo:(id)arg1 ;
-(void)overlayContentViewTapped:(id)arg1 ;
-(IGDirectResponseOverlayViewButtonContentView *)overlayContentView;
-(IGTapButton *)overlayTappableElement;
-(void)showOverlayAnimated:(char)arg1 ;
-(void)setDelegate:(id<IGDirectResponseOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectResponseOverlayViewDelegate>)delegate;
@end

