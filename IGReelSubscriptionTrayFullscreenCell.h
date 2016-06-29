
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView;

@interface IGReelSubscriptionTrayFullscreenCell : UICollectionViewCell {

	UIView* _reelFullscreenView;
	UIView* _dimmingOverlayView;

}

@property (nonatomic,retain) UIView * reelFullscreenView;              //@synthesize reelFullscreenView=_reelFullscreenView - In the implementation block
@property (nonatomic,retain) UIView * dimmingOverlayView;              //@synthesize dimmingOverlayView=_dimmingOverlayView - In the implementation block
-(void)configureWithView:(id)arg1 ;
-(void)setDimming:(float)arg1 ;
-(UIView *)reelFullscreenView;
-(void)setReelFullscreenView:(UIView *)arg1 ;
-(UIView *)dimmingOverlayView;
-(void)setDimmingOverlayView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
@end

