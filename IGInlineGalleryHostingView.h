
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGInlineGalleryViewDelegate;
@class IGInlineGalleryView, NSString;

@interface IGInlineGalleryHostingView : UIView <UIGestureRecognizerDelegate> {

	id<IGInlineGalleryViewDelegate> _delegate;
	IGInlineGalleryView* _inlineGalleryView;

}

@property (assign,nonatomic,__weak) id<IGInlineGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGInlineGalleryView * inlineGalleryView;                      //@synthesize inlineGalleryView=_inlineGalleryView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didInteractOutsideWhenOpen;
-(IGInlineGalleryView *)inlineGalleryView;
-(id)initWithInlineGallery:(id)arg1 ;
-(void)setInlineGalleryView:(IGInlineGalleryView *)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<IGInlineGalleryViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

