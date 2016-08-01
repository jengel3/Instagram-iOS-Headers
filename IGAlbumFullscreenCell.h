
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGAlbumPlayerMediaViewType;
@class IGAlbumFullscreenOverlayView, UIView;

@interface IGAlbumFullscreenCell : UICollectionViewCell {

	IGAlbumFullscreenOverlayView* _overlayView;
	UIView*<IGAlbumPlayerMediaViewType> _mediaView;
	UIView* _dimmingView;

}

@property (nonatomic,readonly) UIView * dimmingView;                                     //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,readonly) IGAlbumFullscreenOverlayView * overlayView;               //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIView*<IGAlbumPlayerMediaViewType> mediaView;              //@synthesize mediaView=_mediaView - In the implementation block
-(void)setDimmingPercent:(float)arg1 ;
-(void)setMediaView:(UIView*<IGAlbumPlayerMediaViewType>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)prepareForReuse;
-(UIView *)dimmingView;
-(IGAlbumFullscreenOverlayView *)overlayView;
-(UIView*<IGAlbumPlayerMediaViewType>)mediaView;
@end

