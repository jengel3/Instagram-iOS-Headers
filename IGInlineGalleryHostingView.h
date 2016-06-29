
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGInlineGalleryViewDelegate;
@class IGInlineGalleryView, UICollectionView, NSString;

@interface IGInlineGalleryHostingView : UIView <UIGestureRecognizerDelegate> {

	id<IGInlineGalleryViewDelegate> _delegate;
	IGInlineGalleryView* _galleryView;

}

@property (nonatomic,retain) IGInlineGalleryView * galleryView;                            //@synthesize galleryView=_galleryView - In the implementation block
@property (assign,nonatomic) int state; 
@property (assign,nonatomic) int style; 
@property (nonatomic,readonly) UICollectionView * collectionView; 
@property (assign,nonatomic,__weak) id<IGInlineGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didInteractOutsideWhenOpen;
-(id)initWithInlineGallery:(id)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<IGInlineGalleryViewDelegate>)delegate;
-(int)state;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setState:(int)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(UICollectionView *)collectionView;
-(void)setGalleryView:(IGInlineGalleryView *)arg1 ;
-(IGInlineGalleryView *)galleryView;
@end

