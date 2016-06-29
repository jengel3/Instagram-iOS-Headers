
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGAlbumCameraPreviewActionViewDelegate;
@class UIView, IGTapButton;

@interface IGAlbumCameraPreviewActionView : UIView {

	id<IGAlbumCameraPreviewActionViewDelegate> _delegate;
	UIView* _backgroundView;
	IGTapButton* _albumButton;
	IGTapButton* _shareButton;

}

@property (nonatomic,retain) UIView * backgroundView;                                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) IGTapButton * albumButton;                                               //@synthesize albumButton=_albumButton - In the implementation block
@property (nonatomic,retain) IGTapButton * shareButton;                                               //@synthesize shareButton=_shareButton - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumCameraPreviewActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)shareButtonTapped;
-(IGTapButton *)albumButton;
-(void)setAlbumButton:(IGTapButton *)arg1 ;
-(void)setShareButton:(IGTapButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGAlbumCameraPreviewActionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGAlbumCameraPreviewActionViewDelegate>)delegate;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(IGTapButton *)shareButton;
@end

